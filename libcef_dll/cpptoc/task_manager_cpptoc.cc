// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
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
// $hash=07933b22615488a634fd4df87e9691156ae23ec4$
//

#include "libcef_dll/cpptoc/task_manager_cpptoc.h"

#include <algorithm>

#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_task_manager_t* cef_task_manager_get() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTaskManager> _retval = CefTaskManager::GetTaskManager();

  // Return type: refptr_same
  return CefTaskManagerCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK
task_manager_get_tasks_count(struct _cef_task_manager_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  size_t _retval = CefTaskManagerCppToC::Get(self)->GetTasksCount();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
task_manager_get_task_ids_list(struct _cef_task_manager_t* self,
                               size_t* task_idsCount,
                               int64_t* task_ids) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: task_ids; type: simple_vec_byref
  DCHECK(task_idsCount && (*task_idsCount == 0 || task_ids));
  if (!task_idsCount || (*task_idsCount > 0 && !task_ids)) {
    return 0;
  }

  // Translate param: task_ids; type: simple_vec_byref
  std::vector<int64_t> task_idsList;
  if (task_idsCount && *task_idsCount > 0 && task_ids) {
    for (size_t i = 0; i < *task_idsCount; ++i) {
      task_idsList.push_back(task_ids[i]);
    }
  }

  // Execute
  bool _retval = CefTaskManagerCppToC::Get(self)->GetTaskIdsList(task_idsList);

  // Restore param: task_ids; type: simple_vec_byref
  if (task_idsCount && task_ids) {
    *task_idsCount = std::min(task_idsList.size(), *task_idsCount);
    if (*task_idsCount > 0) {
      for (size_t i = 0; i < *task_idsCount; ++i) {
        task_ids[i] = task_idsList[i];
      }
    }
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_manager_get_task_info(struct _cef_task_manager_t* self,
                                            int64_t task_id,
                                            struct _cef_task_info_t* info) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: info; type: struct_byref
  DCHECK(info);
  if (!info) {
    return 0;
  }
  if (!template_util::has_valid_size(info)) {
    DCHECK(false) << "invalid info->[base.]size";
    return 0;
  }

  // Translate param: info; type: struct_byref
  CefTaskInfo infoObj;
  if (info) {
    infoObj.AttachTo(*info);
  }

  // Execute
  bool _retval = CefTaskManagerCppToC::Get(self)->GetTaskInfo(task_id, infoObj);

  // Restore param: info; type: struct_byref
  if (info) {
    infoObj.DetachTo(*info);
  }

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_manager_kill_task(struct _cef_task_manager_t* self,
                                        int64_t task_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefTaskManagerCppToC::Get(self)->KillTask(task_id);

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTaskManagerCppToC::CefTaskManagerCppToC() {
  GetStruct()->get_tasks_count = task_manager_get_tasks_count;
  GetStruct()->get_task_ids_list = task_manager_get_task_ids_list;
  GetStruct()->get_task_info = task_manager_get_task_info;
  GetStruct()->kill_task = task_manager_kill_task;
}

// DESTRUCTOR - Do not edit by hand.

CefTaskManagerCppToC::~CefTaskManagerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefTaskManager>
CefCppToCRefCounted<CefTaskManagerCppToC, CefTaskManager, cef_task_manager_t>::
    UnwrapDerived(CefWrapperType type, cef_task_manager_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefTaskManagerCppToC,
                                   CefTaskManager,
                                   cef_task_manager_t>::kWrapperType =
    WT_TASK_MANAGER;
