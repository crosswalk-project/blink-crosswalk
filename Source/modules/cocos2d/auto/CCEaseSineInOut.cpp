// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseSineInOut.h"

namespace blink {

    ScriptValue CCEaseSineInOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseSineInOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCEaseSineInOut::update(float arg0) {

        ((cocos2d::CCEaseSineInOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseSineInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseSineInOut* ret_impl = cocos2d::CCEaseSineInOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseSineInOut)
        
    }
    cocos2d::CCEaseSineInOut* CCEaseSineInOut::getCocos2dImpl() {
        return (cocos2d::CCEaseSineInOut*)m_cocos2d_impl;
    }


    CCEaseSineInOut::CCEaseSineInOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseSineInOut> CCEaseSineInOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseSineInOut> ret = adoptRefWillBeNoop(new CCEaseSineInOut());
        cocos2d::CCEaseSineInOut* impl = new cocos2d::CCEaseSineInOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseSineInOut::~CCEaseSineInOut() {
    }
} // namespace blink
