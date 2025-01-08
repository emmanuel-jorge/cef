// Copyright (c) 2025 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=cda0c8884a3a8b0c997b4a9d10dceed6deb32197$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/views/cef_textfield_capi.h"
#include "include/views/cef_textfield.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefTextfieldCppToC : public CefCppToCRefCounted<CefTextfieldCppToC,
                                                      CefTextfield,
                                                      cef_textfield_t> {
 public:
  CefTextfieldCppToC();
  virtual ~CefTextfieldCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_CPPTOC_H_
