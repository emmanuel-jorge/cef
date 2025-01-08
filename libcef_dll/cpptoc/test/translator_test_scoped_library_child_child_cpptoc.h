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
// $hash=8b83bc6baf30af2e9da2c9099a7d807260569019$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_LIBRARY_CHILD_CHILD_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_LIBRARY_CHILD_CHILD_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/test/cef_translator_test_capi.h"
#include "include/test/cef_translator_test.h"
#include "libcef_dll/cpptoc/cpptoc_scoped.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefTranslatorTestScopedLibraryChildChildCppToC
    : public CefCppToCScoped<CefTranslatorTestScopedLibraryChildChildCppToC,
                             CefTranslatorTestScopedLibraryChildChild,
                             cef_translator_test_scoped_library_child_child_t> {
 public:
  CefTranslatorTestScopedLibraryChildChildCppToC();
  virtual ~CefTranslatorTestScopedLibraryChildChildCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_TEST_TRANSLATOR_TEST_SCOPED_LIBRARY_CHILD_CHILD_CPPTOC_H_
