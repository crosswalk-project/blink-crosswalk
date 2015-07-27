// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/LoadingBar.h"

namespace blink {

    void LoadingBar::setPercent(int arg0) {

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->setPercent((int)(arg0));
    }

    ScriptValue LoadingBar::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void LoadingBar::ignoreContentAdaptWithSize(bool arg0) {

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->ignoreContentAdaptWithSize((bool)(arg0));
    }

    void LoadingBar::loadTexture(String arg0, int arg1) {

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->loadTexture((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void LoadingBar::setDirection(int arg0) {

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->setDirection((cocos2d::gui::LoadingBarType)(arg0));
    }

    String LoadingBar::getDescription() {

        String ret_impl = String(((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void LoadingBar::setScale9Enabled(bool arg0) {

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->setScale9Enabled((bool)(arg0));
    }

    void LoadingBar::setCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->setCapInsets( *_arg0);
    }

    int LoadingBar::getDirection() {

        int ret_impl = ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->getDirection();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> LoadingBar::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int LoadingBar::getPercent() {

        int ret_impl = ((cocos2d::gui::LoadingBar*)m_cocos2d_impl)->getPercent();
        
        
        return ret_impl;
    }

    ScriptValue LoadingBar::createInternal(ScriptState* scriptState) {

        cocos2d::gui::LoadingBar* ret_impl = cocos2d::gui::LoadingBar::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LoadingBar)
        
    }
    cocos2d::gui::LoadingBar* LoadingBar::getCocos2dImpl() {
        return (cocos2d::gui::LoadingBar*)m_cocos2d_impl;
    }


    LoadingBar::LoadingBar() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<LoadingBar> LoadingBar::create()
    {
        RefPtrWillBeRawPtr<LoadingBar> ret = adoptRefWillBeNoop(new LoadingBar());
        cocos2d::gui::LoadingBar* impl = new cocos2d::gui::LoadingBar();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    LoadingBar::~LoadingBar() {
    }
} // namespace blink
