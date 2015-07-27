// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCAnimationFrame.h"

namespace blink {

    void CCAnimationFrame::setSpriteFrame(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->setSpriteFrame( _arg0);
    }

    ScriptValue CCAnimationFrame::getUserInfo(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->getUserInfo();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    void CCAnimationFrame::setDelayUnits(float arg0) {

        ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->setDelayUnits((float)(arg0));
    }

    ScriptValue CCAnimationFrame::getSpriteFrame(ScriptState* scriptState) {

        cocos2d::CCSpriteFrame* ret_impl = ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->getSpriteFrame();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }

    float CCAnimationFrame::getDelayUnits() {

        float ret_impl = ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->getDelayUnits();
        
        
        return ret_impl;
    }

    void CCAnimationFrame::setUserInfoWithDictionary(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->setUserInfo( _arg0);
    }

    bool CCAnimationFrame::initWithSpriteFrameWithDictionary(ScriptValue& arg0_wrapper, float arg1, CCDictionary* arg2) {
        SCRIPT_VALUE_WRAPPER(CCSpriteFrame, arg0_wrapper, arg0);
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());
        cocos2d::CCDictionary* _arg2 = (cocos2d::CCDictionary*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCAnimationFrame*)m_cocos2d_impl)->initWithSpriteFrame( _arg0, (float)(arg1),  _arg2);
        
        
        return ret_impl;
    }
    cocos2d::CCAnimationFrame* CCAnimationFrame::getCocos2dImpl() {
        return (cocos2d::CCAnimationFrame*)m_cocos2d_impl;
    }


    CCAnimationFrame::CCAnimationFrame() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAnimationFrame> CCAnimationFrame::create()
    {
        RefPtrWillBeRawPtr<CCAnimationFrame> ret = adoptRefWillBeNoop(new CCAnimationFrame());
        cocos2d::CCAnimationFrame* impl = new cocos2d::CCAnimationFrame();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }
} // namespace blink
