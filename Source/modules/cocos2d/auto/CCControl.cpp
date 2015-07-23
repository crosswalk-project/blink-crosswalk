// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControl.h"

namespace blink {

    void CCControl::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    unsigned int CCControl::getState() {

        unsigned int ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->getState();
        
        
        return ret_impl;
    }

    bool CCControl::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    void CCControl::sendActionsForControlEvents(unsigned int arg0) {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->sendActionsForControlEvents((unsigned int)(arg0));
    }

    void CCControl::setSelected(bool arg0) {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->setSelected((bool)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControl::getTouchLocation(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->getTouchLocation( _arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCControl::isEnabled() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    bool CCControl::isTouchInside(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->isTouchInside( _arg0);
        
        
        return ret_impl;
    }

    void CCControl::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    void CCControl::needsLayout() {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->needsLayout();
    }

    bool CCControl::hasVisibleParents() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->hasVisibleParents();
        
        
        return ret_impl;
    }

    bool CCControl::isSelected() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->isSelected();
        
        
        return ret_impl;
    }

    bool CCControl::init() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCControl::setHighlighted(bool arg0) {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->setHighlighted((bool)(arg0));
    }

    void CCControl::registerWithTouchDispatcher() {

        ((cocos2d::extension::CCControl*)m_cocos2d_impl)->registerWithTouchDispatcher();
    }

    bool CCControl::isHighlighted() {

        bool ret_impl = ((cocos2d::extension::CCControl*)m_cocos2d_impl)->isHighlighted();
        
        
        return ret_impl;
    }
    cocos2d::extension::CCControl* CCControl::getCocos2dImpl() {
        return (cocos2d::extension::CCControl*)m_cocos2d_impl;
    }


    CCControl::CCControl() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControl> CCControl::create()
    {
        RefPtrWillBeRawPtr<CCControl> ret = adoptRefWillBeNoop(new CCControl());
        cocos2d::extension::CCControl* impl = new cocos2d::extension::CCControl();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControl::~CCControl() {
    }
} // namespace blink
