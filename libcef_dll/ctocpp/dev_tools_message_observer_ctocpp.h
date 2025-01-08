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
// $hash=7a37c92e7fe2d9a9e49823b4f2cf3c8ba47890e2$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DEV_TOOLS_MESSAGE_OBSERVER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DEV_TOOLS_MESSAGE_OBSERVER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_devtools_message_observer_capi.h"
#include "include/cef_browser.h"
#include "include/cef_devtools_message_observer.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDevToolsMessageObserverCToCpp
    : public CefCToCppRefCounted<CefDevToolsMessageObserverCToCpp,
                                 CefDevToolsMessageObserver,
                                 cef_dev_tools_message_observer_t> {
 public:
  CefDevToolsMessageObserverCToCpp();
  virtual ~CefDevToolsMessageObserverCToCpp();

  // CefDevToolsMessageObserver methods.
  bool OnDevToolsMessage(CefRefPtr<CefBrowser> browser,
                         const void* message,
                         size_t message_size) override;
  void OnDevToolsMethodResult(CefRefPtr<CefBrowser> browser,
                              int message_id,
                              bool success,
                              const void* result,
                              size_t result_size) override;
  void OnDevToolsEvent(CefRefPtr<CefBrowser> browser,
                       const CefString& method,
                       const void* params,
                       size_t params_size) override;
  void OnDevToolsAgentAttached(CefRefPtr<CefBrowser> browser) override;
  void OnDevToolsAgentDetached(CefRefPtr<CefBrowser> browser) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DEV_TOOLS_MESSAGE_OBSERVER_CTOCPP_H_
