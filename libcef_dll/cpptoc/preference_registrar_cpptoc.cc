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
// $hash=1215ff3d1dd3fe7e2fa93f1f413f4102a3f63468$
//

#include "libcef_dll/cpptoc/preference_registrar_cpptoc.h"

#include "libcef_dll/cpptoc/value_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
preference_registrar_add_preference(struct _cef_preference_registrar_t* self,
                                    const cef_string_t* name,
                                    struct _cef_value_t* default_value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name) {
    return 0;
  }
  // Verify param: default_value; type: refptr_same
  DCHECK(default_value);
  if (!default_value) {
    return 0;
  }

  // Execute
  bool _retval = CefPreferenceRegistrarCppToC::Get(self)->AddPreference(
      CefString(name), CefValueCppToC::Unwrap(default_value));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefPreferenceRegistrarCppToC::CefPreferenceRegistrarCppToC() {
  GetStruct()->add_preference = preference_registrar_add_preference;
}

// DESTRUCTOR - Do not edit by hand.

CefPreferenceRegistrarCppToC::~CefPreferenceRegistrarCppToC() {}

template <>
CefOwnPtr<CefPreferenceRegistrar> CefCppToCScoped<CefPreferenceRegistrarCppToC,
                                                  CefPreferenceRegistrar,
                                                  cef_preference_registrar_t>::
    UnwrapDerivedOwn(CefWrapperType type, cef_preference_registrar_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return CefOwnPtr<CefPreferenceRegistrar>();
}

template <>
CefRawPtr<CefPreferenceRegistrar> CefCppToCScoped<CefPreferenceRegistrarCppToC,
                                                  CefPreferenceRegistrar,
                                                  cef_preference_registrar_t>::
    UnwrapDerivedRaw(CefWrapperType type, cef_preference_registrar_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCScoped<CefPreferenceRegistrarCppToC,
                               CefPreferenceRegistrar,
                               cef_preference_registrar_t>::kWrapperType =
    WT_PREFERENCE_REGISTRAR;
