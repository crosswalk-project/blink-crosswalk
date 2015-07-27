// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCControlButton.h"

namespace blink {

    void CCControlButton::setTitleColorDispatchTable(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleColorDispatchTable( _arg0);
    }

    void CCControlButton::setZoomOnTouchDown(bool arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setZoomOnTouchDown((bool)(arg0));
    }

    void CCControlButton::setSelected(bool arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setSelected((bool)(arg0));
    }

    void CCControlButton::setTitleLabel(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleLabel( _arg0);
    }

    void CCControlButton::setTitleTTFSizeForState(float arg0, unsigned int arg1) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleTTFSizeForState((float)(arg0), (unsigned int)(arg1));
    }

    void CCControlButton::setAdjustBackgroundImage(bool arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setAdjustBackgroundImage((bool)(arg0));
    }

    void CCControlButton::setHighlighted(bool arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setHighlighted((bool)(arg0));
    }

    void CCControlButton::setBackgroundSpriteDispatchTable(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setBackgroundSpriteDispatchTable( _arg0);
    }

    void CCControlButton::setTitleLabelForState(CCNode* arg0, unsigned int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleLabelForState( _arg0, (unsigned int)(arg1));
    }

    void CCControlButton::setTitleForState(CCString* arg0, unsigned int arg1) {
        cocos2d::CCString* _arg0 = (cocos2d::CCString*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleForState( _arg0, (unsigned int)(arg1));
    }

    ScriptValue CCControlButton::getTitleDispatchTable(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleDispatchTable();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    void CCControlButton::setLabelAnchorPoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setLabelAnchorPoint( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCControlButton::getLabelAnchorPoint() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getLabelAnchorPoint();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCControlButton::initWithBackgroundSprite(CCScale9Sprite* arg0) {
        cocos2d::extension::CCScale9Sprite* _arg0 = (cocos2d::extension::CCScale9Sprite*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->initWithBackgroundSprite( _arg0);
        
        
        return ret_impl;
    }

    float CCControlButton::getTitleTTFSizeForState(unsigned int arg0) {

        float ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleTTFSizeForState((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    void CCControlButton::setTitleDispatchTable(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleDispatchTable( _arg0);
    }

    bool CCControlButton::isPushed() {

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->isPushed();
        
        
        return ret_impl;
    }

    void CCControlButton::setOpacity(unsigned char arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    bool CCControlButton::init() {

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCControlButton::setTitleTTFForState(String arg0, unsigned int arg1) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleTTFForState((char*)(arg0.utf8().data()), (unsigned int)(arg1));
    }

    void CCControlButton::setPreferredSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setPreferredSize( *_arg0);
    }

    int CCControlButton::getHorizontalOrigin() {

        int ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getHorizontalOrigin();
        
        
        return ret_impl;
    }

    unsigned char CCControlButton::getOpacity() {

        unsigned char ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getOpacity();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCControlButton::getCurrentTitleColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getCurrentTitleColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCControlButton::getTitleColorDispatchTable(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleColorDispatchTable();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    void CCControlButton::setEnabled(bool arg0) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    ScriptValue CCControlButton::getBackgroundSpriteForState(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::extension::CCScale9Sprite* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getBackgroundSpriteForState((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCControlButton::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCControlButton::setMargins(int arg0, int arg1) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setMargins((int)(arg0), (int)(arg1));
    }

    void CCControlButton::needsLayout() {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->needsLayout();
    }

    bool CCControlButton::initWithTitleAndFontNameAndFontSize(String arg0_wrapper, String arg1, float arg2) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->initWithTitleAndFontNameAndFontSize((std::string)(arg0), (char*)(arg1.utf8().data()), (float)(arg2));
        
        
        return ret_impl;
    }

    void CCControlButton::setTitleBMFontForState(String arg0, unsigned int arg1) {

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleBMFontForState((char*)(arg0.utf8().data()), (unsigned int)(arg1));
    }

    String CCControlButton::getTitleTTFForState(unsigned int arg0) {

        const String ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleTTFForState((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    ScriptValue CCControlButton::getBackgroundSprite(ScriptState* scriptState) {

        cocos2d::extension::CCScale9Sprite* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getBackgroundSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScale9Sprite)
        
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCControlButton::getTitleColorForState(unsigned int arg0) {

        cocos2d::ccColor3B ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleColorForState((unsigned int)(arg0));
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCControlButton::setTitleColorForState(ccColor3B* arg0, unsigned int arg1) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleColorForState( *_arg0, (unsigned int)(arg1));
    }

    bool CCControlButton::doesAdjustBackgroundImage() {

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->doesAdjustBackgroundImage();
        
        
        return ret_impl;
    }

    void CCControlButton::setBackgroundSpriteFrameForState(CCSpriteFrame* arg0, unsigned int arg1) {
        cocos2d::CCSpriteFrame* _arg0 = (cocos2d::CCSpriteFrame*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setBackgroundSpriteFrameForState( _arg0, (unsigned int)(arg1));
    }

    void CCControlButton::setBackgroundSpriteForState(CCScale9Sprite* arg0, unsigned int arg1) {
        cocos2d::extension::CCScale9Sprite* _arg0 = (cocos2d::extension::CCScale9Sprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setBackgroundSpriteForState( _arg0, (unsigned int)(arg1));
    }

    void CCControlButton::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setColor( *_arg0);
    }

    ScriptValue CCControlButton::getTitleLabelDispatchTable(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleLabelDispatchTable();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    bool CCControlButton::initWithLabelAndBackgroundSprite(CCNode* arg0, CCScale9Sprite* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg1 = (cocos2d::extension::CCScale9Sprite*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->initWithLabelAndBackgroundSprite( _arg0,  _arg1);
        
        
        return ret_impl;
    }

    void CCControlButton::setTitleLabelDispatchTable(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setTitleLabelDispatchTable( _arg0);
    }

    ScriptValue CCControlButton::getTitleLabel(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleLabel();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CCControlButton::getPreferredSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getPreferredSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCControlButton::getVerticalMargin() {

        int ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getVerticalMargin();
        
        
        return ret_impl;
    }

    ScriptValue CCControlButton::getBackgroundSpriteDispatchTable(ScriptState* scriptState) {

        cocos2d::CCDictionary* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getBackgroundSpriteDispatchTable();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDictionary)
        
    }

    ScriptValue CCControlButton::getTitleLabelForState(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleLabelForState((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    ScriptValue CCControlButton::getCurrentTitle(ScriptState* scriptState) {

        cocos2d::CCString* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getCurrentTitle();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCString)
        
    }

    String CCControlButton::getTitleBMFontForState(unsigned int arg0) {

        const String ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleBMFontForState((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    void CCControlButton::setBackgroundSprite(CCScale9Sprite* arg0) {
        cocos2d::extension::CCScale9Sprite* _arg0 = (cocos2d::extension::CCScale9Sprite*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->setBackgroundSprite( _arg0);
    }

    bool CCControlButton::getZoomOnTouchDown() {

        bool ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getZoomOnTouchDown();
        
        
        return ret_impl;
    }

    ScriptValue CCControlButton::getTitleForState(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCString* ret_impl = ((cocos2d::extension::CCControlButton*)m_cocos2d_impl)->getTitleForState((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCString)
        
    }
    ScriptValue CCControlButton::createInternal(ScriptState* scriptState, String arg0_wrapper, String arg1, float arg2) {
        std::string arg0 = std::string(arg0_wrapper.utf8().data());
        cocos2d::extension::CCControlButton* ret_impl = cocos2d::extension::CCControlButton::create((std::string)(arg0), (char*)(arg1.utf8().data()), (float)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlButton)
        
    }
    ScriptValue CCControlButton::createInternal(ScriptState* scriptState, CCNode* arg0, CCScale9Sprite* arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());
        cocos2d::extension::CCScale9Sprite* _arg1 = (cocos2d::extension::CCScale9Sprite*)(arg1->getCocos2dImpl());

        cocos2d::extension::CCControlButton* ret_impl = cocos2d::extension::CCControlButton::create( _arg0,  _arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlButton)
        
    }
    ScriptValue CCControlButton::createInternal(ScriptState* scriptState, CCScale9Sprite* arg0) {
        cocos2d::extension::CCScale9Sprite* _arg0 = (cocos2d::extension::CCScale9Sprite*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCControlButton* ret_impl = cocos2d::extension::CCControlButton::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlButton)
        
    }
    ScriptValue CCControlButton::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCControlButton* ret_impl = cocos2d::extension::CCControlButton::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCControlButton)
        
    }
    cocos2d::extension::CCControlButton* CCControlButton::getCocos2dImpl() {
        return (cocos2d::extension::CCControlButton*)m_cocos2d_impl;
    }


    CCControlButton::CCControlButton() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCControlButton> CCControlButton::create()
    {
        RefPtrWillBeRawPtr<CCControlButton> ret = adoptRefWillBeNoop(new CCControlButton());
        cocos2d::extension::CCControlButton* impl = new cocos2d::extension::CCControlButton();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCControlButton::~CCControlButton() {
    }
} // namespace blink
