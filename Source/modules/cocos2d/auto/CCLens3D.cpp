// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLens3D.h"

namespace blink {

    void CCLens3D::setConcave(bool arg0) {

        ((cocos2d::CCLens3D*)m_cocos2d_impl)->setConcave((bool)(arg0));
    }

    bool CCLens3D::initWithDuration(float arg0, CCSize* arg1, CCPoint* arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLens3D*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1,  *_arg2, (float)(arg3));
        
        
        return ret_impl;
    }

    void CCLens3D::setLensEffect(float arg0) {

        ((cocos2d::CCLens3D*)m_cocos2d_impl)->setLensEffect((float)(arg0));
    }

    void CCLens3D::update(float arg0) {

        ((cocos2d::CCLens3D*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCLens3D::setPositionInternal(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLens3D*)m_cocos2d_impl)->setPosition( *_arg0);
    }

    float CCLens3D::getLensEffect() {

        float ret_impl = ((cocos2d::CCLens3D*)m_cocos2d_impl)->getLensEffect();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCLens3D::getPosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCLens3D*)m_cocos2d_impl)->getPosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCLens3D::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, CCPoint* arg2, float arg3) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        cocos2d::CCLens3D* ret_impl = cocos2d::CCLens3D::create((float)(arg0),  *_arg1,  *_arg2, (float)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLens3D)
        
    }
    cocos2d::CCLens3D* CCLens3D::getCocos2dImpl() {
        return (cocos2d::CCLens3D*)m_cocos2d_impl;
    }


    CCLens3D::CCLens3D() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLens3D> CCLens3D::create()
    {
        RefPtrWillBeRawPtr<CCLens3D> ret = adoptRefWillBeNoop(new CCLens3D());
        cocos2d::CCLens3D* impl = new cocos2d::CCLens3D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCLens3D::~CCLens3D() {
    }
} // namespace blink
