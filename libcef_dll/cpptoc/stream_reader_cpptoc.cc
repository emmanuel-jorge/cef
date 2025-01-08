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
// $hash=2eb506ee617a4dac513aaca641e5f4cec606e6e4$
//

#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"

#include "libcef_dll/ctocpp/read_handler_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_stream_reader_t* cef_stream_reader_create_for_file(
    const cef_string_t* fileName) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: fileName; type: string_byref_const
  DCHECK(fileName);
  if (!fileName) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefStreamReader> _retval =
      CefStreamReader::CreateForFile(CefString(fileName));

  // Return type: refptr_same
  return CefStreamReaderCppToC::Wrap(_retval);
}

CEF_EXPORT cef_stream_reader_t* cef_stream_reader_create_for_data(void* data,
                                                                  size_t size) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefStreamReader> _retval =
      CefStreamReader::CreateForData(data, size);

  // Return type: refptr_same
  return CefStreamReaderCppToC::Wrap(_retval);
}

CEF_EXPORT cef_stream_reader_t* cef_stream_reader_create_for_handler(
    cef_read_handler_t* handler) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: handler; type: refptr_diff
  DCHECK(handler);
  if (!handler) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefStreamReader> _retval =
      CefStreamReader::CreateForHandler(CefReadHandlerCToCpp::Wrap(handler));

  // Return type: refptr_same
  return CefStreamReaderCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK stream_reader_read(struct _cef_stream_reader_t* self,
                                       void* ptr,
                                       size_t size,
                                       size_t n) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: ptr; type: simple_byaddr
  DCHECK(ptr);
  if (!ptr) {
    return 0;
  }

  // Execute
  size_t _retval = CefStreamReaderCppToC::Get(self)->Read(ptr, size, n);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK stream_reader_seek(struct _cef_stream_reader_t* self,
                                    int64_t offset,
                                    int whence) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefStreamReaderCppToC::Get(self)->Seek(offset, whence);

  // Return type: simple
  return _retval;
}

int64_t CEF_CALLBACK stream_reader_tell(struct _cef_stream_reader_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int64_t _retval = CefStreamReaderCppToC::Get(self)->Tell();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK stream_reader_eof(struct _cef_stream_reader_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefStreamReaderCppToC::Get(self)->Eof();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK stream_reader_may_block(struct _cef_stream_reader_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefStreamReaderCppToC::Get(self)->MayBlock();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefStreamReaderCppToC::CefStreamReaderCppToC() {
  GetStruct()->read = stream_reader_read;
  GetStruct()->seek = stream_reader_seek;
  GetStruct()->tell = stream_reader_tell;
  GetStruct()->eof = stream_reader_eof;
  GetStruct()->may_block = stream_reader_may_block;
}

// DESTRUCTOR - Do not edit by hand.

CefStreamReaderCppToC::~CefStreamReaderCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefStreamReader> CefCppToCRefCounted<
    CefStreamReaderCppToC,
    CefStreamReader,
    cef_stream_reader_t>::UnwrapDerived(CefWrapperType type,
                                        cef_stream_reader_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefStreamReaderCppToC,
                                   CefStreamReader,
                                   cef_stream_reader_t>::kWrapperType =
    WT_STREAM_READER;
