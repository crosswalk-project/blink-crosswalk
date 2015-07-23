// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCGridAction.h"

namespace blink {

    void CCGridAction::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCGridAction*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCGridAction::getGrid(ScriptState* scriptState) {

        cocos2d::CCGridBase* ret_impl = ((cocos2d::CCGridAction*)m_cocos2d_impl)->getGrid();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }

    bool CCGridAction::initWithDuration(float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCGridAction*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1);
        
        
        return ret_impl;
    }

    ScriptValue CCGridAction::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCGridAction*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCGridAction::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCGridAction* ret_impl = cocos2d::CCGridAction::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridAction)
        
    }
    cocos2d::CCGridAction* CCGridAction::getCocos2dImpl() {
        return (cocos2d::CCGridAction*)m_cocos2d_impl;
    }


    CCGridAction::CCGridAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCGridAction> CCGridAction::create()
    {
        RefPtrWillBeRawPtr<CCGridAction> ret = adoptRefWillBeNoop(new CCGridAction());
        cocos2d::CCGridAction* impl = new cocos2d::CCGridAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCGridAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCGridAction::~CCGridAction() {
    }
} // namespace blink
