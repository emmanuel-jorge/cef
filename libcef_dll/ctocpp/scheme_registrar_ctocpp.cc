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
// $hash=730f91e7aa8f8f9c5d15b3536257d25cc55b627a$
//

#include "libcef_dll/ctocpp/scheme_registrar_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefSchemeRegistrarCToCpp::AddCustomScheme(const CefString& scheme_name,
                                               int options) {
  cef_scheme_registrar_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_custom_scheme)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty()) {
    return false;
  }

  // Execute
  int _retval =
      _struct->add_custom_scheme(_struct, scheme_name.GetStruct(), options);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefSchemeRegistrarCToCpp::CefSchemeRegistrarCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefSchemeRegistrarCToCpp::~CefSchemeRegistrarCToCpp() {}

template <>
cef_scheme_registrar_t* CefCToCppScoped<
    CefSchemeRegistrarCToCpp,
    CefSchemeRegistrar,
    cef_scheme_registrar_t>::UnwrapDerivedOwn(CefWrapperType type,
                                              CefOwnPtr<CefSchemeRegistrar> c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
cef_scheme_registrar_t* CefCToCppScoped<
    CefSchemeRegistrarCToCpp,
    CefSchemeRegistrar,
    cef_scheme_registrar_t>::UnwrapDerivedRaw(CefWrapperType type,
                                              CefRawPtr<CefSchemeRegistrar> c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppScoped<CefSchemeRegistrarCToCpp,
                               CefSchemeRegistrar,
                               cef_scheme_registrar_t>::kWrapperType =
    WT_SCHEME_REGISTRAR;
