// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/Slider.h"

namespace blink {

    void Slider::setPercent(int arg0) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->setPercent((int)(arg0));
    }

    void Slider::loadSlidBallTextureNormal(String arg0, int arg1) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadSlidBallTextureNormal((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Slider::loadBarTexture(String arg0, int arg1) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadBarTexture((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Slider::loadProgressBarTexture(String arg0, int arg1) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadProgressBarTexture((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Slider::loadSlidBallTextures(String arg0, String arg1, String arg2, int arg3) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadSlidBallTextures((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (char*)(arg2.utf8().data()), (cocos2d::gui::TextureResType)(arg3));
    }

    void Slider::setCapInsetProgressBarRebderer(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->setCapInsetProgressBarRebderer( *_arg0);
    }

    void Slider::setCapInsetsBarRenderer(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->setCapInsetsBarRenderer( *_arg0);
    }

    String Slider::getDescription() {

        String ret_impl = String(((cocos2d::gui::Slider*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void Slider::setScale9Enabled(bool arg0) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->setScale9Enabled((bool)(arg0));
    }

    ScriptValue Slider::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Slider*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void Slider::setCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->setCapInsets( *_arg0);
    }

    void Slider::ignoreContentAdaptWithSize(bool arg0) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->ignoreContentAdaptWithSize((bool)(arg0));
    }

    void Slider::loadSlidBallTexturePressed(String arg0, int arg1) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadSlidBallTexturePressed((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Slider::loadSlidBallTextureDisabled(String arg0, int arg1) {

        ((cocos2d::gui::Slider*)m_cocos2d_impl)->loadSlidBallTextureDisabled((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    PassRefPtrWillBeRawPtr<CCSize> Slider::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Slider*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int Slider::getPercent() {

        int ret_impl = ((cocos2d::gui::Slider*)m_cocos2d_impl)->getPercent();
        
        
        return ret_impl;
    }

    ScriptValue Slider::createInternal(ScriptState* scriptState) {

        cocos2d::gui::Slider* ret_impl = cocos2d::gui::Slider::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Slider)
        
    }
    cocos2d::gui::Slider* Slider::getCocos2dImpl() {
        return (cocos2d::gui::Slider*)m_cocos2d_impl;
    }


    Slider::Slider() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<Slider> Slider::create()
    {
        RefPtrWillBeRawPtr<Slider> ret = adoptRefWillBeNoop(new Slider());
        cocos2d::gui::Slider* impl = new cocos2d::gui::Slider();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    Slider::~Slider() {
    }
} // namespace blink
