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
// $hash=5885130dc7ddd1676f3ce112689bf2146a525911$
//

#include "libcef_dll/ctocpp/response_filter_ctocpp.h"

#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") bool CefResponseFilterCToCpp::InitFilter() {
  shutdown_checker::AssertNotShutdown();

  cef_response_filter_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, init_filter)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->init_filter(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefResponseFilter::FilterStatus CefResponseFilterCToCpp::Filter(
    void* data_in,
    size_t data_in_size,
    size_t& data_in_read,
    void* data_out,
    size_t data_out_size,
    size_t& data_out_written) {
  shutdown_checker::AssertNotShutdown();

  cef_response_filter_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, filter)) {
    return RESPONSE_FILTER_ERROR;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data_out; type: simple_byaddr
  DCHECK(data_out);
  if (!data_out) {
    return RESPONSE_FILTER_ERROR;
  }
  // Unverified params: data_in

  // Execute
  cef_response_filter_status_t _retval =
      _struct->filter(_struct, data_in, data_in_size, &data_in_read, data_out,
                      data_out_size, &data_out_written);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefResponseFilterCToCpp::CefResponseFilterCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefResponseFilterCToCpp::~CefResponseFilterCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_response_filter_t* CefCToCppRefCounted<
    CefResponseFilterCToCpp,
    CefResponseFilter,
    cef_response_filter_t>::UnwrapDerived(CefWrapperType type,
                                          CefResponseFilter* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefResponseFilterCToCpp,
                                   CefResponseFilter,
                                   cef_response_filter_t>::kWrapperType =
    WT_RESPONSE_FILTER;
