// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/Widget.h"

namespace blink {

    void Widget::addChild(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void Widget::addChild(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addChild( _arg0);
    }

    void Widget::addChild(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    ScriptValue Widget::getVirtualRenderer(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getVirtualRenderer();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void Widget::setSizePercent(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setSizePercent( *_arg0);
    }

    bool Widget::isFlipX() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isFlipX();
        
        
        return ret_impl;
    }

    void Widget::setActionTag(int arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setActionTag((int)(arg0));
    }

    String Widget::getDescription() {

        String ret_impl = String(((cocos2d::gui::Widget*)m_cocos2d_impl)->getDescription().c_str());
        
        
        return ret_impl;
    }

    float Widget::getLeftInParent() {

        float ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getLeftInParent();
        
        
        return ret_impl;
    }

    void Widget::setUpdateEnabled(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setUpdateEnabled((bool)(arg0));
    }

    bool Widget::isFlipY() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isFlipY();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getTouchEndPos() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getTouchEndPos();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue Widget::getChildren(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getChildren();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue Widget::getNodes(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getNodes();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    ScriptValue Widget::getChildByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getChildByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    String Widget::getName() {

        const String ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getName();
        
        
        return ret_impl;
    }

    bool Widget::isIgnoreContentAdaptWithSize() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isIgnoreContentAdaptWithSize();
        
        
        return ret_impl;
    }

    void Widget::updateSizeAndPosition() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->updateSizeAndPosition();
    }

    float Widget::getBottomInParent() {

        float ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getBottomInParent();
        
        
        return ret_impl;
    }

    int Widget::getActionTag() {

        int ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getActionTag();
        
        
        return ret_impl;
    }

    ScriptValue Widget::getLayoutParameter(ScriptState* scriptState, int arg0) {

        cocos2d::gui::LayoutParameter* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getLayoutParameter((cocos2d::gui::LayoutParameterType)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, LayoutParameter)
        
    }

    int Widget::getPositionType() {

        int ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getPositionType();
        
        
        return ret_impl;
    }

    void Widget::setName(String arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setName((char*)(arg0.utf8().data()));
    }

    ScriptValue Widget::getChildByName(ScriptState* scriptState, String arg0) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getChildByName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    bool Widget::isEnabled() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isEnabled();
        
        
        return ret_impl;
    }

    void Widget::removeNodeByTag(int arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeNodeByTag((int)(arg0));
    }

    void Widget::removeAllChildren() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeAllChildren();
    }

    bool Widget::isTouchEnabled() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isTouchEnabled();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> Widget::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getTouchStartPos() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getTouchStartPos();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Widget::didNotSelectSelf() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->didNotSelectSelf();
    }

    void Widget::setFocused(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setFocused((bool)(arg0));
    }

    void Widget::setTouchEnabled(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setTouchEnabled((bool)(arg0));
    }

    ScriptValue Widget::clone(ScriptState* scriptState) {

        cocos2d::gui::Widget* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->clone();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getTouchMovePos() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getTouchMovePos();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Widget::setEnabled(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setEnabled((bool)(arg0));
    }

    void Widget::setBrightStyle(int arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setBrightStyle((cocos2d::gui::BrightStyle)(arg0));
    }

    void Widget::addNode(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addNode( _arg0, (int)(arg1));
    }

    void Widget::addNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addNode( _arg0);
    }

    void Widget::addNode(CCNode* arg0, int arg1, int arg2) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->addNode( _arg0, (int)(arg1), (int)(arg2));
    }

    void Widget::removeFromParent() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeFromParent();
    }

    void Widget::setLayoutParameter(LayoutParameter* arg0) {
        cocos2d::gui::LayoutParameter* _arg0 = (cocos2d::gui::LayoutParameter*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setLayoutParameter( _arg0);
    }

    void Widget::setFlipY(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setFlipY((bool)(arg0));
    }

    void Widget::setFlipX(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setFlipX((bool)(arg0));
    }

    void Widget::removeAllChildrenWithCleanup(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void Widget::sortAllChildren() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->sortAllChildren();
    }

    void Widget::ignoreContentAdaptWithSize(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->ignoreContentAdaptWithSize((bool)(arg0));
    }

    bool Widget::isBright() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isBright();
        
        
        return ret_impl;
    }

    bool Widget::clippingParentAreaContainPoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->clippingParentAreaContainPoint( *_arg0);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getSizePercent() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getSizePercent();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Widget::removeFromParentAndCleanup(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeFromParentAndCleanup((bool)(arg0));
    }

    float Widget::getTopInParent() {

        float ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getTopInParent();
        
        
        return ret_impl;
    }

    bool Widget::isUpdateEnabled() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isUpdateEnabled();
        
        
        return ret_impl;
    }

    int Widget::getWidgetType() {

        int ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getWidgetType();
        
        
        return ret_impl;
    }

    ScriptValue Widget::getNodeByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getNodeByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> Widget::getSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float Widget::getRightInParent() {

        float ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getRightInParent();
        
        
        return ret_impl;
    }

    int Widget::getSizeType() {

        int ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getSizeType();
        
        
        return ret_impl;
    }

    void Widget::removeNode(CCNode* arg0) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeNode( _arg0);
    }

    void Widget::removeAllNodes() {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeAllNodes();
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getWorldPosition() {

        cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getWorldPosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> Widget::getPositionPercent() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getPositionPercent();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void Widget::removeChildByTag(int arg0, bool arg1) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeChildByTag((int)(arg0), (bool)(arg1));
    }

    bool Widget::hitTest(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->hitTest( *_arg0);
        
        
        return ret_impl;
    }

    void Widget::removeChild(CCNode* arg0, bool arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    bool Widget::isFocused() {

        bool ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->isFocused();
        
        
        return ret_impl;
    }

    void Widget::setSizeType(int arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setSizeType((cocos2d::gui::SizeType)(arg0));
    }

    void Widget::checkChildInfo(int arg0, Widget* arg1, CCPoint* arg2) {
        cocos2d::gui::Widget* _arg1 = (cocos2d::gui::Widget*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->checkChildInfo((int)(arg0),  _arg1,  *_arg2);
    }

    void Widget::setSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setSize( *_arg0);
    }

    void Widget::setBright(bool arg0) {

        ((cocos2d::gui::Widget*)m_cocos2d_impl)->setBright((bool)(arg0));
    }

    unsigned int Widget::getChildrenCount() {

        unsigned int ret_impl = ((cocos2d::gui::Widget*)m_cocos2d_impl)->getChildrenCount();
        
        
        return ret_impl;
    }

    ScriptValue Widget::createInternal(ScriptState* scriptState) {

        cocos2d::gui::Widget* ret_impl = cocos2d::gui::Widget::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, Widget)
        
    }
    cocos2d::gui::Widget* Widget::getCocos2dImpl() {
        return (cocos2d::gui::Widget*)m_cocos2d_impl;
    }


    Widget::Widget() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<Widget> Widget::create()
    {
        RefPtrWillBeRawPtr<Widget> ret = adoptRefWillBeNoop(new Widget());
        cocos2d::gui::Widget* impl = new cocos2d::gui::Widget();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    Widget::~Widget() {
    }
} // namespace blink
