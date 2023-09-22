// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
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
// $hash=1dadac1c1138021a5f38e52ccb8f9863f5a387b5$
//

#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/image_ctocpp.h"
#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") CefRefPtr<CefDragData> CefDragData::Create() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_drag_data_t* _retval = cef_drag_data_create();

  // Return type: refptr_same
  return CefDragDataCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") CefRefPtr<CefDragData> CefDragDataCToCpp::Clone() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clone)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_drag_data_t* _retval = _struct->clone(_struct);

  // Return type: refptr_same
  return CefDragDataCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefDragDataCToCpp::IsReadOnly() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDragDataCToCpp::IsLink() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_link)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_link(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDragDataCToCpp::IsFragment() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_fragment)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_fragment(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDragDataCToCpp::IsFile() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_file)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_file(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetLinkURL() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_url)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetLinkTitle() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_title)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_title(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetLinkMetadata() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_metadata)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_metadata(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetFragmentText() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_text)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetFragmentHtml() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_html)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_html(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetFragmentBaseURL() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_base_url)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_base_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDragDataCToCpp::GetFileName() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_file_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
size_t CefDragDataCToCpp::GetFileContents(CefRefPtr<CefStreamWriter> writer) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_contents)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: writer

  // Execute
  size_t _retval = _struct->get_file_contents(
      _struct, CefStreamWriterCToCpp::Unwrap(writer));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefDragDataCToCpp::GetFileNames(std::vector<CefString>& names) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_names)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList) {
    transfer_string_list_contents(names, namesList);
  }

  // Execute
  int _retval = _struct->get_file_names(_struct, namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefDragDataCToCpp::GetFilePaths(std::vector<CefString>& paths) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_paths)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: paths; type: string_vec_byref
  cef_string_list_t pathsList = cef_string_list_alloc();
  DCHECK(pathsList);
  if (pathsList) {
    transfer_string_list_contents(paths, pathsList);
  }

  // Execute
  int _retval = _struct->get_file_paths(_struct, pathsList);

  // Restore param:paths; type: string_vec_byref
  if (pathsList) {
    paths.clear();
    transfer_string_list_contents(pathsList, paths);
    cef_string_list_free(pathsList);
  }

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetLinkURL(const CefString& url) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_url)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: url

  // Execute
  _struct->set_link_url(_struct, url.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetLinkTitle(const CefString& title) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_title)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: title

  // Execute
  _struct->set_link_title(_struct, title.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetLinkMetadata(const CefString& data) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_metadata)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: data

  // Execute
  _struct->set_link_metadata(_struct, data.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetFragmentText(const CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: text

  // Execute
  _struct->set_fragment_text(_struct, text.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetFragmentHtml(const CefString& html) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_html)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: html

  // Execute
  _struct->set_fragment_html(_struct, html.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::SetFragmentBaseURL(const CefString& base_url) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_base_url)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: base_url

  // Execute
  _struct->set_fragment_base_url(_struct, base_url.GetStruct());
}

NO_SANITIZE("cfi-icall") void CefDragDataCToCpp::ResetFileContents() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, reset_file_contents)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->reset_file_contents(_struct);
}

NO_SANITIZE("cfi-icall")
void CefDragDataCToCpp::AddFile(const CefString& path,
                                const CefString& display_name) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_file)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(!path.empty());
  if (path.empty()) {
    return;
  }
  // Unverified params: display_name

  // Execute
  _struct->add_file(_struct, path.GetStruct(), display_name.GetStruct());
}

NO_SANITIZE("cfi-icall") void CefDragDataCToCpp::ClearFilenames() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_filenames)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->clear_filenames(_struct);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefImage> CefDragDataCToCpp::GetImage() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_image)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_image_t* _retval = _struct->get_image(_struct);

  // Return type: refptr_same
  return CefImageCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefPoint CefDragDataCToCpp::GetImageHotspot() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_image_hotspot)) {
    return CefPoint();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_image_hotspot(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefDragDataCToCpp::HasImage() {
  shutdown_checker::AssertNotShutdown();

  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_image)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_image(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefDragDataCToCpp::CefDragDataCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDragDataCToCpp::~CefDragDataCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_drag_data_t*
CefCToCppRefCounted<CefDragDataCToCpp, CefDragData, cef_drag_data_t>::
    UnwrapDerived(CefWrapperType type, CefDragData* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDragDataCToCpp,
                                   CefDragData,
                                   cef_drag_data_t>::kWrapperType =
    WT_DRAG_DATA;
