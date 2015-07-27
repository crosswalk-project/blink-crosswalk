// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCShaky3D.h"

namespace blink {

    bool CCShaky3D::initWithDuration(float arg0, CCSize* arg1, int arg2, bool arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCShaky3D*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (int)(arg2), (bool)(arg3));
        
        
        return ret_impl;
    }

    void CCShaky3D::update(float arg0) {

        ((cocos2d::CCShaky3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCShaky3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, int arg2, bool arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCShaky3D* ret_impl = cocos2d::CCShaky3D::create((float)(arg0),  *_arg1, (int)(arg2), (bool)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCShaky3D)
        
    }
    cocos2d::CCShaky3D* CCShaky3D::getCocos2dImpl() {
        return (cocos2d::CCShaky3D*)m_cocos2d_impl;
    }


    CCShaky3D::CCShaky3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCShaky3D> CCShaky3D::create()
    {
        RefPtrWillBeRawPtr<CCShaky3D> ret = adoptRefWillBeNoop(new CCShaky3D());
        cocos2d::CCShaky3D* impl = new cocos2d::CCShaky3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCShaky3D::~CCShaky3D() {
    }
} // namespace blink
