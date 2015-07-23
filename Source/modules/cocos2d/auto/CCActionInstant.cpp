// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCActionInstant.h"

namespace blink {

    ScriptValue CCActionInstant::reverse(ScriptState* scriptState) {

        cocos2d::CCFiniteTimeAction* ret_impl = ((cocos2d::CCActionInstant*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCFiniteTimeAction)
        
    }

    void CCActionInstant::update(float arg0) {

        ((cocos2d::CCActionInstant*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCActionInstant::step(float arg0) {

        ((cocos2d::CCActionInstant*)m_cocos2d_impl)->step((float)(arg0));
    }

    bool CCActionInstant::isDone() {

        bool ret_impl = ((cocos2d::CCActionInstant*)m_cocos2d_impl)->isDone();
        
        
        return ret_impl;
    }
    cocos2d::CCActionInstant* CCActionInstant::getCocos2dImpl() {
        return (cocos2d::CCActionInstant*)m_cocos2d_impl;
    }


    CCActionInstant::CCActionInstant() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCActionInstant> CCActionInstant::create()
    {
        RefPtrWillBeRawPtr<CCActionInstant> ret = adoptRefWillBeNoop(new CCActionInstant());
        cocos2d::CCActionInstant* impl = new cocos2d::CCActionInstant();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCActionInstant::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCActionInstant::~CCActionInstant() {
    }
} // namespace blink
