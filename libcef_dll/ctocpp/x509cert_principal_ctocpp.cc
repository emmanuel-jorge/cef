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
// $hash=691ab06f0430c3d2eef77573f540914b77cb9b61$
//

#include "libcef_dll/ctocpp/x509cert_principal_ctocpp.h"

#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefString CefX509CertPrincipalCToCpp::GetDisplayName() {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_display_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_display_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefX509CertPrincipalCToCpp::GetCommonName() {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_common_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_common_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefX509CertPrincipalCToCpp::GetLocalityName() {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_locality_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_locality_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefX509CertPrincipalCToCpp::GetStateOrProvinceName() {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_state_or_province_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_state_or_province_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefX509CertPrincipalCToCpp::GetCountryName() {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_country_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_country_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
void CefX509CertPrincipalCToCpp::GetOrganizationNames(
    std::vector<CefString>& names) {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_organization_names)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList) {
    transfer_string_list_contents(names, namesList);
  }

  // Execute
  _struct->get_organization_names(_struct, namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }
}

NO_SANITIZE("cfi-icall")
void CefX509CertPrincipalCToCpp::GetOrganizationUnitNames(
    std::vector<CefString>& names) {
  shutdown_checker::AssertNotShutdown();

  cef_x509cert_principal_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_organization_unit_names)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList) {
    transfer_string_list_contents(names, namesList);
  }

  // Execute
  _struct->get_organization_unit_names(_struct, namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }
}

// CONSTRUCTOR - Do not edit by hand.

CefX509CertPrincipalCToCpp::CefX509CertPrincipalCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefX509CertPrincipalCToCpp::~CefX509CertPrincipalCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_x509cert_principal_t* CefCToCppRefCounted<
    CefX509CertPrincipalCToCpp,
    CefX509CertPrincipal,
    cef_x509cert_principal_t>::UnwrapDerived(CefWrapperType type,
                                             CefX509CertPrincipal* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefX509CertPrincipalCToCpp,
                                   CefX509CertPrincipal,
                                   cef_x509cert_principal_t>::kWrapperType =
    WT_X509CERT_PRINCIPAL;
