// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseBounceOut.h"

namespace blink {

    void CCEaseBounceOut::update(float arg0) {

        ((cocos2d::CCEaseBounceOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseBounceOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseBounceOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseBounceOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseBounceOut* ret_impl = cocos2d::CCEaseBounceOut::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseBounceOut)
        
    }
    cocos2d::CCEaseBounceOut* CCEaseBounceOut::getCocos2dImpl() {
        return (cocos2d::CCEaseBounceOut*)m_cocos2d_impl;
    }


    CCEaseBounceOut::CCEaseBounceOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseBounceOut> CCEaseBounceOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseBounceOut> ret = adoptRefWillBeNoop(new CCEaseBounceOut());
        cocos2d::CCEaseBounceOut* impl = new cocos2d::CCEaseBounceOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseBounceOut::~CCEaseBounceOut() {
    }
} // namespace blink
