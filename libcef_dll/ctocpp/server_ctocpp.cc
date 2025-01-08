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
// $hash=7835d58f5151de2b902db9ef53920d9dd2a4a321$
//

#include "libcef_dll/ctocpp/server_ctocpp.h"

#include "libcef_dll/cpptoc/server_handler_cpptoc.h"
#include "libcef_dll/ctocpp/task_runner_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefServer::CreateServer(const CefString& address,
                             uint16_t port,
                             int backlog,
                             CefRefPtr<CefServerHandler> handler) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: address; type: string_byref_const
  DCHECK(!address.empty());
  if (address.empty()) {
    return;
  }
  // Verify param: handler; type: refptr_diff
  DCHECK(handler.get());
  if (!handler.get()) {
    return;
  }

  // Execute
  cef_server_create(address.GetStruct(), port, backlog,
                    CefServerHandlerCppToC::Wrap(handler));
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTaskRunner> CefServerCToCpp::GetTaskRunner() {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_task_runner)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = _struct->get_task_runner(_struct);

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") void CefServerCToCpp::Shutdown() {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, shutdown)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->shutdown(_struct);
}

NO_SANITIZE("cfi-icall") bool CefServerCToCpp::IsRunning() {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_running)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_running(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefServerCToCpp::GetAddress() {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_address)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_address(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefServerCToCpp::HasConnection() {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_connection)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_connection(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefServerCToCpp::IsValidConnection(int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid_connection)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid_connection(_struct, connection_id);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendHttp200Response(int connection_id,
                                          const CefString& content_type,
                                          const void* data,
                                          size_t data_size) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_http200response)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: content_type; type: string_byref_const
  DCHECK(!content_type.empty());
  if (content_type.empty()) {
    return;
  }
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data) {
    return;
  }

  // Execute
  _struct->send_http200response(_struct, connection_id,
                                content_type.GetStruct(), data, data_size);
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendHttp404Response(int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_http404response)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_http404response(_struct, connection_id);
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendHttp500Response(int connection_id,
                                          const CefString& error_message) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_http500response)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: error_message; type: string_byref_const
  DCHECK(!error_message.empty());
  if (error_message.empty()) {
    return;
  }

  // Execute
  _struct->send_http500response(_struct, connection_id,
                                error_message.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendHttpResponse(int connection_id,
                                       int response_code,
                                       const CefString& content_type,
                                       int64_t content_length,
                                       const HeaderMap& extra_headers) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_http_response)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: content_type; type: string_byref_const
  DCHECK(!content_type.empty());
  if (content_type.empty()) {
    return;
  }
  // Unverified params: extra_headers

  // Translate param: extra_headers; type: string_map_multi_byref_const
  cef_string_multimap_t extra_headersMultimap = cef_string_multimap_alloc();
  DCHECK(extra_headersMultimap);
  if (extra_headersMultimap) {
    transfer_string_multimap_contents(extra_headers, extra_headersMultimap);
  }

  // Execute
  _struct->send_http_response(_struct, connection_id, response_code,
                              content_type.GetStruct(), content_length,
                              extra_headersMultimap);

  // Restore param:extra_headers; type: string_map_multi_byref_const
  if (extra_headersMultimap) {
    cef_string_multimap_free(extra_headersMultimap);
  }
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendRawData(int connection_id,
                                  const void* data,
                                  size_t data_size) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_raw_data)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data) {
    return;
  }

  // Execute
  _struct->send_raw_data(_struct, connection_id, data, data_size);
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::CloseConnection(int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, close_connection)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->close_connection(_struct, connection_id);
}

NO_SANITIZE("cfi-icall")
void CefServerCToCpp::SendWebSocketMessage(int connection_id,
                                           const void* data,
                                           size_t data_size) {
  shutdown_checker::AssertNotShutdown();

  cef_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_web_socket_message)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data) {
    return;
  }

  // Execute
  _struct->send_web_socket_message(_struct, connection_id, data, data_size);
}

// CONSTRUCTOR - Do not edit by hand.

CefServerCToCpp::CefServerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefServerCToCpp::~CefServerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_server_t*
CefCToCppRefCounted<CefServerCToCpp, CefServer, cef_server_t>::UnwrapDerived(
    CefWrapperType type,
    CefServer* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefServerCToCpp, CefServer, cef_server_t>::
    kWrapperType = WT_SERVER;
