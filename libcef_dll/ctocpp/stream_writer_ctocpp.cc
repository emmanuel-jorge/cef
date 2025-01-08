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
// $hash=30210e24fb7dcf4e926f627b06f2bb490815cd75$
//

#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"

#include "libcef_dll/cpptoc/write_handler_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefStreamWriter> CefStreamWriter::CreateForFile(
    const CefString& fileName) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: fileName; type: string_byref_const
  DCHECK(!fileName.empty());
  if (fileName.empty()) {
    return nullptr;
  }

  // Execute
  cef_stream_writer_t* _retval =
      cef_stream_writer_create_for_file(fileName.GetStruct());

  // Return type: refptr_same
  return CefStreamWriterCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefStreamWriter> CefStreamWriter::CreateForHandler(
    CefRefPtr<CefWriteHandler> handler) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: handler; type: refptr_diff
  DCHECK(handler.get());
  if (!handler.get()) {
    return nullptr;
  }

  // Execute
  cef_stream_writer_t* _retval = cef_stream_writer_create_for_handler(
      CefWriteHandlerCppToC::Wrap(handler));

  // Return type: refptr_same
  return CefStreamWriterCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
size_t CefStreamWriterCToCpp::Write(const void* ptr, size_t size, size_t n) {
  shutdown_checker::AssertNotShutdown();

  cef_stream_writer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, write)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: ptr; type: simple_byaddr
  DCHECK(ptr);
  if (!ptr) {
    return 0;
  }

  // Execute
  size_t _retval = _struct->write(_struct, ptr, size, n);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefStreamWriterCToCpp::Seek(int64_t offset, int whence) {
  shutdown_checker::AssertNotShutdown();

  cef_stream_writer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, seek)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->seek(_struct, offset, whence);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int64_t CefStreamWriterCToCpp::Tell() {
  shutdown_checker::AssertNotShutdown();

  cef_stream_writer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, tell)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64_t _retval = _struct->tell(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefStreamWriterCToCpp::Flush() {
  shutdown_checker::AssertNotShutdown();

  cef_stream_writer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, flush)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->flush(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefStreamWriterCToCpp::MayBlock() {
  shutdown_checker::AssertNotShutdown();

  cef_stream_writer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, may_block)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->may_block(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefStreamWriterCToCpp::CefStreamWriterCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefStreamWriterCToCpp::~CefStreamWriterCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_stream_writer_t*
CefCToCppRefCounted<CefStreamWriterCToCpp,
                    CefStreamWriter,
                    cef_stream_writer_t>::UnwrapDerived(CefWrapperType type,
                                                        CefStreamWriter* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefStreamWriterCToCpp,
                                   CefStreamWriter,
                                   cef_stream_writer_t>::kWrapperType =
    WT_STREAM_WRITER;
