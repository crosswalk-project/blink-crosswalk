// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlPotentiometer.h"

namespace blink {

    void CCControlPotentiometer::setPreviousLocation(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setPreviousLocation( *_arg0);
    }

    void CCControlPotentiometer::setProgressTimer(CCProgressTimer* arg0) {
        cocos2d::CCProgressTimer* _arg0 = (cocos2d::CCProgressTimer*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setProgressTimer( _arg0);
    }

    void CCControlPotentiometer::potentiometerMoved(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->potentiometerMoved( *_arg0);
    }

    float CCControlPotentiometer::getMinimumValue() {

        float ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getMinimumValue();
        
        
        return ret_impl;
    }

    void CCControlPotentiometer::setThumbSprite(CCSprite* arg0) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setThumbSprite( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControlPotentiometer::getPreviousLocation() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getPreviousLocation();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCControlPotentiometer::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCControlPotentiometer::setValue(float arg0) {

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setValue((float)(arg0));
    }

    void CCControlPotentiometer::setMaximumValue(float arg0) {

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setMaximumValue((float)(arg0));
    }

    void CCControlPotentiometer::setMinimumValue(float arg0) {

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->setMinimumValue((float)(arg0));
    }

    void CCControlPotentiometer::potentiometerEnded(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->potentiometerEnded( *_arg0);
    }

    float CCControlPotentiometer::distanceBetweenPointAndPoint(CCPoint* arg0, CCPoint* arg1) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());

        float ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->distanceBetweenPointAndPoint( *_arg0,  *_arg1);
        
        
        return ret_impl;
    }

    ScriptValue CCControlPotentiometer::getProgressTimer(ScriptState* scriptState) {

        cocos2d::CCProgressTimer* ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getProgressTimer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCProgressTimer)
        
    }

    float CCControlPotentiometer::getMaximumValue() {

        float ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getMaximumValue();
        
        
        return ret_impl;
    }

    float CCControlPotentiometer::angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(CCPoint* arg0, CCPoint* arg1, CCPoint* arg2, CCPoint* arg3) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());
        cocos2d::CCPoint* _arg1 = (cocos2d::CCPoint*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());

        float ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint( *_arg0,  *_arg1,  *_arg2,  *_arg3);
        
        
        return ret_impl;
    }

    bool CCControlPotentiometer::isTouchInside(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->isTouchInside( _arg0);
        
        
        return ret_impl;
    }

    float CCControlPotentiometer::getValue() {

        float ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getValue();
        
        
        return ret_impl;
    }

    void CCControlPotentiometer::potentiometerBegan(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->potentiometerBegan( *_arg0);
    }

    ScriptValue CCControlPotentiometer::getThumbSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->getThumbSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    bool CCControlPotentiometer::initWithTrackSprite_ProgressTimer_ThumbSprite(CCSprite* arg0, CCProgressTimer* arg1, CCSprite* arg2) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCProgressTimer* _arg1 = (cocos2d::CCProgressTimer*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl)->initWithTrackSprite_ProgressTimer_ThumbSprite( _arg0,  _arg1,  _arg2);
        
        
        return ret_impl;
    }

    ScriptValue CCControlPotentiometer::createInternal(ScriptState* scriptState, String arg0, String arg1, String arg2) {

        cocos2d::extension::CCControlPotentiometer* ret_impl = cocos2d::extension::CCControlPotentiometer::create((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlPotentiometer)
        
    }
    cocos2d::extension::CCControlPotentiometer* CCControlPotentiometer::getCocos2dImpl() {
        return (cocos2d::extension::CCControlPotentiometer*)m_cocos2d_impl;
    }


    CCControlPotentiometer::CCControlPotentiometer() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlPotentiometer> CCControlPotentiometer::create()
    {
        RefPtrWillBeRawPtr<CCControlPotentiometer> ret = adoptRefWillBeNoop(new CCControlPotentiometer());
        cocos2d::extension::CCControlPotentiometer* impl = new cocos2d::extension::CCControlPotentiometer();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlPotentiometer::~CCControlPotentiometer() {
    }
} // namespace blink
