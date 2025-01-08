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
// $hash=d719eb90d5f74ded4f569e0e3cff4ff7b70d8035$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_urlrequest_capi.h"
#include "include/cef_urlrequest.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefURLRequestClientCToCpp
    : public CefCToCppRefCounted<CefURLRequestClientCToCpp,
                                 CefURLRequestClient,
                                 cef_urlrequest_client_t> {
 public:
  CefURLRequestClientCToCpp();
  virtual ~CefURLRequestClientCToCpp();

  // CefURLRequestClient methods.
  void OnRequestComplete(CefRefPtr<CefURLRequest> request) override;
  void OnUploadProgress(CefRefPtr<CefURLRequest> request,
                        int64_t current,
                        int64_t total) override;
  void OnDownloadProgress(CefRefPtr<CefURLRequest> request,
                          int64_t current,
                          int64_t total) override;
  void OnDownloadData(CefRefPtr<CefURLRequest> request,
                      const void* data,
                      size_t data_length) override;
  bool GetAuthCredentials(bool isProxy,
                          const CefString& host,
                          int port,
                          const CefString& realm,
                          const CefString& scheme,
                          CefRefPtr<CefAuthCallback> callback) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_
