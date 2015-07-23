// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCNode.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCNode.h"
#include "modules/cocos2d/events/OnEnterEventCallback.h"
#include "modules/cocos2d/events/OnExitEventCallback.h"
#include "modules/cocos2d/events/OnEnterTransitionDidFinishEventCallback.h"
#include "modules/cocos2d/events/OnExitTransitionDidStartEventCallback.h"
#include "modules/cocos2d/events/OnTouchCallback.h"
#include "modules/cocos2d/events/OnTouchesCallback.h"

namespace blink {

    void CCNode::addChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1));
    }

    void CCNode::addChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->addChild( _arg0);
    }

    void CCNode::addChild(ScriptValue& arg0_wrapper, int arg1, int arg2) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->addChild( _arg0, (int)(arg1), (int)(arg2));
    }

    bool CCNode::removeComponent(String arg0) {

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->removeComponent((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCNode::removeAllComponents() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeAllComponents();
    }

    ScriptValue CCNode::getShaderProgram(ScriptState* scriptState) {

        cocos2d::CCGLProgram* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getShaderProgram();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGLProgram)
        
    }

    ScriptValue CCNode::getChildren(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getChildren();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    int CCNode::getScriptHandler() {

        int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getScriptHandler();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertToWorldSpaceAR(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertToWorldSpaceAR( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCNode::isIgnoreAnchorPointForPosition() {

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->isIgnoreAnchorPointForPosition();
        
        
        return ret_impl;
    }

    bool CCNode::init() {

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCNode::setRotation(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setRotation((float)(arg0));
    }

    void CCNode::setZOrder(int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setZOrder((int)(arg0));
    }

    void CCNode::setScaleY(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setScaleY((float)(arg0));
    }

    void CCNode::setScaleX(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setScaleX((float)(arg0));
    }

    void CCNode::unregisterScriptHandler() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->unregisterScriptHandler();
    }

    int CCNode::getTag() {

        int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getTag();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCNode::getNodeToWorldTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->nodeToWorldTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::removeChild(ScriptValue& arg0_wrapper, bool arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeChild( _arg0, (bool)(arg1));
    }

    void CCNode::removeChild(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeChild( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertToWorldSpace(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertToWorldSpace( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::setSkewX(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setSkewX((float)(arg0));
    }

    void CCNode::setSkewY(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setSkewY((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertTouchToNodeSpace(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertTouchToNodeSpace( _arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::removeAllChildren( bool arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeAllChildrenWithCleanup((bool)(arg0));
    }

    void CCNode::removeAllChildren() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeAllChildren();
    }

    float CCNode::getRotationX() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getRotationX();
        
        
        return ret_impl;
    }

    float CCNode::getRotationY() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getRotationY();
        
        
        return ret_impl;
    }

    void CCNode::setParent(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setParent( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCNode::getNodeToParentTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->nodeToParentTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertToNodeSpace(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertToNodeSpace( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCNode::getGrid(ScriptState* scriptState) {

        cocos2d::CCGridBase* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getGrid();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }

    void CCNode::setPosition(float arg0, float arg1) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setPosition((float)(arg0), (float)(arg1));
    }

    void CCNode::stopActionByTag(int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->stopActionByTag((int)(arg0));
    }

    void CCNode::reorderChild(ScriptValue& arg0_wrapper, int arg1) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->reorderChild( _arg0, (int)(arg1));
    }

    void CCNode::setPositionY(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setPositionY((float)(arg0));
    }

    void CCNode::setPositionX(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setPositionX((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::getAnchorPoint() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getAnchorPoint();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned int CCNode::getNumberOfRunningActions() {

        unsigned int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->numberOfRunningActions();
        
        
        return ret_impl;
    }

    void CCNode::updateTransform() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->updateTransform();
    }

    bool CCNode::isVisible() {

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->isVisible();
        
        
        return ret_impl;
    }

    unsigned int CCNode::getChildrenCount() {

        unsigned int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getChildrenCount();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertToNodeSpaceAR(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertToNodeSpaceAR( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCNode::addComponent(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCComponent, arg0_wrapper, arg0);
        cocos2d::CCComponent* _arg0 = (cocos2d::CCComponent*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->addComponent( _arg0);
        
        
        return ret_impl;
    }

    void CCNode::visit() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->visit();
    }

    void CCNode::setShaderProgram(CCGLProgram* arg0) {
        cocos2d::CCGLProgram* _arg0 = (cocos2d::CCGLProgram*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setShaderProgram( _arg0);
    }

    float CCNode::getRotation() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getRotation();
        
        
        return ret_impl;
    }

    void CCNode::resumeSchedulerAndActions() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->resumeSchedulerAndActions();
    }

    int CCNode::getZOrder() {

        int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getZOrder();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::getAnchorPointInPoints() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getAnchorPointInPoints();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCNode::runAction(ScriptState* scriptState, ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCAction, arg0_wrapper, arg0);
        cocos2d::CCAction* _arg0 = (cocos2d::CCAction*)(arg0->getCocos2dImpl());

        cocos2d::CCAction* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->runAction( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAction)
        
    }

    void CCNode::transform() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->transform();
    }

    void CCNode::setVertexZ(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setVertexZ((float)(arg0));
    }

    void CCNode::setScheduler(CCScheduler* arg0) {
        cocos2d::CCScheduler* _arg0 = (cocos2d::CCScheduler*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setScheduler( _arg0);
    }

    void CCNode::stopAllActions() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->stopAllActions();
    }

    float CCNode::getSkewX() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getSkewX();
        
        
        return ret_impl;
    }

    float CCNode::getSkewY() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getSkewY();
        
        
        return ret_impl;
    }

    void CCNode::ignoreAnchorPointForPosition(bool arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->ignoreAnchorPointForPosition((bool)(arg0));
    }

    ScriptValue CCNode::getActionByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCAction* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getActionByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAction)
        
    }

    void CCNode::setRotationX(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setRotationX((float)(arg0));
    }

    void CCNode::setRotationY(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setRotationY((float)(arg0));
    }

    void CCNode::setAdditionalTransform(CCAffineTransform* arg0) {
        cocos2d::CCAffineTransform* _arg0 = (cocos2d::CCAffineTransform*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setAdditionalTransform( *_arg0);
    }

    ScriptValue CCNode::getScheduler(ScriptState* scriptState) {

        cocos2d::CCScheduler* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getScheduler();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScheduler)
        
    }

    unsigned int CCNode::getOrderOfArrival() {

        unsigned int ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getOrderOfArrival();
        
        
        return ret_impl;
    }

    void CCNode::setActionManager(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionManager, arg0_wrapper, arg0);
        cocos2d::CCActionManager* _arg0 = (cocos2d::CCActionManager*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setActionManager( _arg0);
    }

    void CCNode::getPosition(PassRefPtr<Uint8Array> arg0, PassRefPtr<Uint8Array> arg1) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->getPosition((float*)(arg0.get()->data()), (float*)(arg1.get()->data()));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::getPosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getPosition();
        
        RefPtr<CCPoint>  ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCNode::isRunning() {

        bool ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->isRunning();
        
        
        return ret_impl;
    }

    ScriptValue CCNode::getParent(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getParent();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    float CCNode::getPositionY() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getPositionY();
        
        
        return ret_impl;
    }

    float CCNode::getPositionX() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getPositionX();
        
        
        return ret_impl;
    }

    void CCNode::removeChildByTag(int arg0, bool arg1) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeChildByTag((int)(arg0), (bool)(arg1));
    }

    void CCNode::removeChildByTag(int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeChildByTag((int)(arg0));
    }

    void CCNode::setVisible(bool arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setVisible((bool)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCNode::getParentToNodeTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->parentToNodeTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::pauseSchedulerAndActions() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->pauseSchedulerAndActions();
    }

    float CCNode::getVertexZ() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getVertexZ();
        
        
        return ret_impl;
    }

    void CCNode::setScale(float arg0, float arg1) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setScale((float)(arg0), (float)(arg1));
    }

    void CCNode::setScale(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setScale((float)(arg0));
    }

    ScriptValue CCNode::getChildByTag(ScriptState* scriptState, int arg0) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getChildByTag((int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    void CCNode::setOrderOfArrival(unsigned int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setOrderOfArrival((unsigned int)(arg0));
    }

    float CCNode::getScaleY() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getScaleY();
        
        
        return ret_impl;
    }

    float CCNode::getScaleX() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getScaleX();
        
        
        return ret_impl;
    }

    void CCNode::cleanup() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->cleanup();
    }

    ScriptValue CCNode::getComponent(ScriptState* scriptState, String arg0) {

        cocos2d::CCComponent* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getComponent((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCComponent)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CCNode::getContentSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCRect> CCNode::getBoundingBox() {

        cocos2d::CCRect ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->boundingBox();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::draw() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->draw();
    }

    void CCNode::transformAncestors() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->transformAncestors();
    }

    void CCNode::setUserObject(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->setUserObject( _arg0);
    }

    void CCNode::registerScriptHandler(int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->registerScriptHandler((int)(arg0));
    }

    void CCNode::removeFromParent( bool arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeFromParentAndCleanup((bool)(arg0));
    }

    void CCNode::removeFromParent() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->removeFromParent();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCNode::convertTouchToNodeSpaceAR(CCTouch* arg0) {
        cocos2d::CCTouch* _arg0 = (cocos2d::CCTouch*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->convertTouchToNodeSpaceAR( _arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCNode::update(float arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCNode::sortAllChildren() {

        ((cocos2d::CCNode*)m_cocos2d_impl)->sortAllChildren();
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCNode::getWorldToNodeTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->worldToNodeTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCNode::getScale() {

        float ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getScale();
        
        
        return ret_impl;
    }

    ScriptValue CCNode::getCamera(ScriptState* scriptState) {

        cocos2d::CCCamera* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getCamera();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCCamera)
        
    }

    void CCNode::setTag(int arg0) {

        ((cocos2d::CCNode*)m_cocos2d_impl)->setTag((int)(arg0));
    }

    void CCNode::stopAction(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCAction, arg0_wrapper, arg0);
        cocos2d::CCAction* _arg0 = (cocos2d::CCAction*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)m_cocos2d_impl)->stopAction( _arg0);
    }

    ScriptValue CCNode::getActionManager(ScriptState* scriptState) {

        cocos2d::CCActionManager* ret_impl = ((cocos2d::CCNode*)m_cocos2d_impl)->getActionManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionManager)
        
    }

    ScriptValue CCNode::createInternal(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = cocos2d::CCNode::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    cocos2d::CCNode* CCNode::getCocos2dImpl() {
        return (cocos2d::CCNode*)m_cocos2d_impl;
    }


    CCNode::CCNode() {
        m_cocos2d_impl = NULL;
        m_onEnter_callback = nullptr;
        m_onExit_callback = nullptr;
        m_onEnterTransitionDidFinish_callback = nullptr;
        m_onExitTransitionDidStart_callback = nullptr;
        m_onTouchBegan_callback = nullptr;
        m_onTouchMoved_callback = nullptr;
        m_onTouchEnded_callback = nullptr;
        m_onTouchCancelled_callback = nullptr;
        m_onTouchesBegan_callback = nullptr;
        m_onTouchesMoved_callback = nullptr;
        m_onTouchesEnded_callback = nullptr;
        m_onTouchesCancelled_callback = nullptr;
    }

    PassRefPtrWillBeRawPtr<CCNode> CCNode::create()
    {
        RefPtrWillBeRawPtr<CCNode> ret = adoptRefWillBeNoop(new CCNode());
        cocos2d::CCNode* impl = new cocos2d::CCNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCNode::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCNode::~CCNode() {
        m_onEnter_callback = nullptr;
        m_onExit_callback = nullptr;
        m_onEnterTransitionDidFinish_callback = nullptr;
        m_onExitTransitionDidStart_callback = nullptr;
        m_onTouchBegan_callback = nullptr;
        m_onTouchMoved_callback = nullptr;
        m_onTouchEnded_callback = nullptr;
        m_onTouchCancelled_callback = nullptr;
        m_onTouchesBegan_callback = nullptr;
        m_onTouchesMoved_callback = nullptr;
        m_onTouchesEnded_callback = nullptr;
        m_onTouchesCancelled_callback = nullptr;
        
    }

    void CCNode::setOnEnterEventCallback(OnEnterEventCallback* callback) {
        m_onEnter_callback = callback;
    }

    void CCNode::setOnExitEventCallback(OnExitEventCallback* callback) {
        m_onExit_callback = callback;
    }

    void CCNode::setOnEnterTransitionDidFinishEventCallback(OnEnterTransitionDidFinishEventCallback* callback) {
        m_onEnterTransitionDidFinish_callback = callback;
    }

    void CCNode::setOnExitTransitionDidStartEventCallback(OnExitTransitionDidStartEventCallback* callback) {
        m_onExitTransitionDidStart_callback = callback;
    }

    void CCNode::executeOnEnterEvent() {
        if (!m_onEnter_callback) return;
        m_onEnter_callback->handleEvent();
    }

    void CCNode::executeOnExitEvent() {
        if (!m_onExit_callback) return;
        m_onExit_callback->handleEvent();
    }

    void CCNode::executeOnEnterTransitionDidFinishEvent() {
        if (!m_onEnterTransitionDidFinish_callback) return;
        m_onEnterTransitionDidFinish_callback->handleEvent();
    }

    void CCNode::executeOnExitTransitionDidStartEvent() {
        if (!m_onExitTransitionDidStart_callback) return;
        m_onExitTransitionDidStart_callback->handleEvent();
    }

    void CCNode::setAnchorPointInternal(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)(m_cocos2d_impl))->setAnchorPoint( *_arg0);
    }

    void CCNode::setContentSizeInternal(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCNode*)(m_cocos2d_impl))->setContentSize( *_arg0);
    }

    // manually added
    void CCNode::setPosition(const ScriptValue& arg0_wrapper) {
        v8::Handle<v8::Object> wrapper = V8CCPoint::findInstanceInPrototypeChain(arg0_wrapper.v8Value(), arg0_wrapper.isolate());
        if (!wrapper.IsEmpty()) {
            CCPoint* arg0 = static_cast<CCPoint*>(blink::toScriptWrappableBase(wrapper)->toImpl<CCPoint>());
            cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());
            ((cocos2d::CCNode*)m_cocos2d_impl)->setPosition(*_arg0);
            return;
        }
        if (arg0_wrapper.isObject()) {
            v8::Isolate* isolate = v8::Isolate::GetCurrent();
            v8::Handle<v8::Value> value = arg0_wrapper.v8Value();
            v8::Local<v8::Object> object = value->ToObject();
            v8::Local<v8::Value> valueX = object->Get(v8AtomicString(isolate, "x"));
            v8::Local<v8::Value> valueY = object->Get(v8AtomicString(isolate, "y"));
            if (valueX->IsNumber() && valueY->IsNumber()) {
              v8::Local<v8::Number> numberX = valueX->ToNumber();
              v8::Local<v8::Number> numberY = valueY->ToNumber();
              float x = (float)numberX->Value();
              float y = (float)numberY->Value();
              ((cocos2d::CCNode*)m_cocos2d_impl)->setPosition(x, y);
            }
        }
    }

    void CCNode::trace(Visitor* visitor) {
        visitor->trace(m_onEnter_callback);
        visitor->trace(m_onExit_callback);
        visitor->trace(m_onEnterTransitionDidFinish_callback);
        visitor->trace(m_onExitTransitionDidStart_callback);
        visitor->trace(m_onTouchBegan_callback);
        visitor->trace(m_onTouchMoved_callback);
        visitor->trace(m_onTouchEnded_callback);
        visitor->trace(m_onTouchCancelled_callback);
        visitor->trace(m_onTouchesBegan_callback);
        visitor->trace(m_onTouchesMoved_callback);
        visitor->trace(m_onTouchesEnded_callback);
        visitor->trace(m_onTouchesCancelled_callback);
    }

    void CCNode::setTouchBeganCallback(OnTouchCallback* callback) {
        m_onTouchBegan_callback = callback;
    }

    void CCNode::setTouchMovedCallback(OnTouchCallback* callback) {
        m_onTouchMoved_callback = callback;
    }

    void CCNode::setTouchEndedCallback(OnTouchCallback* callback) {
        m_onTouchEnded_callback = callback;
    }

    void CCNode::setTouchCancelledCallback(OnTouchCallback* callback) {
        m_onTouchCancelled_callback = callback;
    }

    void CCNode::setTouchesBeganCallback(OnTouchesCallback* callback) {
        m_onTouchesBegan_callback = callback;
    }

    void CCNode::setTouchesMovedCallback(OnTouchesCallback* callback) {
        m_onTouchesMoved_callback = callback;
    }

    void CCNode::setTouchesEndedCallback(OnTouchesCallback* callback) {
        m_onTouchesEnded_callback = callback;
    }

    void CCNode::setTouchesCancelledCallback(OnTouchesCallback* callback) {
        m_onTouchesCancelled_callback = callback;
    }

    int CCNode::executeOnTouchEvent(int eventType, cocos2d::CCTouch *pTouch) {
          RefPtrWillBeRawPtr<blink::CCTouch> touchPtr = adoptRefWillBeNoop(new blink::CCTouch());
          touchPtr->setCocos2dImpl(pTouch);
          blink::CCTouch* touch = touchPtr.get();
          int ret = 0;

        if (eventType == cocos2d::CCTOUCHBEGAN) {
            if (!m_onTouchBegan_callback) return 0;
            ret = m_onTouchBegan_callback->handleEvent(touch);
        } else if (eventType == cocos2d::CCTOUCHMOVED) {
            if (!m_onTouchMoved_callback) return 0;
            ret = m_onTouchMoved_callback->handleEvent(touch);
        } else if (eventType == cocos2d::CCTOUCHENDED) {
            if (!m_onTouchEnded_callback) return 0;
            ret = m_onTouchEnded_callback->handleEvent(touch);
        } else if (eventType == cocos2d::CCTOUCHCANCELLED) {
            if (!m_onTouchCancelled_callback) return 0;
            ret = m_onTouchCancelled_callback->handleEvent(touch);
        }
        return ret;
    }

    int CCNode::executeOnTouchesEvent(int eventType, TouchHeapVector touches) {
        int ret = 0;

        if (eventType == cocos2d::CCTOUCHBEGAN) {
            if (!m_onTouchesBegan_callback) return 0;
            ret = m_onTouchesBegan_callback->handleEvent(touches);
        } else if (eventType == cocos2d::CCTOUCHMOVED) {
            if (!m_onTouchesMoved_callback) return 0;
            ret = m_onTouchesMoved_callback->handleEvent(touches);
        } else if (eventType == cocos2d::CCTOUCHENDED) {
            if (!m_onTouchesEnded_callback) return 0;
            ret = m_onTouchesEnded_callback->handleEvent(touches);
        } else if (eventType == cocos2d::CCTOUCHCANCELLED) {
            if (!m_onTouchesCancelled_callback) return 0;
            ret = m_onTouchesCancelled_callback->handleEvent(touches);
        }
        return ret;
    }

} // namespace blink
