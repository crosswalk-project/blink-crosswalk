// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCPageTurn3D.h"

namespace blink {

    void CCPageTurn3D::update(float arg0) {

        ((cocos2d::CCPageTurn3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCPageTurn3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCPageTurn3D* ret_impl = cocos2d::CCPageTurn3D::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCPageTurn3D)
        
    }
    cocos2d::CCPageTurn3D* CCPageTurn3D::getCocos2dImpl() {
        return (cocos2d::CCPageTurn3D*)m_cocos2d_impl;
    }


    CCPageTurn3D::CCPageTurn3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCPageTurn3D> CCPageTurn3D::create()
    {
        RefPtrWillBeRawPtr<CCPageTurn3D> ret = adoptRefWillBeNoop(new CCPageTurn3D());
        cocos2d::CCPageTurn3D* impl = new cocos2d::CCPageTurn3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCPageTurn3D::~CCPageTurn3D() {
    }
} // namespace blink
