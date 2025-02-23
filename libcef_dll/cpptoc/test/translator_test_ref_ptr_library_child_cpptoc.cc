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
// $hash=77ac3c6f92cae7e91d7c1961c302fcf4da441cb7$
//

#include "libcef_dll/cpptoc/test/translator_test_ref_ptr_library_child_cpptoc.h"
#include "libcef_dll/cpptoc/test/translator_test_ref_ptr_library_child_child_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_translator_test_ref_ptr_library_child_t*
cef_translator_test_ref_ptr_library_child_create(int value, int other_value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTranslatorTestRefPtrLibraryChild> _retval =
      CefTranslatorTestRefPtrLibraryChild::Create(value, other_value);

  // Return type: refptr_same
  return CefTranslatorTestRefPtrLibraryChildCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK translator_test_ref_ptr_library_child_get_other_value(
    struct _cef_translator_test_ref_ptr_library_child_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval =
      CefTranslatorTestRefPtrLibraryChildCppToC::Get(self)->GetOtherValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_ref_ptr_library_child_set_other_value(
    struct _cef_translator_test_ref_ptr_library_child_t* self,
    int value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefTranslatorTestRefPtrLibraryChildCppToC::Get(self)->SetOtherValue(value);
}

int CEF_CALLBACK translator_test_ref_ptr_library_child_get_value(
    struct _cef_translator_test_ref_ptr_library_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval =
      CefTranslatorTestRefPtrLibraryChildCppToC::Get(
          reinterpret_cast<cef_translator_test_ref_ptr_library_child_t*>(self))
          ->GetValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_ref_ptr_library_child_set_value(
    struct _cef_translator_test_ref_ptr_library_t* self,
    int value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefTranslatorTestRefPtrLibraryChildCppToC::Get(
      reinterpret_cast<cef_translator_test_ref_ptr_library_child_t*>(self))
      ->SetValue(value);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrLibraryChildCppToC::
    CefTranslatorTestRefPtrLibraryChildCppToC() {
  GetStruct()->get_other_value =
      translator_test_ref_ptr_library_child_get_other_value;
  GetStruct()->set_other_value =
      translator_test_ref_ptr_library_child_set_other_value;
  GetStruct()->base.get_value = translator_test_ref_ptr_library_child_get_value;
  GetStruct()->base.set_value = translator_test_ref_ptr_library_child_set_value;
}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrLibraryChildCppToC::
    ~CefTranslatorTestRefPtrLibraryChildCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefTranslatorTestRefPtrLibraryChild>
CefCppToCRefCounted<CefTranslatorTestRefPtrLibraryChildCppToC,
                    CefTranslatorTestRefPtrLibraryChild,
                    cef_translator_test_ref_ptr_library_child_t>::
    UnwrapDerived(CefWrapperType type,
                  cef_translator_test_ref_ptr_library_child_t* s) {
  if (type == WT_TRANSLATOR_TEST_REF_PTR_LIBRARY_CHILD_CHILD) {
    return CefTranslatorTestRefPtrLibraryChildChildCppToC::Unwrap(
        reinterpret_cast<cef_translator_test_ref_ptr_library_child_child_t*>(
            s));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<
    CefTranslatorTestRefPtrLibraryChildCppToC,
    CefTranslatorTestRefPtrLibraryChild,
    cef_translator_test_ref_ptr_library_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_REF_PTR_LIBRARY_CHILD;
