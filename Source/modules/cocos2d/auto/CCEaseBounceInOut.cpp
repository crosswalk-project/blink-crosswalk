// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseBounceInOut.h"

namespace blink {

    ScriptValue CCEaseBounceInOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseBounceInOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCEaseBounceInOut::update(float arg0) {

        ((cocos2d::CCEaseBounceInOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseBounceInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseBounceInOut* ret_impl = cocos2d::CCEaseBounceInOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseBounceInOut)
        
    }
    cocos2d::CCEaseBounceInOut* CCEaseBounceInOut::getCocos2dImpl() {
        return (cocos2d::CCEaseBounceInOut*)m_cocos2d_impl;
    }


    CCEaseBounceInOut::CCEaseBounceInOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseBounceInOut> CCEaseBounceInOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseBounceInOut> ret = adoptRefWillBeNoop(new CCEaseBounceInOut());
        cocos2d::CCEaseBounceInOut* impl = new cocos2d::CCEaseBounceInOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseBounceInOut::~CCEaseBounceInOut() {
    }
} // namespace blink
