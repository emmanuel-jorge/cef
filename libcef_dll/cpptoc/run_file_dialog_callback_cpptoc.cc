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
// $hash=5aec7a736ba6eb80bf371ded8b2e035f09080f4e$
//

#include "libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.h"

#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK run_file_dialog_callback_on_file_dialog_dismissed(
    struct _cef_run_file_dialog_callback_t* self,
    cef_string_list_t file_paths) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: file_paths

  // Translate param: file_paths; type: string_vec_byref_const
  std::vector<CefString> file_pathsList;
  transfer_string_list_contents(file_paths, file_pathsList);

  // Execute
  CefRunFileDialogCallbackCppToC::Get(self)->OnFileDialogDismissed(
      file_pathsList);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRunFileDialogCallbackCppToC::CefRunFileDialogCallbackCppToC() {
  GetStruct()->on_file_dialog_dismissed =
      run_file_dialog_callback_on_file_dialog_dismissed;
}

// DESTRUCTOR - Do not edit by hand.

CefRunFileDialogCallbackCppToC::~CefRunFileDialogCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefRunFileDialogCallback>
CefCppToCRefCounted<CefRunFileDialogCallbackCppToC,
                    CefRunFileDialogCallback,
                    cef_run_file_dialog_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_run_file_dialog_callback_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefRunFileDialogCallbackCppToC,
                        CefRunFileDialogCallback,
                        cef_run_file_dialog_callback_t>::kWrapperType =
        WT_RUN_FILE_DIALOG_CALLBACK;
