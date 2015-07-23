// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCEaseInOut.h"

namespace blink {

    ScriptValue CCEaseInOut::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCEaseInOut*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    void CCEaseInOut::update(float arg0) {

        ((cocos2d::CCEaseInOut*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCEaseInOut::createInternal(ScriptState* scriptState, ScriptValue& arg0_wrapper, float arg1) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCEaseInOut* ret_impl = cocos2d::CCEaseInOut::create( _arg0, (float)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCEaseInOut)
        
    }
    cocos2d::CCEaseInOut* CCEaseInOut::getCocos2dImpl() {
        return (cocos2d::CCEaseInOut*)m_cocos2d_impl;
    }


    CCEaseInOut::CCEaseInOut() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCEaseInOut> CCEaseInOut::create()
    {
        RefPtrWillBeRawPtr<CCEaseInOut> ret = adoptRefWillBeNoop(new CCEaseInOut());
        cocos2d::CCEaseInOut* impl = new cocos2d::CCEaseInOut();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCEaseInOut::~CCEaseInOut() {
    }
} // namespace blink
