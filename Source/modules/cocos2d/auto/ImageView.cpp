// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/ImageView.h"

namespace blink {

    ScriptValue ImageView::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::ImageView*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void ImageView::ignoreContentAdaptWithSize(bool arg0) {

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->ignoreContentAdaptWithSize((bool)(arg0));
    }

    void ImageView::loadTexture(String arg0, int arg1) {

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->loadTexture((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    String ImageView::getDescription() {

        String ret_impl = String(((cocos2d::gui::ImageView*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void ImageView::setFlipY(bool arg0) {

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void ImageView::setFlipX(bool arg0) {

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    bool ImageView::isFlipX() {

        bool ret_impl = ((cocos2d::gui::ImageView*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    bool ImageView::isFlipY() {

        bool ret_impl = ((cocos2d::gui::ImageView*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    void ImageView::setScale9Enabled(bool arg0) {

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->setScale9Enabled((bool)(arg0));
    }

    void ImageView::setTextureRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->setTextureRect( *_arg0);
    }

    void ImageView::setCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::ImageView*)m_cocos2d_impl)->setCapInsets( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> ImageView::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::ImageView*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue ImageView::createInternal(ScriptState* scriptState) {

        cocos2d::gui::ImageView* ret_impl = cocos2d::gui::ImageView::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, ImageView)
        
    }
    cocos2d::gui::ImageView* ImageView::getCocos2dImpl() {
        return (cocos2d::gui::ImageView*)m_cocos2d_impl;
    }


    ImageView::ImageView() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<ImageView> ImageView::create()
    {
        RefPtrWillBeRawPtr<ImageView> ret = adoptRefWillBeNoop(new ImageView());
        cocos2d::gui::ImageView* impl = new cocos2d::gui::ImageView();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    ImageView::~ImageView() {
    }
} // namespace blink
