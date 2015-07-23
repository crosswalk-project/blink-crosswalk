// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTouch.h"

namespace blink {

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getPreviousLocationInView() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getPreviousLocationInView();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getLocation() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getLocation();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getDelta() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getDelta();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getStartLocationInView() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getStartLocationInView();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getStartLocation() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getStartLocation();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCTouch::getId() {

        int ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getID();
        
        
        return ret_impl;
    }

    void CCTouch::setTouchInfo(int arg0, float arg1, float arg2) {

        ((cocos2d::CCTouch*)m_cocos2d_impl)->setTouchInfo((int)(arg0), (float)(arg1), (float)(arg2));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getLocationInView() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getLocationInView();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCTouch::getPreviousLocation() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCTouch*)m_cocos2d_impl)->getPreviousLocation();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    cocos2d::CCTouch* CCTouch::getCocos2dImpl() {
        return (cocos2d::CCTouch*)m_cocos2d_impl;
    }


    CCTouch::CCTouch() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTouch> CCTouch::create()
    {
        RefPtrWillBeRawPtr<CCTouch> ret = adoptRefWillBeNoop(new CCTouch());
        cocos2d::CCTouch* impl = new cocos2d::CCTouch();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTouch::~CCTouch() {
    }
} // namespace blink
