// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCRenderTexture.h"

namespace blink {

    void CCRenderTexture::clearStencil(int arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->clearStencil((int)(arg0));
    }

    void CCRenderTexture::begin() {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->begin();
    }

    void CCRenderTexture::listenToForeground(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->listenToForeground( _arg0);
    }

    float CCRenderTexture::getClearDepth() {

        float ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->getClearDepth();
        
        
        return ret_impl;
    }

    int CCRenderTexture::getClearStencil() {

        int ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->getClearStencil();
        
        
        return ret_impl;
    }

    void CCRenderTexture::end() {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->end();
    }

    void CCRenderTexture::setClearStencil(float arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setClearStencil((float)(arg0));
    }

    bool CCRenderTexture::initWithWidthAndHeight(int arg0, int arg1, int arg2, unsigned int arg3) {

        bool ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->initWithWidthAndHeight((int)(arg0), (int)(arg1), (cocos2d::CCTexture2DPixelFormat)(arg2), (unsigned int)(arg3));
        
        
        return ret_impl;
    }

    bool CCRenderTexture::initWithWidthAndHeight(int arg0, int arg1, int arg2) {

        bool ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->initWithWidthAndHeight((int)(arg0), (int)(arg1), (cocos2d::CCTexture2DPixelFormat)(arg2));
        
        
        return ret_impl;
    }

    void CCRenderTexture::visit() {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->visit();
    }

    ScriptValue CCRenderTexture::getSprite(ScriptState* scriptState) {

        cocos2d::CCSprite* ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->getSprite();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSprite)
        
    }

    bool CCRenderTexture::isAutoDraw() {

        bool ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->isAutoDraw();
        
        
        return ret_impl;
    }

    void CCRenderTexture::setClearFlags(unsigned int arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setClearFlags((unsigned int)(arg0));
    }

    void CCRenderTexture::draw() {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->draw();
    }

    void CCRenderTexture::setAutoDraw(bool arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setAutoDraw((bool)(arg0));
    }

    void CCRenderTexture::setClearColor(ccColor4F* arg0) {
        cocos2d::ccColor4F* _arg0 = (cocos2d::ccColor4F*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setClearColor( *_arg0);
    }

    void CCRenderTexture::endToLua() {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->endToLua();
    }

    void CCRenderTexture::beginWithClear(float arg0, float arg1, float arg2, float arg3, float arg4) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->beginWithClear((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3), (float)(arg4));
    }

    void CCRenderTexture::beginWithClear(float arg0, float arg1, float arg2, float arg3) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->beginWithClear((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3));
    }

    void CCRenderTexture::beginWithClear(float arg0, float arg1, float arg2, float arg3, float arg4, int arg5) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->beginWithClear((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3), (float)(arg4), (int)(arg5));
    }

    void CCRenderTexture::clearDepth(float arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->clearDepth((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<ccColor4F> CCRenderTexture::getClearColor() {

        const cocos2d::ccColor4F ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->getClearColor();
        
        RefPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCRenderTexture::listenToBackground(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->listenToBackground( _arg0);
    }

    void CCRenderTexture::clear(float arg0, float arg1, float arg2, float arg3) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->clear((float)(arg0), (float)(arg1), (float)(arg2), (float)(arg3));
    }

    unsigned int CCRenderTexture::getClearFlags() {

        unsigned int ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->getClearFlags();
        
        
        return ret_impl;
    }

    ScriptValue CCRenderTexture::newCCImage(ScriptState* scriptState, bool arg0) {

        cocos2d::CCImage* ret_impl = ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->newCCImage((bool)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCImage)
        
    }

    void CCRenderTexture::setClearDepth(float arg0) {

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setClearDepth((float)(arg0));
    }

    void CCRenderTexture::setSprite(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCSprite, arg0_wrapper, arg0);
        cocos2d::CCSprite* _arg0 = (cocos2d::CCSprite*)(arg0->getCocos2dImpl());

        ((cocos2d::CCRenderTexture*)m_cocos2d_impl)->setSprite( _arg0);
    }
    ScriptValue CCRenderTexture::createInternal(ScriptState* scriptState, int arg0, int arg1, int arg2) {

        cocos2d::CCRenderTexture* ret_impl = cocos2d::CCRenderTexture::create((int)(arg0), (int)(arg1), (cocos2d::CCTexture2DPixelFormat)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRenderTexture)
        
    }
    ScriptValue CCRenderTexture::createInternal(ScriptState* scriptState, int arg0, int arg1, int arg2, unsigned int arg3) {

        cocos2d::CCRenderTexture* ret_impl = cocos2d::CCRenderTexture::create((int)(arg0), (int)(arg1), (cocos2d::CCTexture2DPixelFormat)(arg2), (unsigned int)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRenderTexture)
        
    }
    ScriptValue CCRenderTexture::createInternal(ScriptState* scriptState, int arg0, int arg1) {

        cocos2d::CCRenderTexture* ret_impl = cocos2d::CCRenderTexture::create((int)(arg0), (int)(arg1));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCRenderTexture)
        
    }
    cocos2d::CCRenderTexture* CCRenderTexture::getCocos2dImpl() {
        return (cocos2d::CCRenderTexture*)m_cocos2d_impl;
    }


    CCRenderTexture::CCRenderTexture() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCRenderTexture> CCRenderTexture::create()
    {
        RefPtrWillBeRawPtr<CCRenderTexture> ret = adoptRefWillBeNoop(new CCRenderTexture());
        cocos2d::CCRenderTexture* impl = new cocos2d::CCRenderTexture();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCRenderTexture::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCRenderTexture::~CCRenderTexture() {
    }
} // namespace blink
