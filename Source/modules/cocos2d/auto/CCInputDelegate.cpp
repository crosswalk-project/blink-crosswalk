// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCInputDelegate.h"

namespace blink {

    bool CCInputDelegate::isAccelerometerEnabled() {

        bool ret_impl = ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->isAccelerometerEnabled();
        
        
        return ret_impl;
    }

    void CCInputDelegate::setKeypadEnabled(bool arg0) {

        ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->setKeypadEnabled((bool)(arg0));
    }

    int CCInputDelegate::getTouchMode() {

        int ret_impl = ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->getTouchMode();
        
        
        return ret_impl;
    }

    void CCInputDelegate::setAccelerometerEnabled(bool arg0) {

        ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->setAccelerometerEnabled((bool)(arg0));
    }

    bool CCInputDelegate::isKeypadEnabled() {

        bool ret_impl = ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->isKeypadEnabled();
        
        
        return ret_impl;
    }

    bool CCInputDelegate::isTouchEnabled() {

        bool ret_impl = ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->isTouchEnabled();
        
        
        return ret_impl;
    }

    void CCInputDelegate::setTouchPriority(int arg0) {

        ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->setTouchPriority((int)(arg0));
    }

    int CCInputDelegate::getTouchPriority() {

        int ret_impl = ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->getTouchPriority();
        
        
        return ret_impl;
    }

    void CCInputDelegate::setTouchEnabled(bool arg0) {

        ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->setTouchEnabled((bool)(arg0));
    }

    void CCInputDelegate::setTouchMode(int arg0) {

        ((cocos2d::extension::CCInputDelegate*)m_cocos2d_impl)->setTouchMode((cocos2d::ccTouchesMode)(arg0));
    }
    cocos2d::extension::CCInputDelegate* CCInputDelegate::getCocos2dImpl() {
        return (cocos2d::extension::CCInputDelegate*)m_cocos2d_impl;
    }


    CCInputDelegate::CCInputDelegate() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCInputDelegate> CCInputDelegate::create()
    {
        RefPtrWillBeRawPtr<CCInputDelegate> ret = adoptRefWillBeNoop(new CCInputDelegate());
        return ret.release();
    }


    CCInputDelegate::~CCInputDelegate() {
    }
} // namespace blink
