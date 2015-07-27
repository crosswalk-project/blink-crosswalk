// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ActionManager.h"

namespace blink {

    ScriptValue ActionManager::playActionByName(ScriptState* scriptState, String arg0, String arg1, CCCallFunc* arg2) {
        cocos2d::CCCallFunc* _arg2 = (cocos2d::CCCallFunc*)(arg2->getCocos2dImpl());

        cocos2d::extension::ActionObject* ret_impl = ((cocos2d::extension::ActionManager*)m_cocos2d_impl)->playActionByName((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()),  _arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ActionObject)
        
    }

    ScriptValue ActionManager::playActionByName(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::extension::ActionObject* ret_impl = ((cocos2d::extension::ActionManager*)m_cocos2d_impl)->playActionByName((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ActionObject)
        
    }

    ScriptValue ActionManager::getActionByName(ScriptState* scriptState, String arg0, String arg1) {

        cocos2d::extension::ActionObject* ret_impl = ((cocos2d::extension::ActionManager*)m_cocos2d_impl)->getActionByName((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ActionObject)
        
    }

    void ActionManager::releaseActions() {

        ((cocos2d::extension::ActionManager*)m_cocos2d_impl)->releaseActions();
    }

    void ActionManager::purge() {

        cocos2d::extension::ActionManager::purge();
    }

    ScriptValue ActionManager::getInstance(ScriptState* scriptState) {

        cocos2d::extension::ActionManager* ret_impl = cocos2d::extension::ActionManager::shareManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ActionManager)
        
    }
    cocos2d::extension::ActionManager* ActionManager::getCocos2dImpl() {
        return (cocos2d::extension::ActionManager*)m_cocos2d_impl;
    }


    ActionManager::ActionManager() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ActionManager> ActionManager::create()
    {
        RefPtrWillBeRawPtr<ActionManager> ret = adoptRefWillBeNoop(new ActionManager());
        return ret.release();
    }


    ActionManager::~ActionManager() {
    }
} // namespace blink
