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
// $hash=a047642c9310523ef9df8e2e4d5bf2a08fa461b1$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_MENU_BUTTON_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_MENU_BUTTON_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/views/cef_menu_button_capi.h"
#include "include/views/cef_menu_button.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefMenuButtonCppToC : public CefCppToCRefCounted<CefMenuButtonCppToC,
                                                       CefMenuButton,
                                                       cef_menu_button_t> {
 public:
  CefMenuButtonCppToC();
  virtual ~CefMenuButtonCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_MENU_BUTTON_CPPTOC_H_
