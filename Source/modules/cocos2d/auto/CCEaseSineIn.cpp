// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseSineIn.h"

namespace blink {

    void CCEaseSineIn::update(float arg0) {

        ((cocos2d::CCEaseSineIn*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseSineIn::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseSineIn*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseSineIn::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseSineIn* ret_impl = cocos2d::CCEaseSineIn::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseSineIn)
        
    }
    cocos2d::CCEaseSineIn* CCEaseSineIn::getCocos2dImpl() {
        return (cocos2d::CCEaseSineIn*)m_cocos2d_impl;
    }


    CCEaseSineIn::CCEaseSineIn() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseSineIn> CCEaseSineIn::create()
    {
        RefPtrWillBeRawPtr<CCEaseSineIn> ret = adoptRefWillBeNoop(new CCEaseSineIn());
        cocos2d::CCEaseSineIn* impl = new cocos2d::CCEaseSineIn();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseSineIn::~CCEaseSineIn() {
    }
} // namespace blink
