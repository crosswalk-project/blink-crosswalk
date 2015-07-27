// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseExponentialOut.h"

namespace blink {

    void CCEaseExponentialOut::update(float arg0) {

        ((cocos2d::CCEaseExponentialOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseExponentialOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseExponentialOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseExponentialOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseExponentialOut* ret_impl = cocos2d::CCEaseExponentialOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseExponentialOut)
        
    }
    cocos2d::CCEaseExponentialOut* CCEaseExponentialOut::getCocos2dImpl() {
        return (cocos2d::CCEaseExponentialOut*)m_cocos2d_impl;
    }


    CCEaseExponentialOut::CCEaseExponentialOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseExponentialOut> CCEaseExponentialOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseExponentialOut> ret = adoptRefWillBeNoop(new CCEaseExponentialOut());
        cocos2d::CCEaseExponentialOut* impl = new cocos2d::CCEaseExponentialOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseExponentialOut::~CCEaseExponentialOut() {
    }
} // namespace blink
