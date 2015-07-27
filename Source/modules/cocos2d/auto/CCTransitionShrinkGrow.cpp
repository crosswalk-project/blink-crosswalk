// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionShrinkGrow.h"

namespace blink {

    ScriptValue CCTransitionShrinkGrow::easeActionWithAction(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionShrinkGrow*)m_cocos2d_impl)->easeActionWithAction( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionShrinkGrow::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionShrinkGrow* ret_impl = cocos2d::CCTransitionShrinkGrow::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionShrinkGrow)
        
    }
    cocos2d::CCTransitionShrinkGrow* CCTransitionShrinkGrow::getCocos2dImpl() {
        return (cocos2d::CCTransitionShrinkGrow*)m_cocos2d_impl;
    }


    CCTransitionShrinkGrow::CCTransitionShrinkGrow() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionShrinkGrow> CCTransitionShrinkGrow::create()
    {
        RefPtrWillBeRawPtr<CCTransitionShrinkGrow> ret = adoptRefWillBeNoop(new CCTransitionShrinkGrow());
        cocos2d::CCTransitionShrinkGrow* impl = new cocos2d::CCTransitionShrinkGrow();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionShrinkGrow::~CCTransitionShrinkGrow() {
    }
} // namespace blink
