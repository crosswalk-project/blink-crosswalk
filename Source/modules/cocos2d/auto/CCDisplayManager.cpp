// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCDisplayManager.h"

namespace blink {

    ScriptValue CCDisplayManager::getDisplayRenderNode(ScriptState* scriptState) {

        cocos2d::CCNode* ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getDisplayRenderNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCNode)
        
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCDisplayManager::getAnchorPointInPoints() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getAnchorPointInPoints();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCDisplayManager::getDisplayRenderNodeType() {

        int ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getDisplayRenderNodeType();
        
        
        return ret_impl;
    }

    void CCDisplayManager::removeDisplay(int arg0) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->removeDisplay((int)(arg0));
    }

    void CCDisplayManager::setForceChangeDisplay(bool arg0) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->setForceChangeDisplay((bool)(arg0));
    }

    bool CCDisplayManager::init(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->init( _arg0);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCDisplayManager::getContentSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCRect> CCDisplayManager::getBoundingBox() {

        cocos2d::CCRect ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getBoundingBox();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCDisplayManager::addDisplay(CCNode* arg0, int arg1) {
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->addDisplay( _arg0, (int)(arg1));
    }

    void CCDisplayManager::addDisplay(PassRefPtr<Uint8Array> arg0, int arg1) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->addDisplay((cocos2d::extension::CCDisplayData*)(arg0.get()->data()), (int)(arg1));
    }

    bool CCDisplayManager::containPoint(float arg0, float arg1) {

        bool ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->containPoint((float)(arg0), (float)(arg1));
        
        
        return ret_impl;
    }

    bool CCDisplayManager::containPoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->containPoint( *_arg0);
        
        
        return ret_impl;
    }

    void CCDisplayManager::changeDisplayWithIndex(int arg0, bool arg1) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->changeDisplayWithIndex((int)(arg0), (bool)(arg1));
    }

    void CCDisplayManager::changeDisplayWithName(String arg0, bool arg1) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->changeDisplayWithName((char*)(arg0.utf8().data()), (bool)(arg1));
    }

    int CCDisplayManager::getCurrentDisplayIndex() {

        int ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getCurrentDisplayIndex();
        
        
        return ret_impl;
    }

    void CCDisplayManager::setVisible(bool arg0) {

        ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->setVisible((bool)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCDisplayManager::getAnchorPoint() {

        cocos2d::CCPoint ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getAnchorPoint();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCDisplayManager::getDecorativeDisplayList(ScriptState* scriptState) {

        cocos2d::CCArray* ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getDecorativeDisplayList();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCArray)
        
    }

    bool CCDisplayManager::isVisible() {

        bool ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->isVisible();
        
        
        return ret_impl;
    }

    bool CCDisplayManager::getForceChangeDisplay() {

        bool ret_impl = ((cocos2d::extension::CCDisplayManager*)m_cocos2d_impl)->getForceChangeDisplay();
        
        
        return ret_impl;
    }

    ScriptValue CCDisplayManager::createInternal(ScriptState* scriptState, CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        cocos2d::extension::CCDisplayManager* ret_impl = cocos2d::extension::CCDisplayManager::create( _arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCDisplayManager)
        
    }
    cocos2d::extension::CCDisplayManager* CCDisplayManager::getCocos2dImpl() {
        return (cocos2d::extension::CCDisplayManager*)m_cocos2d_impl;
    }


    CCDisplayManager::CCDisplayManager() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCDisplayManager> CCDisplayManager::create()
    {
        RefPtrWillBeRawPtr<CCDisplayManager> ret = adoptRefWillBeNoop(new CCDisplayManager());
        cocos2d::extension::CCDisplayManager* impl = new cocos2d::extension::CCDisplayManager();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCDisplayManager::~CCDisplayManager() {
    }
} // namespace blink
