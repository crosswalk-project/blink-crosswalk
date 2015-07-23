// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionSplitCols.h"

namespace blink {

    ScriptValue CCTransitionSplitCols::action(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionSplitCols*)m_cocos2d_impl)->action();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionSplitCols::easeActionWithAction(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionInterval, arg0_wrapper, arg0);
        cocos2d::CCActionInterval* _arg0 = (cocos2d::CCActionInterval*)(arg0->getCocos2dImpl());

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionSplitCols*)m_cocos2d_impl)->easeActionWithAction( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionSplitCols::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionSplitCols* ret_impl = cocos2d::CCTransitionSplitCols::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionSplitCols)
        
    }
    cocos2d::CCTransitionSplitCols* CCTransitionSplitCols::getCocos2dImpl() {
        return (cocos2d::CCTransitionSplitCols*)m_cocos2d_impl;
    }


    CCTransitionSplitCols::CCTransitionSplitCols() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionSplitCols> CCTransitionSplitCols::create()
    {
        RefPtrWillBeRawPtr<CCTransitionSplitCols> ret = adoptRefWillBeNoop(new CCTransitionSplitCols());
        cocos2d::CCTransitionSplitCols* impl = new cocos2d::CCTransitionSplitCols();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionSplitCols::~CCTransitionSplitCols() {
    }
} // namespace blink
