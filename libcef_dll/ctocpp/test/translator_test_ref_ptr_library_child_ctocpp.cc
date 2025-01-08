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
// $hash=3b1f88cda6c4e77299d39adeb3757634d9460b05$
//

#include "libcef_dll/ctocpp/test/translator_test_ref_ptr_library_child_ctocpp.h"

#include "libcef_dll/ctocpp/test/translator_test_ref_ptr_library_child_child_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTranslatorTestRefPtrLibraryChild>
CefTranslatorTestRefPtrLibraryChild::Create(int value, int other_value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_translator_test_ref_ptr_library_child_t* _retval =
      cef_translator_test_ref_ptr_library_child_create(value, other_value);

  // Return type: refptr_same
  return CefTranslatorTestRefPtrLibraryChildCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
int CefTranslatorTestRefPtrLibraryChildCToCpp::GetOtherValue() {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_library_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_other_value)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_other_value(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTranslatorTestRefPtrLibraryChildCToCpp::SetOtherValue(int value) {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_library_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_other_value)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_other_value(_struct, value);
}

NO_SANITIZE("cfi-icall")
int CefTranslatorTestRefPtrLibraryChildCToCpp::GetValue() {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_library_t* _struct =
      reinterpret_cast<cef_translator_test_ref_ptr_library_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_value)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_value(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTranslatorTestRefPtrLibraryChildCToCpp::SetValue(int value) {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_library_t* _struct =
      reinterpret_cast<cef_translator_test_ref_ptr_library_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_value)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_value(_struct, value);
}

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrLibraryChildCToCpp::
    CefTranslatorTestRefPtrLibraryChildCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrLibraryChildCToCpp::
    ~CefTranslatorTestRefPtrLibraryChildCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_translator_test_ref_ptr_library_child_t*
CefCToCppRefCounted<CefTranslatorTestRefPtrLibraryChildCToCpp,
                    CefTranslatorTestRefPtrLibraryChild,
                    cef_translator_test_ref_ptr_library_child_t>::
    UnwrapDerived(CefWrapperType type, CefTranslatorTestRefPtrLibraryChild* c) {
  if (type == WT_TRANSLATOR_TEST_REF_PTR_LIBRARY_CHILD_CHILD) {
    return reinterpret_cast<cef_translator_test_ref_ptr_library_child_t*>(
        CefTranslatorTestRefPtrLibraryChildChildCToCpp::Unwrap(
            reinterpret_cast<CefTranslatorTestRefPtrLibraryChildChild*>(c)));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<
    CefTranslatorTestRefPtrLibraryChildCToCpp,
    CefTranslatorTestRefPtrLibraryChild,
    cef_translator_test_ref_ptr_library_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_REF_PTR_LIBRARY_CHILD;
