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
// $hash=05dca3d4902b8782efa2e33388fc2c9e3d0a4976$
//

#include "libcef_dll/cpptoc/test/translator_test_scoped_client_cpptoc.h"

#include "libcef_dll/cpptoc/test/translator_test_scoped_client_child_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK translator_test_scoped_client_get_value(
    struct _cef_translator_test_scoped_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefTranslatorTestScopedClientCppToC::Get(self)->GetValue();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestScopedClientCppToC::CefTranslatorTestScopedClientCppToC() {
  GetStruct()->get_value = translator_test_scoped_client_get_value;
}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestScopedClientCppToC::~CefTranslatorTestScopedClientCppToC() {}

template <>
CefOwnPtr<CefTranslatorTestScopedClient>
CefCppToCScoped<CefTranslatorTestScopedClientCppToC,
                CefTranslatorTestScopedClient,
                cef_translator_test_scoped_client_t>::
    UnwrapDerivedOwn(CefWrapperType type,
                     cef_translator_test_scoped_client_t* s) {
  if (type == WT_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD) {
    return CefTranslatorTestScopedClientChildCppToC::UnwrapOwn(
        reinterpret_cast<cef_translator_test_scoped_client_child_t*>(s));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return CefOwnPtr<CefTranslatorTestScopedClient>();
}

template <>
CefRawPtr<CefTranslatorTestScopedClient>
CefCppToCScoped<CefTranslatorTestScopedClientCppToC,
                CefTranslatorTestScopedClient,
                cef_translator_test_scoped_client_t>::
    UnwrapDerivedRaw(CefWrapperType type,
                     cef_translator_test_scoped_client_t* s) {
  if (type == WT_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD) {
    return CefTranslatorTestScopedClientChildCppToC::UnwrapRaw(
        reinterpret_cast<cef_translator_test_scoped_client_child_t*>(s));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCScoped<CefTranslatorTestScopedClientCppToC,
                    CefTranslatorTestScopedClient,
                    cef_translator_test_scoped_client_t>::kWrapperType =
        WT_TRANSLATOR_TEST_SCOPED_CLIENT;
