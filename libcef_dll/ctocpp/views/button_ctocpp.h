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
// $hash=5188cdec31eacbc63c89fbe341f089a5d1dd0f7a$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_BUTTON_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_BUTTON_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_button_capi.h"
#include "include/capi/views/cef_label_button_capi.h"
#include "include/views/cef_button.h"
#include "include/views/cef_label_button.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefButtonCToCpp
    : public CefCToCppRefCounted<CefButtonCToCpp, CefButton, cef_button_t> {
 public:
  CefButtonCToCpp();
  virtual ~CefButtonCToCpp();

  // CefButton methods.
  CefRefPtr<CefLabelButton> AsLabelButton() override;
  void SetState(cef_button_state_t state) override;
  cef_button_state_t GetState() override;
  void SetInkDropEnabled(bool enabled) override;
  void SetTooltipText(const CefString& tooltip_text) override;
  void SetAccessibleName(const CefString& name) override;

  // CefView methods.
  CefRefPtr<CefBrowserView> AsBrowserView() override;
  CefRefPtr<CefButton> AsButton() override;
  CefRefPtr<CefPanel> AsPanel() override;
  CefRefPtr<CefScrollView> AsScrollView() override;
  CefRefPtr<CefTextfield> AsTextfield() override;
  CefString GetTypeString() override;
  CefString ToString(bool include_children) override;
  bool IsValid() override;
  bool IsAttached() override;
  bool IsSame(CefRefPtr<CefView> that) override;
  CefRefPtr<CefViewDelegate> GetDelegate() override;
  CefRefPtr<CefWindow> GetWindow() override;
  int GetID() override;
  void SetID(int id) override;
  int GetGroupID() override;
  void SetGroupID(int group_id) override;
  CefRefPtr<CefView> GetParentView() override;
  CefRefPtr<CefView> GetViewForID(int id) override;
  void SetBounds(const CefRect& bounds) override;
  CefRect GetBounds() override;
  CefRect GetBoundsInScreen() override;
  void SetSize(const CefSize& size) override;
  CefSize GetSize() override;
  void SetPosition(const CefPoint& position) override;
  CefPoint GetPosition() override;
  void SetInsets(const CefInsets& insets) override;
  CefInsets GetInsets() override;
  CefSize GetPreferredSize() override;
  void SizeToPreferredSize() override;
  CefSize GetMinimumSize() override;
  CefSize GetMaximumSize() override;
  int GetHeightForWidth(int width) override;
  void InvalidateLayout() override;
  void SetVisible(bool visible) override;
  bool IsVisible() override;
  bool IsDrawn() override;
  void SetEnabled(bool enabled) override;
  bool IsEnabled() override;
  void SetFocusable(bool focusable) override;
  bool IsFocusable() override;
  bool IsAccessibilityFocusable() override;
  bool HasFocus() override;
  void RequestFocus() override;
  void SetBackgroundColor(cef_color_t color) override;
  cef_color_t GetBackgroundColor() override;
  cef_color_t GetThemeColor(int color_id) override;
  bool ConvertPointToScreen(CefPoint& point) override;
  bool ConvertPointFromScreen(CefPoint& point) override;
  bool ConvertPointToWindow(CefPoint& point) override;
  bool ConvertPointFromWindow(CefPoint& point) override;
  bool ConvertPointToView(CefRefPtr<CefView> view, CefPoint& point) override;
  bool ConvertPointFromView(CefRefPtr<CefView> view, CefPoint& point) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_BUTTON_CTOCPP_H_
