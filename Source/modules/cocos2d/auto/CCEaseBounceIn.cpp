// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseBounceIn.h"

namespace blink {

    void CCEaseBounceIn::update(float arg0) {

        ((cocos2d::CCEaseBounceIn*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseBounceIn::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseBounceIn*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseBounceIn::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseBounceIn* ret_impl = cocos2d::CCEaseBounceIn::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseBounceIn)
        
    }
    cocos2d::CCEaseBounceIn* CCEaseBounceIn::getCocos2dImpl() {
        return (cocos2d::CCEaseBounceIn*)m_cocos2d_impl;
    }


    CCEaseBounceIn::CCEaseBounceIn() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseBounceIn> CCEaseBounceIn::create()
    {
        RefPtrWillBeRawPtr<CCEaseBounceIn> ret = adoptRefWillBeNoop(new CCEaseBounceIn());
        cocos2d::CCEaseBounceIn* impl = new cocos2d::CCEaseBounceIn();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseBounceIn::~CCEaseBounceIn() {
    }
} // namespace blink
