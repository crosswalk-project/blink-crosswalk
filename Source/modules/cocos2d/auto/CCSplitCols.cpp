// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSplitCols.h"

namespace blink {

    void CCSplitCols::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSplitCols*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCSplitCols::initWithDuration(float arg0, unsigned int arg1) {

        bool ret_impl = ((cocos2d::CCSplitCols*)m_cocos2d_impl)->initWithDuration((float)(arg0), (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCSplitCols::update(float arg0) {

        ((cocos2d::CCSplitCols*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCSplitCols::createInternal(ScriptState* scriptState, float arg0, unsigned int arg1) {

        cocos2d::CCSplitCols* ret_impl = cocos2d::CCSplitCols::create((float)(arg0), (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSplitCols)
        
    }
    cocos2d::CCSplitCols* CCSplitCols::getCocos2dImpl() {
        return (cocos2d::CCSplitCols*)m_cocos2d_impl;
    }


    CCSplitCols::CCSplitCols() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSplitCols> CCSplitCols::create()
    {
        RefPtrWillBeRawPtr<CCSplitCols> ret = adoptRefWillBeNoop(new CCSplitCols());
        cocos2d::CCSplitCols* impl = new cocos2d::CCSplitCols();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSplitCols::~CCSplitCols() {
    }
} // namespace blink
