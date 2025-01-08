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
// $hash=a0d64e326ec359745340109135aebe0a1aba1b8a$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_XML_READER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_XML_READER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_xml_reader_capi.h"
#include "include/cef_xml_reader.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefXmlReaderCToCpp : public CefCToCppRefCounted<CefXmlReaderCToCpp,
                                                      CefXmlReader,
                                                      cef_xml_reader_t> {
 public:
  CefXmlReaderCToCpp();
  virtual ~CefXmlReaderCToCpp();

  // CefXmlReader methods.
  bool MoveToNextNode() override;
  bool Close() override;
  bool HasError() override;
  CefString GetError() override;
  NodeType GetType() override;
  int GetDepth() override;
  CefString GetLocalName() override;
  CefString GetPrefix() override;
  CefString GetQualifiedName() override;
  CefString GetNamespaceURI() override;
  CefString GetBaseURI() override;
  CefString GetXmlLang() override;
  bool IsEmptyElement() override;
  bool HasValue() override;
  CefString GetValue() override;
  bool HasAttributes() override;
  size_t GetAttributeCount() override;
  CefString GetAttribute(int index) override;
  CefString GetAttribute(const CefString& qualifiedName) override;
  CefString GetAttribute(const CefString& localName,
                         const CefString& namespaceURI) override;
  CefString GetInnerXml() override;
  CefString GetOuterXml() override;
  int GetLineNumber() override;
  bool MoveToAttribute(int index) override;
  bool MoveToAttribute(const CefString& qualifiedName) override;
  bool MoveToAttribute(const CefString& localName,
                       const CefString& namespaceURI) override;
  bool MoveToFirstAttribute() override;
  bool MoveToNextAttribute() override;
  bool MoveToCarryingElement() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_XML_READER_CTOCPP_H_
