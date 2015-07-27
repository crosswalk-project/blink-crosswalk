// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTransitionSplitRows.h"

namespace blink {

    ScriptValue CCTransitionSplitRows::action(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCTransitionSplitRows*)m_cocos2d_impl)->action();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    ScriptValue CCTransitionSplitRows::createInternal(ScriptState* scriptState, float arg0, ScriptValue& arg1_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg1_wrapper, arg1);
        cocos2d::CCScene* _arg1 = (cocos2d::CCScene*)(arg1->getCocos2dImpl());

        cocos2d::CCTransitionSplitRows* ret_impl = cocos2d::CCTransitionSplitRows::create((float)(arg0),  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTransitionSplitRows)
        
    }
    cocos2d::CCTransitionSplitRows* CCTransitionSplitRows::getCocos2dImpl() {
        return (cocos2d::CCTransitionSplitRows*)m_cocos2d_impl;
    }


    CCTransitionSplitRows::CCTransitionSplitRows() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTransitionSplitRows> CCTransitionSplitRows::create()
    {
        RefPtrWillBeRawPtr<CCTransitionSplitRows> ret = adoptRefWillBeNoop(new CCTransitionSplitRows());
        cocos2d::CCTransitionSplitRows* impl = new cocos2d::CCTransitionSplitRows();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTransitionSplitRows::~CCTransitionSplitRows() {
    }
} // namespace blink
