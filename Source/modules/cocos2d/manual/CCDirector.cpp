// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCDirector.h"

namespace blink {

    void CCDirector::pause() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->pause();
    }

    void CCDirector::setDelegate(CCDirectorDelegate* arg0) {
        cocos2d::CCDirectorDelegate* _arg0 = (cocos2d::CCDirectorDelegate*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setDelegate( _arg0);
    }

    void CCDirector::setContentScaleFactor(float arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setContentScaleFactor((float)(arg0));
    }

    float CCDirector::getContentScaleFactor() {

        float ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getContentScaleFactor();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCDirector::getWinSizeInPixels() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getWinSizeInPixels();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCDirector::getDeltaTime() {

        float ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getDeltaTime();
        
        
        return ret_impl;
    }

    void CCDirector::setGLDefaultValues() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setGLDefaultValues();
    }

    void CCDirector::setActionManager(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCActionManager, arg0_wrapper, arg0);
        cocos2d::CCActionManager* _arg0 = (cocos2d::CCActionManager*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setActionManager( _arg0);
    }

    void CCDirector::setAlphaBlending(bool arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setAlphaBlending((bool)(arg0));
    }

    void CCDirector::popToRootScene() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->popToRootScene();
    }

    ScriptValue CCDirector::getNotificationNode(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getNotificationNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    PassRefPtrWillBeRawPtr<CCSize> CCDirector::getWinSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getWinSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCDirector::end() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->end();
    }

    bool CCDirector::isSendCleanupToScene() {

        bool ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->isSendCleanupToScene();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCDirector::getVisibleOrigin() {

        cocos2d::CCPoint ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getVisibleOrigin();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCDirector::mainLoop() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->mainLoop();
    }

    void CCDirector::setDepthTest(bool arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setDepthTest((bool)(arg0));
    }

    float CCDirector::getSecondsPerFrame() {

        float ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getSecondsPerFrame();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCDirector::convertToUI(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->convertToUI( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCDirector::setDefaultValues() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setDefaultValues();
    }

    bool CCDirector::init() {

        bool ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCDirector::setScheduler(CCScheduler* arg0) {
        cocos2d::CCScheduler* _arg0 = (cocos2d::CCScheduler*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setScheduler( _arg0);
    }

    void CCDirector::reshapeProjection(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->reshapeProjection( *_arg0);
    }

    void CCDirector::startAnimation() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->startAnimation();
    }

    ScriptValue CCDirector::getRunningScene(ScriptState* scriptState) {

        cocos2d::CCScene* ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getRunningScene();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScene)
        
    }

    void CCDirector::setViewport() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setViewport();
    }

    void CCDirector::stopAnimation() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->stopAnimation();
    }

    void CCDirector::popToSceneStackLevel(int arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->popToSceneStackLevel((int)(arg0));
    }

    void CCDirector::resume() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->resume();
    }

    bool CCDirector::isNextDeltaTimeZero() {

        bool ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->isNextDeltaTimeZero();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCDirectorDelegate> CCDirector::getDelegate() {

        cocos2d::CCDirectorDelegate* ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getDelegate();
        if (ret_impl == NULL) { return nullptr; }
        RefPtr<CCDirectorDelegate> ret = adoptRefWillBeNoop(new CCDirectorDelegate());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();        
    }

    void CCDirector::setOpenGLView(CCEGLView* arg0) {
        cocos2d::CCEGLView* _arg0 = (cocos2d::CCEGLView*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setOpenGLView( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCDirector::convertToGL(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPoint ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->convertToGL( *_arg0);
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCDirector::purgeCachedData() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->purgeCachedData();
    }

    unsigned int CCDirector::getTotalFrames() {

        unsigned int ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getTotalFrames();
        
        
        return ret_impl;
    }

    void CCDirector::runWithScene(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg0_wrapper, arg0);
        cocos2d::CCScene* _arg0 = (cocos2d::CCScene*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->runWithScene( _arg0);
    }

    void CCDirector::setNotificationNode(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setNotificationNode( _arg0);
    }

    void CCDirector::drawScene() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->drawScene();
    }

    void CCDirector::popScene() {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->popScene();
    }

    bool CCDirector::isDisplayStats() {

        bool ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->isDisplayStats();
        
        
        return ret_impl;
    }

    void CCDirector::setProjection(int arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setProjection((cocos2d::ccDirectorProjection)(arg0));
    }

    float CCDirector::getZEye() {

        float ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getZEye();
        
        
        return ret_impl;
    }

    void CCDirector::setNextDeltaTimeZero(bool arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setNextDeltaTimeZero((bool)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCSize> CCDirector::getVisibleSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getVisibleSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCDirector::getScheduler(ScriptState* scriptState) {

        cocos2d::CCScheduler* ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getScheduler();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCScheduler)
        
    }

    void CCDirector::pushScene(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg0_wrapper, arg0);
        cocos2d::CCScene* _arg0 = (cocos2d::CCScene*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->pushScene( _arg0);
    }

    double CCDirector::getAnimationInterval() {

        double ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getAnimationInterval();
        
        
        return ret_impl;
    }

    bool CCDirector::isPaused() {

        bool ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->isPaused();
        
        
        return ret_impl;
    }

    void CCDirector::setDisplayStats(bool arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setDisplayStats((bool)(arg0));
    }

    void CCDirector::replaceScene(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCScene, arg0_wrapper, arg0);
        cocos2d::CCScene* _arg0 = (cocos2d::CCScene*)(arg0->getCocos2dImpl());

        ((cocos2d::CCDirector*)m_cocos2d_impl)->replaceScene( _arg0);
    }

    void CCDirector::setAnimationInterval(double arg0) {

        ((cocos2d::CCDirector*)m_cocos2d_impl)->setAnimationInterval((double)(arg0));
    }

    void CCDirector::destroyDirector()
    {
        cocos2d::CCDirector::destroyDirector();
    }

    ScriptValue CCDirector::getActionManager(ScriptState* scriptState) {

        cocos2d::CCActionManager* ret_impl = ((cocos2d::CCDirector*)m_cocos2d_impl)->getActionManager();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionManager)
        
    }

    ScriptValue CCDirector::getInstance(ScriptState* scriptState) {

        cocos2d::CCDirector* ret_impl = cocos2d::CCDirector::sharedDirector();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDirector)
        
    }
    cocos2d::CCDirector* CCDirector::getCocos2dImpl() {
        return (cocos2d::CCDirector*)m_cocos2d_impl;
    }


    CCDirector::CCDirector() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCDirector> CCDirector::create()
    {
        RefPtrWillBeRawPtr<CCDirector> ret = adoptRefWillBeNoop(new CCDirector());
        return ret.release();
    }


    CCDirector::~CCDirector() {
    }
} // namespace blink
