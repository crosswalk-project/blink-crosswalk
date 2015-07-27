// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCFiniteTimeAction.h"

namespace blink {

    void CCFiniteTimeAction::setDuration(float arg0) {

        ((cocos2d::CCFiniteTimeAction*)m_cocos2d_impl)->setDuration((float)(arg0));
    }

    float CCFiniteTimeAction::getDuration() {

        float ret_impl = ((cocos2d::CCFiniteTimeAction*)m_cocos2d_impl)->getDuration();
        
        
        return ret_impl;
    }

    ScriptValue CCFiniteTimeAction::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCFiniteTimeAction*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }
    cocos2d::CCFiniteTimeAction* CCFiniteTimeAction::getCocos2dImpl() {
        return (cocos2d::CCFiniteTimeAction*)m_cocos2d_impl;
    }


    CCFiniteTimeAction::CCFiniteTimeAction() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCFiniteTimeAction> CCFiniteTimeAction::create()
    {
        RefPtrWillBeRawPtr<CCFiniteTimeAction> ret = adoptRefWillBeNoop(new CCFiniteTimeAction());
        cocos2d::CCFiniteTimeAction* impl = new cocos2d::CCFiniteTimeAction();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCFiniteTimeAction::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCFiniteTimeAction::~CCFiniteTimeAction() {
    }
} // namespace blink
