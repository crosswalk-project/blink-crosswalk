// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/Layout.h"

namespace blink {

    void Layout::setBackGroundColorVector(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundColorVector( *_arg0);
    }

    void Layout::addChild(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void Layout::addChild(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->addChild( _arg0);
    }

    void Layout::addChild(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    void Layout::setClippingType(int arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setClippingType((cocos2d::gui::LayoutClippingType)(arg0));
    }

    void Layout::setBackGroundColorType(int arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundColorType((cocos2d::gui::LayoutBackGroundColorType)(arg0));
    }

    String Layout::getDescription() {

        String ret_impl = String(((cocos2d::gui::Layout*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    void Layout::removeBackGroundImage() {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->removeBackGroundImage();
    }

    void Layout::setBackGroundImage(String arg0, int arg1) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundImage((char*)(arg0.utf8().data()), (cocos2d::gui::TextureResType)(arg1));
    }

    void Layout::setBackGroundColor(ccColor3B* arg0, ccColor3B* arg1) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());
        cocos2d::ccColor3B* _arg1 = (cocos2d::ccColor3B*)(arg1->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundColor( *_arg0,  *_arg1);
    }

    void Layout::setBackGroundColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundColor( *_arg0);
    }

    void Layout::requestDoLayout() {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->requestDoLayout();
    }

    bool Layout::isClippingEnabled() {

        bool ret_impl = ((cocos2d::gui::Layout*)m_cocos2d_impl)->isClippingEnabled();
        
        
        return ret_impl;
    }

    void Layout::setClippingEnabled(bool arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setClippingEnabled((bool)(arg0));
    }

    void Layout::setBackGroundColorOpacity(int arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundColorOpacity((int)(arg0));
    }

    int Layout::getLayoutType() {

        int ret_impl = ((cocos2d::gui::Layout*)m_cocos2d_impl)->getLayoutType();
        
        
        return ret_impl;
    }

    void Layout::sortAllChildren() {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->sortAllChildren();
    }

    void Layout::setBackGroundImageCapInsets(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundImageCapInsets( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> Layout::getBackGroundImageTextureSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Layout*)m_cocos2d_impl)->getBackGroundImageTextureSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Layout::setBackGroundImageScale9Enabled(bool arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setBackGroundImageScale9Enabled((bool)(arg0));
    }

    void Layout::setLayoutType(int arg0) {

        ((cocos2d::gui::Layout*)m_cocos2d_impl)->setLayoutType((cocos2d::gui::LayoutType)(arg0));
    }

    ScriptValue Layout::createInternal(ScriptState* scriptState) {

        cocos2d::gui::Layout* ret_impl = cocos2d::gui::Layout::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Layout)
        
    }
    cocos2d::gui::Layout* Layout::getCocos2dImpl() {
        return (cocos2d::gui::Layout*)m_cocos2d_impl;
    }


    Layout::Layout() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<Layout> Layout::create()
    {
        RefPtrWillBeRawPtr<Layout> ret = adoptRefWillBeNoop(new Layout());
        cocos2d::gui::Layout* impl = new cocos2d::gui::Layout();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    Layout::~Layout() {
    }
} // namespace blink
