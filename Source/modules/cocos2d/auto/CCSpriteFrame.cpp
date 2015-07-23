// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSpriteFrame.h"

namespace blink {

    void CCSpriteFrame::setRotated(bool arg0) {

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setRotated((bool)(arg0));
    }

    void CCSpriteFrame::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setTexture( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCSpriteFrame::getOffset() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getOffset();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSpriteFrame::setRectInPixels(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setRectInPixels( *_arg0);
    }

    ScriptValue CCSpriteFrame::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    PassRefPtrWillBeRawPtr<CCRect> CCSpriteFrame::getRect() {

        const cocos2d::CCRect ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getRect();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSpriteFrame::setOffsetInPixels(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setOffsetInPixels( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCRect> CCSpriteFrame::getRectInPixels() {

        const cocos2d::CCRect ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getRectInPixels();
        
        RefPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSpriteFrame::setOriginalSize(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setOriginalSize( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> CCSpriteFrame::getOriginalSizeInPixels() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getOriginalSizeInPixels();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSpriteFrame::setOriginalSizeInPixels(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setOriginalSizeInPixels( *_arg0);
    }

    void CCSpriteFrame::setOffset(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setOffset( *_arg0);
    }

    bool CCSpriteFrame::initWithTexture(CCTexture2D* arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());
        cocos2d::CCSize* _arg4 = (cocos2d::CCSize*)(arg4->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->initWithTexture( _arg0,  *_arg1, (bool)(arg2),  *_arg3,  *_arg4);
        
        
        return ret_impl;
    }

    bool CCSpriteFrame::initWithTexture(CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->initWithTexture( _arg0,  *_arg1);
        
        
        return ret_impl;
    }

    bool CCSpriteFrame::isRotated() {

        bool ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->isRotated();
        
        
        return ret_impl;
    }

    bool CCSpriteFrame::initWithTextureFilename(String arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());
        cocos2d::CCSize* _arg4 = (cocos2d::CCSize*)(arg4->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->initWithTextureFilename((char*)(arg0.utf8().data()),  *_arg1, (bool)(arg2),  *_arg3,  *_arg4);
        
        
        return ret_impl;
    }

    bool CCSpriteFrame::initWithTextureFilename(String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->initWithTextureFilename((char*)(arg0.utf8().data()),  *_arg1);
        
        
        return ret_impl;
    }

    void CCSpriteFrame::setRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->setRect( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCSpriteFrame::getOffsetInPixels() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getOffsetInPixels();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    PassRefPtrWillBeRawPtr<CCSize> CCSpriteFrame::getOriginalSize() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCSpriteFrame*)m_cocos2d_impl)->getOriginalSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }
    ScriptValue CCSpriteFrame::createInternal(ScriptState* scriptState, String arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());
        cocos2d::CCSize* _arg4 = (cocos2d::CCSize*)(arg4->getCocos2dImpl());

        cocos2d::CCSpriteFrame* ret_impl = cocos2d::CCSpriteFrame::create((char*)(arg0.utf8().data()),  *_arg1, (bool)(arg2),  *_arg3,  *_arg4);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }
    ScriptValue CCSpriteFrame::createInternal(ScriptState* scriptState, String arg0, CCRect* arg1) {
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::CCSpriteFrame* ret_impl = cocos2d::CCSpriteFrame::create((char*)(arg0.utf8().data()),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }
    ScriptValue CCSpriteFrame::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1, bool arg2, CCPoint* arg3, CCSize* arg4) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg3 = (cocos2d::CCPoint*)(arg3->getCocos2dImpl());
        cocos2d::CCSize* _arg4 = (cocos2d::CCSize*)(arg4->getCocos2dImpl());

        cocos2d::CCSpriteFrame* ret_impl = cocos2d::CCSpriteFrame::createWithTexture( _arg0,  *_arg1, (bool)(arg2),  *_arg3,  *_arg4);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }
    ScriptValue CCSpriteFrame::createWithTexture(ScriptState* scriptState, CCTexture2D* arg0, CCRect* arg1) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());
        cocos2d::CCRect* _arg1 = (cocos2d::CCRect*)(arg1->getCocos2dImpl());

        cocos2d::CCSpriteFrame* ret_impl = cocos2d::CCSpriteFrame::createWithTexture( _arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSpriteFrame)
        
    }
    cocos2d::CCSpriteFrame* CCSpriteFrame::getCocos2dImpl() {
        return (cocos2d::CCSpriteFrame*)m_cocos2d_impl;
    }


    CCSpriteFrame::CCSpriteFrame() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSpriteFrame> CCSpriteFrame::create()
    {
        RefPtrWillBeRawPtr<CCSpriteFrame> ret = adoptRefWillBeNoop(new CCSpriteFrame());
        cocos2d::CCSpriteFrame* impl = new cocos2d::CCSpriteFrame();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCSpriteFrame::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCSpriteFrame::~CCSpriteFrame() {
    }
} // namespace blink
