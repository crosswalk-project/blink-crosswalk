// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseOut.h"

namespace blink {

    void CCEaseOut::update(float arg0) {

        ((cocos2d::CCEaseOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCEaseOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseOut* ret_impl = cocos2d::CCEaseOut::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseOut)
        
    }
    cocos2d::CCEaseOut* CCEaseOut::getCocos2dImpl() {
        return (cocos2d::CCEaseOut*)m_cocos2d_impl;
    }


    CCEaseOut::CCEaseOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseOut> CCEaseOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseOut> ret = adoptRefWillBeNoop(new CCEaseOut());
        cocos2d::CCEaseOut* impl = new cocos2d::CCEaseOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseOut::~CCEaseOut() {
    }
} // namespace blink
