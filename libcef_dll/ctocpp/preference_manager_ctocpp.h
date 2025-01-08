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
// $hash=c0d3c42f4b9eb25ea2b611662239593836ffd4df$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_MANAGER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_MANAGER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_preference_capi.h"
#include "include/cef_preference.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPreferenceManagerCToCpp
    : public CefCToCppRefCounted<CefPreferenceManagerCToCpp,
                                 CefPreferenceManager,
                                 cef_preference_manager_t> {
 public:
  CefPreferenceManagerCToCpp();
  virtual ~CefPreferenceManagerCToCpp();

  // CefPreferenceManager methods.
  bool HasPreference(const CefString& name) override;
  CefRefPtr<CefValue> GetPreference(const CefString& name) override;
  CefRefPtr<CefDictionaryValue> GetAllPreferences(
      bool include_defaults) override;
  bool CanSetPreference(const CefString& name) override;
  bool SetPreference(const CefString& name,
                     CefRefPtr<CefValue> value,
                     CefString& error) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_PREFERENCE_MANAGER_CTOCPP_H_
