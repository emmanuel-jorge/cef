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
// $hash=12eb9c7531907aef107de6f1ec27e778652fa423$
//

#ifndef CEF_INCLUDE_CAPI_CEF_DOWNLOAD_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_DOWNLOAD_HANDLER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_download_item_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
/// Callback structure used to asynchronously continue a download.
///
typedef struct _cef_before_download_callback_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Call to continue the download. Set |download_path| to the full file path
  /// for the download including the file name or leave blank to use the
  /// suggested name and the default temp directory. Set |show_dialog| to true
  /// (1) if you do wish to show the default "Save As" dialog.
  ///
  void(CEF_CALLBACK* cont)(struct _cef_before_download_callback_t* self,
                           const cef_string_t* download_path,
                           int show_dialog);
} cef_before_download_callback_t;

///
/// Callback structure used to asynchronously cancel a download.
///
typedef struct _cef_download_item_callback_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Call to cancel the download.
  ///
  void(CEF_CALLBACK* cancel)(struct _cef_download_item_callback_t* self);

  ///
  /// Call to pause the download.
  ///
  void(CEF_CALLBACK* pause)(struct _cef_download_item_callback_t* self);

  ///
  /// Call to resume the download.
  ///
  void(CEF_CALLBACK* resume)(struct _cef_download_item_callback_t* self);
} cef_download_item_callback_t;

///
/// Structure used to handle file downloads. The functions of this structure
/// will called on the browser process UI thread.
///
typedef struct _cef_download_handler_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Called before a download begins in response to a user-initiated action
  /// (e.g. alt + link click or link click that returns a `Content-Disposition:
  /// attachment` response from the server). |url| is the target download URL
  /// and |request_function| is the target function (GET, POST, etc). Return
  /// true (1) to proceed with the download or false (0) to cancel the download.
  ///
  int(CEF_CALLBACK* can_download)(struct _cef_download_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  const cef_string_t* url,
                                  const cef_string_t* request_method);

  ///
  /// Called before a download begins. |suggested_name| is the suggested name
  /// for the download file. Return true (1) and execute |callback| either
  /// asynchronously or in this function to continue or cancel the download.
  /// Return false (0) to proceed with default handling (cancel with Alloy
  /// style, download shelf with Chrome style). Do not keep a reference to
  /// |download_item| outside of this function.
  ///
  int(CEF_CALLBACK* on_before_download)(
      struct _cef_download_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_download_item_t* download_item,
      const cef_string_t* suggested_name,
      struct _cef_before_download_callback_t* callback);

  ///
  /// Called when a download's status or progress information has been updated.
  /// This may be called multiple times before and after on_before_download().
  /// Execute |callback| either asynchronously or in this function to cancel the
  /// download if desired. Do not keep a reference to |download_item| outside of
  /// this function.
  ///
  void(CEF_CALLBACK* on_download_updated)(
      struct _cef_download_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_download_item_t* download_item,
      struct _cef_download_item_callback_t* callback);
} cef_download_handler_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_DOWNLOAD_HANDLER_CAPI_H_
