// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseExponentialInOut.h"

namespace blink {

    ScriptValue CCEaseExponentialInOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseExponentialInOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCEaseExponentialInOut::update(float arg0) {

        ((cocos2d::CCEaseExponentialInOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseExponentialInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseExponentialInOut* ret_impl = cocos2d::CCEaseExponentialInOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseExponentialInOut)
        
    }
    cocos2d::CCEaseExponentialInOut* CCEaseExponentialInOut::getCocos2dImpl() {
        return (cocos2d::CCEaseExponentialInOut*)m_cocos2d_impl;
    }


    CCEaseExponentialInOut::CCEaseExponentialInOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseExponentialInOut> CCEaseExponentialInOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseExponentialInOut> ret = adoptRefWillBeNoop(new CCEaseExponentialInOut());
        cocos2d::CCEaseExponentialInOut* impl = new cocos2d::CCEaseExponentialInOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseExponentialInOut::~CCEaseExponentialInOut() {
    }
} // namespace blink
