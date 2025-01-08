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
// $hash=07e13ef13e2f9cc7d45122245de201dde636f634$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTE_CREATE_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTE_CREATE_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_media_router_capi.h"
#include "include/cef_media_router.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefMediaRouteCreateCallbackCToCpp
    : public CefCToCppRefCounted<CefMediaRouteCreateCallbackCToCpp,
                                 CefMediaRouteCreateCallback,
                                 cef_media_route_create_callback_t> {
 public:
  CefMediaRouteCreateCallbackCToCpp();
  virtual ~CefMediaRouteCreateCallbackCToCpp();

  // CefMediaRouteCreateCallback methods.
  void OnMediaRouteCreateFinished(RouteCreateResult result,
                                  const CefString& error,
                                  CefRefPtr<CefMediaRoute> route) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTE_CREATE_CALLBACK_CTOCPP_H_
