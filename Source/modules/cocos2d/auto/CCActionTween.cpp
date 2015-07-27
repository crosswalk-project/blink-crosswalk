// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionTween.h"

namespace blink {

    void CCActionTween::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCActionTween*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCActionTween::update(float arg0) {

        ((cocos2d::CCActionTween*)m_cocos2d_impl)->update((float)(arg0));
    }

    bool CCActionTween::initWithDuration(float arg0, String arg1, float arg2, float arg3) {

        bool ret_impl = ((cocos2d::CCActionTween*)m_cocos2d_impl)->initWithDuration((float)(arg0), (char*)(arg1.utf8().data()), (float)(arg2), (float)(arg3));
        
        
        return ret_impl;
    }

    ScriptValue CCActionTween::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCActionTween*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCActionTween::createInternal(ScriptState* scriptState, float arg0, String arg1, float arg2, float arg3) {

        cocos2d::CCActionTween* ret_impl = cocos2d::CCActionTween::create((float)(arg0), (char*)(arg1.utf8().data()), (float)(arg2), (float)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionTween)
        
    }
    cocos2d::CCActionTween* CCActionTween::getCocos2dImpl() {
        return (cocos2d::CCActionTween*)m_cocos2d_impl;
    }


    CCActionTween::CCActionTween() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionTween> CCActionTween::create()
    {
        RefPtrWillBeRawPtr<CCActionTween> ret = adoptRefWillBeNoop(new CCActionTween());
        cocos2d::CCActionTween* impl = new cocos2d::CCActionTween();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionTween::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionTween::~CCActionTween() {
    }
} // namespace blink
