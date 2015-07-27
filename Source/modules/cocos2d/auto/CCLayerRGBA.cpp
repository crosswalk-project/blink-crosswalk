// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLayerRGBA.h"

namespace blink {

    void CCLayerRGBA::updateDisplayedColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->updateDisplayedColor( *_arg0);
    }

    void CCLayerRGBA::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->setColor( *_arg0);
    }

    bool CCLayerRGBA::isCascadeOpacityEnabled() {

        bool ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->isCascadeOpacityEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCLayerRGBA::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned char CCLayerRGBA::getDisplayedOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->getDisplayedOpacity();
        
        
        return ret_impl;
    }

    void CCLayerRGBA::setCascadeColorEnabled(bool arg0) {

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->setCascadeColorEnabled((bool)(arg0));
    }

    void CCLayerRGBA::setOpacity(unsigned char arg0) {

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    void CCLayerRGBA::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    void CCLayerRGBA::setCascadeOpacityEnabled(bool arg0) {

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->setCascadeOpacityEnabled((bool)(arg0));
    }

    void CCLayerRGBA::updateDisplayedOpacity(unsigned char arg0) {

        ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->updateDisplayedOpacity((unsigned char)(arg0));
    }

    bool CCLayerRGBA::init() {

        bool ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    unsigned char CCLayerRGBA::getOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    bool CCLayerRGBA::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    bool CCLayerRGBA::isCascadeColorEnabled() {

        bool ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->isCascadeColorEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCLayerRGBA::getDisplayedColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLayerRGBA*)m_cocos2d_impl)->getDisplayedColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCLayerRGBA::createInternal(ScriptState* scriptState) {

        cocos2d::CCLayerRGBA* ret_impl = cocos2d::CCLayerRGBA::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerRGBA)
        
    }
    cocos2d::CCLayerRGBA* CCLayerRGBA::getCocos2dImpl() {
        return (cocos2d::CCLayerRGBA*)m_cocos2d_impl;
    }


    CCLayerRGBA::CCLayerRGBA() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLayerRGBA> CCLayerRGBA::create()
    {
        RefPtrWillBeRawPtr<CCLayerRGBA> ret = adoptRefWillBeNoop(new CCLayerRGBA());
        cocos2d::CCLayerRGBA* impl = new cocos2d::CCLayerRGBA();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLayerRGBA::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLayerRGBA::~CCLayerRGBA() {
    }
} // namespace blink
