// Copyright (c) 2025 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=c69ae778b903a525070a3223a0319e6bed078bf9$
//

#ifndef CEF_INCLUDE_CAPI_CEF_URLREQUEST_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_URLREQUEST_CAPI_H_
#pragma once

#include "include/capi/cef_auth_callback_capi.h"
#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_request_capi.h"
#include "include/capi/cef_request_context_capi.h"
#include "include/capi/cef_response_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cef_urlrequest_client_t;

///
/// Structure used to make a URL request. URL requests are not associated with a
/// browser instance so no cef_client_t callbacks will be executed. URL requests
/// can be created on any valid CEF thread in either the browser or render
/// process. Once created the functions of the URL request object must be
/// accessed on the same thread that created it.
///
typedef struct _cef_urlrequest_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Returns the request object used to create this URL request. The returned
  /// object is read-only and should not be modified.
  ///
  struct _cef_request_t*(CEF_CALLBACK* get_request)(
      struct _cef_urlrequest_t* self);

  ///
  /// Returns the client.
  ///
  struct _cef_urlrequest_client_t*(CEF_CALLBACK* get_client)(
      struct _cef_urlrequest_t* self);

  ///
  /// Returns the request status.
  ///
  cef_urlrequest_status_t(CEF_CALLBACK* get_request_status)(
      struct _cef_urlrequest_t* self);

  ///
  /// Returns the request error if status is UR_CANCELED or UR_FAILED, or 0
  /// otherwise.
  ///
  cef_errorcode_t(CEF_CALLBACK* get_request_error)(
      struct _cef_urlrequest_t* self);

  ///
  /// Returns the response, or NULL if no response information is available.
  /// Response information will only be available after the upload has
  /// completed. The returned object is read-only and should not be modified.
  ///
  struct _cef_response_t*(CEF_CALLBACK* get_response)(
      struct _cef_urlrequest_t* self);

  ///
  /// Returns true (1) if the response body was served from the cache. This
  /// includes responses for which revalidation was required.
  ///
  int(CEF_CALLBACK* response_was_cached)(struct _cef_urlrequest_t* self);

  ///
  /// Cancel the request.
  ///
  void(CEF_CALLBACK* cancel)(struct _cef_urlrequest_t* self);
} cef_urlrequest_t;

///
/// Create a new URL request that is not associated with a specific browser or
/// frame. Use cef_frame_t::CreateURLRequest instead if you want the request to
/// have this association, in which case it may be handled differently (see
/// documentation on that function). A request created with this function may
/// only originate from the browser process, and will behave as follows:
///   - It may be intercepted by the client via CefResourceRequestHandler or
///     CefSchemeHandlerFactory.
///   - POST data may only contain only a single element of type PDE_TYPE_FILE
///     or PDE_TYPE_BYTES.
///   - If |request_context| is empty the global request context will be used.
///
/// The |request| object will be marked as read-only after calling this
/// function.
///
CEF_EXPORT cef_urlrequest_t* cef_urlrequest_create(
    struct _cef_request_t* request,
    struct _cef_urlrequest_client_t* client,
    struct _cef_request_context_t* request_context);

///
/// Structure that should be implemented by the cef_urlrequest_t client. The
/// functions of this structure will be called on the same thread that created
/// the request unless otherwise documented.
///
typedef struct _cef_urlrequest_client_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Notifies the client that the request has completed. Use the
  /// cef_urlrequest_t::GetRequestStatus function to determine if the request
  /// was successful or not.
  ///
  void(CEF_CALLBACK* on_request_complete)(struct _cef_urlrequest_client_t* self,
                                          struct _cef_urlrequest_t* request);

  ///
  /// Notifies the client of upload progress. |current| denotes the number of
  /// bytes sent so far and |total| is the total size of uploading data (or -1
  /// if chunked upload is enabled). This function will only be called if the
  /// UR_FLAG_REPORT_UPLOAD_PROGRESS flag is set on the request.
  ///
  void(CEF_CALLBACK* on_upload_progress)(struct _cef_urlrequest_client_t* self,
                                         struct _cef_urlrequest_t* request,
                                         int64_t current,
                                         int64_t total);

  ///
  /// Notifies the client of download progress. |current| denotes the number of
  /// bytes received up to the call and |total| is the expected total size of
  /// the response (or -1 if not determined).
  ///
  void(CEF_CALLBACK* on_download_progress)(
      struct _cef_urlrequest_client_t* self,
      struct _cef_urlrequest_t* request,
      int64_t current,
      int64_t total);

  ///
  /// Called when some part of the response is read. |data| contains the current
  /// bytes received since the last call. This function will not be called if
  /// the UR_FLAG_NO_DOWNLOAD_DATA flag is set on the request.
  ///
  void(CEF_CALLBACK* on_download_data)(struct _cef_urlrequest_client_t* self,
                                       struct _cef_urlrequest_t* request,
                                       const void* data,
                                       size_t data_length);

  ///
  /// Called on the IO thread when the browser needs credentials from the user.
  /// |isProxy| indicates whether the host is a proxy server. |host| contains
  /// the hostname and |port| contains the port number. Return true (1) to
  /// continue the request and call cef_auth_callback_t::cont() when the
  /// authentication information is available. If the request has an associated
  /// browser/frame then returning false (0) will result in a call to
  /// GetAuthCredentials on the cef_request_handler_t associated with that
  /// browser, if any. Otherwise, returning false (0) will cancel the request
  /// immediately. This function will only be called for requests initiated from
  /// the browser process.
  ///
  int(CEF_CALLBACK* get_auth_credentials)(
      struct _cef_urlrequest_client_t* self,
      int isProxy,
      const cef_string_t* host,
      int port,
      const cef_string_t* realm,
      const cef_string_t* scheme,
      struct _cef_auth_callback_t* callback);
} cef_urlrequest_client_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_URLREQUEST_CAPI_H_
