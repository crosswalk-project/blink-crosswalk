// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlSwitch.h"

namespace blink {

    void CCControlSwitch::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void CCControlSwitch::setOn(bool arg0) {

        ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->setOn((bool)(arg0));
    }

    void CCControlSwitch::setOn(bool arg0, bool arg1) {

        ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->setOn((bool)(arg0), (bool)(arg1));
    }

    bool CCControlSwitch::isOn() {

        bool ret_impl = ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->isOn();
        
        
        return ret_impl;
    }

    bool CCControlSwitch::initWithMaskSprite(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3, CCLabelTTF* arg4, CCLabelTTF* arg5) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());
        cocos2d::CCSprite* _arg3 = (cocos2d::CCSprite*)(arg3->getCocos2dImpl());
        cocos2d::CCLabelTTF* _arg4 = (cocos2d::CCLabelTTF*)(arg4->getCocos2dImpl());
        cocos2d::CCLabelTTF* _arg5 = (cocos2d::CCLabelTTF*)(arg5->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->initWithMaskSprite( _arg0,  _arg1,  _arg2,  _arg3,  _arg4,  _arg5);
        
        
        return ret_impl;
    }

    bool CCControlSwitch::initWithMaskSprite(CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());
        cocos2d::CCSprite* _arg3 = (cocos2d::CCSprite*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->initWithMaskSprite( _arg0,  _arg1,  _arg2,  _arg3);
        
        
        return ret_impl;
    }

    bool CCControlSwitch::hasMoved() {

        bool ret_impl = ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->hasMoved();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControlSwitch::locationFromTouch(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlSwitch*)m_cocos2d_impl)->locationFromTouch( _arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    ScriptValue CCControlSwitch::createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3, CCLabelTTF* arg4, CCLabelTTF* arg5) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());
        cocos2d::CCSprite* _arg3 = (cocos2d::CCSprite*)(arg3->getCocos2dImpl());
        cocos2d::CCLabelTTF* _arg4 = (cocos2d::CCLabelTTF*)(arg4->getCocos2dImpl());
        cocos2d::CCLabelTTF* _arg5 = (cocos2d::CCLabelTTF*)(arg5->getCocos2dImpl());

        cocos2d::extension::CCControlSwitch* ret_impl = cocos2d::extension::CCControlSwitch::create( _arg0,  _arg1,  _arg2,  _arg3,  _arg4,  _arg5);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSwitch)
        
    }
    ScriptValue CCControlSwitch::createInternal(ScriptState* scriptState, CCSprite* arg0, CCSprite* arg1, CCSprite* arg2, CCSprite* arg3) {
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());
        cocos2d::CCSprite* _arg1 = (cocos2d::CCSprite*)(arg1->getCocos2dImpl());
        cocos2d::CCSprite* _arg2 = (cocos2d::CCSprite*)(arg2->getCocos2dImpl());
        cocos2d::CCSprite* _arg3 = (cocos2d::CCSprite*)(arg3->getCocos2dImpl());

        cocos2d::extension::CCControlSwitch* ret_impl = cocos2d::extension::CCControlSwitch::create( _arg0,  _arg1,  _arg2,  _arg3);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlSwitch)
        
    }
    cocos2d::extension::CCControlSwitch* CCControlSwitch::getCocos2dImpl() {
        return (cocos2d::extension::CCControlSwitch*)m_cocos2d_impl;
    }


    CCControlSwitch::CCControlSwitch() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlSwitch> CCControlSwitch::create()
    {
        RefPtrWillBeRawPtr<CCControlSwitch> ret = adoptRefWillBeNoop(new CCControlSwitch());
        cocos2d::extension::CCControlSwitch* impl = new cocos2d::extension::CCControlSwitch();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlSwitch::~CCControlSwitch() {
    }
} // namespace blink
