// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCCamera.h"

namespace blink {

    void CCCamera::locate() {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->locate();
    }

    void CCCamera::restore() {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->restore();
    }

    void CCCamera::setEye(float arg0, float arg1, float arg2) {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->setEyeXYZ((float)(arg0), (float)(arg1), (float)(arg2));
    }

    void CCCamera::setCenter(float arg0, float arg1, float arg2) {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->setCenterXYZ((float)(arg0), (float)(arg1), (float)(arg2));
    }

    bool CCCamera::isDirty() {

        bool ret_impl = ((cocos2d::CCCamera*)m_cocos2d_impl)->isDirty();
        
        
        return ret_impl;
    }

    void CCCamera::init() {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->init();
    }

    void CCCamera::setDirty(bool arg0) {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->setDirty((bool)(arg0));
    }

    void CCCamera::setUp(float arg0, float arg1, float arg2) {

        ((cocos2d::CCCamera*)m_cocos2d_impl)->setUpXYZ((float)(arg0), (float)(arg1), (float)(arg2));
    }

    float CCCamera::getZEye() {

        float ret_impl = cocos2d::CCCamera::getZEye();
        
        
        return ret_impl;
    }
    cocos2d::CCCamera* CCCamera::getCocos2dImpl() {
        return (cocos2d::CCCamera*)m_cocos2d_impl;
    }


    CCCamera::CCCamera() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCCamera> CCCamera::create()
    {
        RefPtrWillBeRawPtr<CCCamera> ret = adoptRefWillBeNoop(new CCCamera());
        cocos2d::CCCamera* impl = new cocos2d::CCCamera();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCCamera::~CCCamera() {
    }
} // namespace blink
