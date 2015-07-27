// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSplitRows.h"

namespace blink {

    void CCSplitRows::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSplitRows*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCSplitRows::initWithDuration(float arg0, unsigned int arg1) {

        bool ret_impl = ((cocos2d::CCSplitRows*)m_cocos2d_impl)->initWithDuration((float)(arg0), (unsigned int)(arg1));
        
        
        return ret_impl;
    }

    void CCSplitRows::update(float arg0) {

        ((cocos2d::CCSplitRows*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCSplitRows::createInternal(ScriptState* scriptState, float arg0, unsigned int arg1) {

        cocos2d::CCSplitRows* ret_impl = cocos2d::CCSplitRows::create((float)(arg0), (unsigned int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSplitRows)
        
    }
    cocos2d::CCSplitRows* CCSplitRows::getCocos2dImpl() {
        return (cocos2d::CCSplitRows*)m_cocos2d_impl;
    }


    CCSplitRows::CCSplitRows() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSplitRows> CCSplitRows::create()
    {
        RefPtrWillBeRawPtr<CCSplitRows> ret = adoptRefWillBeNoop(new CCSplitRows());
        cocos2d::CCSplitRows* impl = new cocos2d::CCSplitRows();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSplitRows::~CCSplitRows() {
    }
} // namespace blink
