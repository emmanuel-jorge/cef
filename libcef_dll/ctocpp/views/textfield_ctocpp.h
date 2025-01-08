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
// $hash=e41bfc4889367243b93ed435d9ccfe216aa85cec$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_textfield_capi.h"
#include "include/views/cef_textfield.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTextfieldCToCpp : public CefCToCppRefCounted<CefTextfieldCToCpp,
                                                      CefTextfield,
                                                      cef_textfield_t> {
 public:
  CefTextfieldCToCpp();
  virtual ~CefTextfieldCToCpp();

  // CefTextfield methods.
  void SetPasswordInput(bool password_input) override;
  bool IsPasswordInput() override;
  void SetReadOnly(bool read_only) override;
  bool IsReadOnly() override;
  CefString GetText() override;
  void SetText(const CefString& text) override;
  void AppendText(const CefString& text) override;
  void InsertOrReplaceText(const CefString& text) override;
  bool HasSelection() override;
  CefString GetSelectedText() override;
  void SelectAll(bool reversed) override;
  void ClearSelection() override;
  CefRange GetSelectedRange() override;
  void SelectRange(const CefRange& range) override;
  size_t GetCursorPosition() override;
  void SetTextColor(cef_color_t color) override;
  cef_color_t GetTextColor() override;
  void SetSelectionTextColor(cef_color_t color) override;
  cef_color_t GetSelectionTextColor() override;
  void SetSelectionBackgroundColor(cef_color_t color) override;
  cef_color_t GetSelectionBackgroundColor() override;
  void SetFontList(const CefString& font_list) override;
  void ApplyTextColor(cef_color_t color, const CefRange& range) override;
  void ApplyTextStyle(cef_text_style_t style,
                      bool add,
                      const CefRange& range) override;
  bool IsCommandEnabled(cef_text_field_commands_t command_id) override;
  void ExecuteCommand(cef_text_field_commands_t command_id) override;
  void ClearEditHistory() override;
  void SetPlaceholderText(const CefString& text) override;
  CefString GetPlaceholderText() override;
  void SetPlaceholderTextColor(cef_color_t color) override;
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

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
