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
// $hash=dcb1844016560efe46f15482928ec7380108a605$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_REGISTRAR_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_REGISTRAR_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_preference_capi.h"
#include "include/cef_preference.h"
#include "libcef_dll/ctocpp/ctocpp_scoped.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPreferenceRegistrarCToCpp
    : public CefCToCppScoped<CefPreferenceRegistrarCToCpp,
                             CefPreferenceRegistrar,
                             cef_preference_registrar_t> {
 public:
  CefPreferenceRegistrarCToCpp();
  virtual ~CefPreferenceRegistrarCToCpp();

  // CefPreferenceRegistrar methods.
  bool AddPreference(const CefString& name,
                     CefRefPtr<CefValue> default_value) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_REGISTRAR_CTOCPP_H_
