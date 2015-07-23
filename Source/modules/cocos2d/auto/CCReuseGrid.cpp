// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCReuseGrid.h"

namespace blink {

    void CCReuseGrid::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCReuseGrid*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCReuseGrid::initWithTimes(int arg0) {

        bool ret_impl = ((cocos2d::CCReuseGrid*)m_cocos2d_impl)->initWithTimes((int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCReuseGrid::createInternal(ScriptState* scriptState, int arg0) {

        cocos2d::CCReuseGrid* ret_impl = cocos2d::CCReuseGrid::create((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCReuseGrid)
        
    }
    cocos2d::CCReuseGrid* CCReuseGrid::getCocos2dImpl() {
        return (cocos2d::CCReuseGrid*)m_cocos2d_impl;
    }


    CCReuseGrid::CCReuseGrid() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCReuseGrid> CCReuseGrid::create()
    {
        RefPtrWillBeRawPtr<CCReuseGrid> ret = adoptRefWillBeNoop(new CCReuseGrid());
        cocos2d::CCReuseGrid* impl = new cocos2d::CCReuseGrid();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCReuseGrid::~CCReuseGrid() {
    }
} // namespace blink
