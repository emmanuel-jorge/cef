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
// $hash=f27cb1bc2b6d37a010819f818a9d7c9dff7ad02b$
//

#include "libcef_dll/ctocpp/print_handler_ctocpp.h"

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/print_dialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/print_job_callback_cpptoc.h"
#include "libcef_dll/cpptoc/print_settings_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefPrintHandlerCToCpp::OnPrintStart(CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_start)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_print_start(_struct, CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
void CefPrintHandlerCToCpp::OnPrintSettings(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefPrintSettings> settings,
    bool get_defaults) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_settings)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: settings; type: refptr_diff
  DCHECK(settings.get());
  if (!settings.get()) {
    return;
  }

  // Execute
  _struct->on_print_settings(_struct, CefBrowserCppToC::Wrap(browser),
                             CefPrintSettingsCppToC::Wrap(settings),
                             get_defaults);
}

NO_SANITIZE("cfi-icall")
bool CefPrintHandlerCToCpp::OnPrintDialog(
    CefRefPtr<CefBrowser> browser,
    bool has_selection,
    CefRefPtr<CefPrintDialogCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_dialog)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_print_dialog(
      _struct, CefBrowserCppToC::Wrap(browser), has_selection,
      CefPrintDialogCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefPrintHandlerCToCpp::OnPrintJob(
    CefRefPtr<CefBrowser> browser,
    const CefString& document_name,
    const CefString& pdf_file_path,
    CefRefPtr<CefPrintJobCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_job)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: document_name; type: string_byref_const
  DCHECK(!document_name.empty());
  if (document_name.empty()) {
    return false;
  }
  // Verify param: pdf_file_path; type: string_byref_const
  DCHECK(!pdf_file_path.empty());
  if (pdf_file_path.empty()) {
    return false;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_print_job(
      _struct, CefBrowserCppToC::Wrap(browser), document_name.GetStruct(),
      pdf_file_path.GetStruct(), CefPrintJobCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefPrintHandlerCToCpp::OnPrintReset(CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_print_reset)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_print_reset(_struct, CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
CefSize CefPrintHandlerCToCpp::GetPdfPaperSize(CefRefPtr<CefBrowser> browser,
                                               int device_units_per_inch) {
  shutdown_checker::AssertNotShutdown();

  cef_print_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_pdf_paper_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = _struct->get_pdf_paper_size(
      _struct, CefBrowserCppToC::Wrap(browser), device_units_per_inch);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefPrintHandlerCToCpp::CefPrintHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefPrintHandlerCToCpp::~CefPrintHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_print_handler_t*
CefCToCppRefCounted<CefPrintHandlerCToCpp,
                    CefPrintHandler,
                    cef_print_handler_t>::UnwrapDerived(CefWrapperType type,
                                                        CefPrintHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefPrintHandlerCToCpp,
                                   CefPrintHandler,
                                   cef_print_handler_t>::kWrapperType =
    WT_PRINT_HANDLER;
