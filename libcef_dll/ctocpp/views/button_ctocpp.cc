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
// $hash=737d500e2b7578a3cc2a222949073060bd333197$
//

#include "libcef_dll/ctocpp/views/button_ctocpp.h"

#include "libcef_dll/cpptoc/views/view_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/views/browser_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/label_button_ctocpp.h"
#include "libcef_dll/ctocpp/views/menu_button_ctocpp.h"
#include "libcef_dll/ctocpp/views/panel_ctocpp.h"
#include "libcef_dll/ctocpp/views/scroll_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/textfield_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/ctocpp/views/window_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefLabelButton> CefButtonCToCpp::AsLabelButton() {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, as_label_button)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_label_button_t* _retval = _struct->as_label_button(_struct);

  // Return type: refptr_same
  return CefLabelButtonCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetState(cef_button_state_t state) {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_state)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_state(_struct, state);
}

NO_SANITIZE("cfi-icall") cef_button_state_t CefButtonCToCpp::GetState() {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_state)) {
    return CEF_BUTTON_STATE_NORMAL;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_state_t _retval = _struct->get_state(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetInkDropEnabled(bool enabled) {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_ink_drop_enabled)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_ink_drop_enabled(_struct, enabled);
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetTooltipText(const CefString& tooltip_text) {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_tooltip_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: tooltip_text; type: string_byref_const
  DCHECK(!tooltip_text.empty());
  if (tooltip_text.empty()) {
    return;
  }

  // Execute
  _struct->set_tooltip_text(_struct, tooltip_text.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetAccessibleName(const CefString& name) {
  shutdown_checker::AssertNotShutdown();

  cef_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_accessible_name)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty()) {
    return;
  }

  // Execute
  _struct->set_accessible_name(_struct, name.GetStruct());
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefButtonCToCpp::AsBrowserView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_browser_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_view_t* _retval = _struct->as_browser_view(_struct);

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefButton> CefButtonCToCpp::AsButton() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_button)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_t* _retval = _struct->as_button(_struct);

  // Return type: refptr_same
  return CefButtonCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefPanel> CefButtonCToCpp::AsPanel() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_panel)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_panel_t* _retval = _struct->as_panel(_struct);

  // Return type: refptr_same
  return CefPanelCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefScrollView> CefButtonCToCpp::AsScrollView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_scroll_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_scroll_view_t* _retval = _struct->as_scroll_view(_struct);

  // Return type: refptr_same
  return CefScrollViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTextfield> CefButtonCToCpp::AsTextfield() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_textfield)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_textfield_t* _retval = _struct->as_textfield(_struct);

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefButtonCToCpp::GetTypeString() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_type_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_type_string(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefButtonCToCpp::ToString(bool include_children) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, to_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->to_string(_struct, include_children);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsAttached() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_attached)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_attached(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsSame(CefRefPtr<CefView> that) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_same)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->is_same(_struct, CefViewCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefViewDelegate> CefButtonCToCpp::GetDelegate() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_delegate)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_delegate_t* _retval = _struct->get_delegate(_struct);

  // Return type: refptr_diff
  return CefViewDelegateCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefWindow> CefButtonCToCpp::GetWindow() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_window)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") int CefButtonCToCpp::GetID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_id(_struct, id);
}

NO_SANITIZE("cfi-icall") int CefButtonCToCpp::GetGroupID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_group_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_group_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetGroupID(int group_id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_group_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_group_id(_struct, group_id);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefView> CefButtonCToCpp::GetParentView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_parent_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_parent_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefButtonCToCpp::GetViewForID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_view_for_id)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_view_for_id(_struct, id);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetBounds(const CefRect& bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_bounds)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct, &bounds);
}

NO_SANITIZE("cfi-icall") CefRect CefButtonCToCpp::GetBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefRect CefButtonCToCpp::GetBoundsInScreen() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetSize(const CefSize& size) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct, &size);
}

NO_SANITIZE("cfi-icall") CefSize CefButtonCToCpp::GetSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetPosition(const CefPoint& position) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_position)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct, &position);
}

NO_SANITIZE("cfi-icall") CefPoint CefButtonCToCpp::GetPosition() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_position)) {
    return CefPoint();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetInsets(const CefInsets& insets) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_insets)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_insets(_struct, &insets);
}

NO_SANITIZE("cfi-icall") CefInsets CefButtonCToCpp::GetInsets() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_insets)) {
    return CefInsets();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_insets_t _retval = _struct->get_insets(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefButtonCToCpp::GetPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_preferred_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SizeToPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

NO_SANITIZE("cfi-icall") CefSize CefButtonCToCpp::GetMinimumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_minimum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefButtonCToCpp::GetMaximumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_maximum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefButtonCToCpp::GetHeightForWidth(int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_height_for_width(_struct, width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::InvalidateLayout() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, invalidate_layout)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate_layout(_struct);
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetVisible(bool visible) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_visible)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct, visible);
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsVisible() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_visible)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsDrawn() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_drawn)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetEnabled(bool enabled) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_enabled)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled(_struct, enabled);
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsEnabled() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_enabled)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_enabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::SetFocusable(bool focusable) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_focusable)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focusable(_struct, focusable);
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::IsAccessibilityFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_accessibility_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_accessibility_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefButtonCToCpp::HasFocus() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, has_focus)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_focus(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefButtonCToCpp::RequestFocus() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, request_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->request_focus(_struct);
}

NO_SANITIZE("cfi-icall")
void CefButtonCToCpp::SetBackgroundColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_background_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_background_color(_struct, color);
}

NO_SANITIZE("cfi-icall") cef_color_t CefButtonCToCpp::GetBackgroundColor() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_background_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_background_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
cef_color_t CefButtonCToCpp::GetThemeColor(int color_id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_theme_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_theme_color(_struct, color_id);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointToScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointFromScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointToWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointFromWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointToView(CefRefPtr<CefView> view,
                                         CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_to_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefButtonCToCpp::ConvertPointFromView(CefRefPtr<CefView> view,
                                           CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_from_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefButtonCToCpp::CefButtonCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefButtonCToCpp::~CefButtonCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_button_t*
CefCToCppRefCounted<CefButtonCToCpp, CefButton, cef_button_t>::UnwrapDerived(
    CefWrapperType type,
    CefButton* c) {
  if (type == WT_LABEL_BUTTON) {
    return reinterpret_cast<cef_button_t*>(
        CefLabelButtonCToCpp::Unwrap(reinterpret_cast<CefLabelButton*>(c)));
  }
  if (type == WT_MENU_BUTTON) {
    return reinterpret_cast<cef_button_t*>(
        CefMenuButtonCToCpp::Unwrap(reinterpret_cast<CefMenuButton*>(c)));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefButtonCToCpp, CefButton, cef_button_t>::
    kWrapperType = WT_BUTTON;
