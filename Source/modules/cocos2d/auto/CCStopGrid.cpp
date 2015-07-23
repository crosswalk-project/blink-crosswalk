// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCStopGrid.h"

namespace blink {

    void CCStopGrid::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCStopGrid*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCStopGrid::createInternal(ScriptState* scriptState) {

        cocos2d::CCStopGrid* ret_impl = cocos2d::CCStopGrid::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCStopGrid)
        
    }
    cocos2d::CCStopGrid* CCStopGrid::getCocos2dImpl() {
        return (cocos2d::CCStopGrid*)m_cocos2d_impl;
    }


    CCStopGrid::CCStopGrid() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCStopGrid> CCStopGrid::create()
    {
        RefPtrWillBeRawPtr<CCStopGrid> ret = adoptRefWillBeNoop(new CCStopGrid());
        cocos2d::CCStopGrid* impl = new cocos2d::CCStopGrid();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCStopGrid::~CCStopGrid() {
    }
} // namespace blink
