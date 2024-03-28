#!/usr/bin/env python
# Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
# reserved. Use of this source code is governed by a BSD-style license
# that can be found in the LICENSE file.
"""
A simple utility function to merge color enum files into a single enum file.
"""

from __future__ import absolute_import
from __future__ import print_function
from cef_parser import get_copyright
from file_util import *
import os
import re
import string
import sys


def MakeFileSegment(input):
  result = """

// ---------------------------------------------------------------------------
// From $FILE$:

"""

  result = result.replace('$FILE$', input.replace('../../', ''))

  contents = read_file(input)

  # Extract the portion that defines the enum values.
  start_str = "\n// clang-format off"
  start_pos = contents.find(start_str)
  assert start_pos > 0, input
  end_pos1 = contents.find("\n#include", start_pos)
  end_pos2 = contents.find("\n// clang-format on", start_pos)
  end_pos = min(end_pos1, end_pos2)
  assert end_pos > start_pos, input

  extract = contents[start_pos + len(start_str):end_pos].strip()

  return result + extract


def MakeFile(output, input):
  # Header string.
  result = get_copyright(full=True, translator=False) + \
"""//
// ---------------------------------------------------------------------------
//
// This file is generated by the make_colorids_header.py tool.
//

#ifndef $GUARD$
#define $GUARD$
#pragma once

#include "include/base/cef_build.h"
"""

  # Generate the file segments.
  segments = ''
  for file in input:
    segments += MakeFileSegment(file)

  # Extract the unique names of all defines.
  p = re.compile('#define\s([A-Za-z0-9_]{1,})\s')
  all_defines = sorted(set(p.findall(segments)))

  undefines = "\n".join(["#undef %s" % define for define in all_defines])

  # Undefine all defines that will be used in this header.
  contents = """
// Undefine the macros that will be defined in this file.
// This avoids previous definition conflicts with Chromium.
""" + undefines + segments + """

#include "include/base/internal/cef_color_id_macros.inc"

#ifdef __cplusplus
extern "C" {
#endif

///
/// All input, intermediary, and output colors known to CEF/Chromium.
/// Clients can optionally extend this enum with additional values.
/// Clients define enum values from kChromeColorsEnd. Values named
/// beginning with "kColor" represent the actual colors; the rest are
/// markers.
///
typedef enum {
  kUiColorsStart = 0,

  COLOR_IDS

  kUiColorsEnd,

  kComponentsColorsStart = kUiColorsEnd,

  COMPONENTS_COLOR_IDS

  kComponentsColorsEnd,

  kChromeColorsStart = kComponentsColorsEnd,

  CHROME_COLOR_IDS

  // Clients must start custom color IDs from this value.
  kChromeColorsEnd,

  // Clients must not assign IDs larger than this value. This is used to
  // verify that color IDs and color set IDs are not interchanged.
  kUiColorsLast = 0xffff
} cef_color_id_t;

#ifdef __cplusplus
}
#endif

// Note that this second include is not redundant. The second inclusion of the
// .inc file serves to undefine the macros the first inclusion defined.
#include "include/base/internal/cef_color_id_macros.inc"

// Undefine the macros that were defined in this file.
"""

  # Undefine all defines that were used in this header.
  contents += undefines

  replacements = (
      # Update platform defines.
      ('BUILDFLAG(IS_', 'defined(OS_'),
      ('defined(USE_AURA)', '!defined(OS_MAC)'),
      # Update enum value style.
      ('kColor', 'CEF_Color'),
      ('kUiColors', 'CEF_UiColors'),
      ('kComponentsColors', 'CEF_ComponentsColors'),
      ('kChromeColors', 'CEF_ChromeColors'))
  for find, replace in replacements:
    contents = contents.replace(find, replace)

  result += contents

  # Add footer string.
  result += """

#endif  // $GUARD$
"""

  # Add the guard string.
  filename = os.path.split(output)[1]
  guard = 'CEF_INCLUDE_' + filename.replace('.', '_').upper() + '_'
  result = result.replace('$GUARD$', guard)

  write_file_if_changed(output, result)


def main(argv):
  if len(argv) < 3:
    print(("Usage:\n  %s <output_file> <input_file1> [input_file2] ... " %
           argv[0]))
    sys.exit(-1)
  MakeFile(argv[1], argv[2:])


if '__main__' == __name__:
  main(sys.argv)
