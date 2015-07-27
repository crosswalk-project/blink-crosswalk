// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCGridBase.h"

namespace blink {

    void CCGridBase::setGridSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->setGridSize( *_arg0);
    }

    void CCGridBase::calculateVertexPoints() {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->calculateVertexPoints();
    }

    void CCGridBase::afterDraw(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->afterDraw( _arg0);
    }

    void CCGridBase::beforeDraw() {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->beforeDraw();
    }

    bool CCGridBase::isTextureFlipped() {

        bool ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->isTextureFlipped();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCGridBase::getGridSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->getGridSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCGridBase::getStep() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->getStep();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCGridBase::set2DProjection() {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->set2DProjection();
    }

    void CCGridBase::setStep(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->setStep( *_arg0);
    }

    void CCGridBase::setTextureFlipped(bool arg0) {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->setTextureFlipped((bool)(arg0));
    }

    void CCGridBase::blit() {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->blit();
    }

    void CCGridBase::setActive(bool arg0) {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->setActive((bool)(arg0));
    }

    int CCGridBase::getReuseGrid() {

        int ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->getReuseGrid();
        
        
        return ret_impl;
    }

    bool CCGridBase::initWithSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->initWithSize( *_arg0);
        
        
        return ret_impl;
    }

    bool CCGridBase::initWithSize(CCSize* arg0, CCTexture2D* arg1, bool arg2) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->initWithSize( *_arg0,  _arg1, (bool)(arg2));
        
        
        return ret_impl;
    }

    void CCGridBase::setReuseGrid(int arg0) {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->setReuseGrid((int)(arg0));
    }

    bool CCGridBase::isActive() {

        bool ret_impl = ((cocos2d::CCGridBase*)m_cocos2d_impl)->isActive();
        
        
        return ret_impl;
    }

    void CCGridBase::reuse() {

        ((cocos2d::CCGridBase*)m_cocos2d_impl)->reuse();
    }
    ScriptValue CCGridBase::createInternal(ScriptState* scriptState, CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCGridBase* ret_impl = cocos2d::CCGridBase::create( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }
    ScriptValue CCGridBase::createInternal(ScriptState* scriptState, CCSize* arg0, CCTexture2D* arg1, bool arg2) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());
        cocos2d::CCTexture2D* _arg1 = (cocos2d::CCTexture2D*)(arg1->getCocos2dImpl());

        cocos2d::CCGridBase* ret_impl = cocos2d::CCGridBase::create( *_arg0,  _arg1, (bool)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGridBase)
        
    }
    cocos2d::CCGridBase* CCGridBase::getCocos2dImpl() {
        return (cocos2d::CCGridBase*)m_cocos2d_impl;
    }


    CCGridBase::CCGridBase() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCGridBase> CCGridBase::create()
    {
        RefPtrWillBeRawPtr<CCGridBase> ret = adoptRefWillBeNoop(new CCGridBase());
        cocos2d::CCGridBase* impl = new cocos2d::CCGridBase();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCGridBase::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCGridBase::~CCGridBase() {
    }
} // namespace blink
