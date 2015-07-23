// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCNodeRGBA.h"

namespace blink {

    void CCNodeRGBA::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }

    void CCNodeRGBA::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->setColor( *_arg0);
    }

    bool CCNodeRGBA::isCascadeOpacityEnabled() {

        bool ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->isCascadeOpacityEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCNodeRGBA::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned char CCNodeRGBA::getDisplayedOpacity() {

        unsigned char ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->getDisplayedOpacity();
        
        
        return ret_impl;
    }

    void CCNodeRGBA::setCascadeColorEnabled(bool arg0) {

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->setCascadeColorEnabled((bool)(arg0));
    }

    void CCNodeRGBA::setOpacity(unsigned char arg0) {

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    void CCNodeRGBA::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    void CCNodeRGBA::setCascadeOpacityEnabled(bool arg0) {

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->setCascadeOpacityEnabled((bool)(arg0));
    }

    void CCNodeRGBA::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCNodeRGBA::init() {

        bool ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    unsigned char CCNodeRGBA::getOpacity() {

        unsigned char ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    bool CCNodeRGBA::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    bool CCNodeRGBA::isCascadeColorEnabled() {

        bool ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->isCascadeColorEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCNodeRGBA::getDisplayedColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCNodeRGBA*)m_cocos2d_impl)->getDisplayedColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCNodeRGBA::createInternal(ScriptState* scriptState) {

        cocos2d::CCNodeRGBA* ret_impl = cocos2d::CCNodeRGBA::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNodeRGBA)
        
    }
    cocos2d::CCNodeRGBA* CCNodeRGBA::getCocos2dImpl() {
        return (cocos2d::CCNodeRGBA*)m_cocos2d_impl;
    }


    CCNodeRGBA::CCNodeRGBA() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCNodeRGBA> CCNodeRGBA::create()
    {
        RefPtrWillBeRawPtr<CCNodeRGBA> ret = adoptRefWillBeNoop(new CCNodeRGBA());
        cocos2d::CCNodeRGBA* impl = new cocos2d::CCNodeRGBA();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCNodeRGBA::~CCNodeRGBA() {
    }
} // namespace blink
