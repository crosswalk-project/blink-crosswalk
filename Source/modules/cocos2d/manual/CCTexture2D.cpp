// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCTexture2D.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCTexture2D.h"
#include "core/html/HTMLImageElement.h"
#include "core/html/HTMLCanvasElement.h"
#include "core/html/HTMLVideoElement.h"



namespace blink {

    ScriptValue CCTexture2D::getShaderProgram(ScriptState* scriptState) {

        cocos2d::CCGLProgram* ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getShaderProgram();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCGLProgram)
        
    }

    bool CCTexture2D::initWithETCFile(String arg0) {

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithETCFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    String CCTexture2D::stringForFormat() {

        const String ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->stringForFormat();
        
        
        return ret_impl;
    }

    void CCTexture2D::setShaderProgram(CCGLProgram* arg0) {
        cocos2d::CCGLProgram* _arg0 = (cocos2d::CCGLProgram*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->setShaderProgram( _arg0);
    }

    float CCTexture2D::getMaxS() {

        float ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getMaxS();
        
        
        return ret_impl;
    }

    bool CCTexture2D::hasPremultipliedAlpha() {

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->hasPremultipliedAlpha();
        
        
        return ret_impl;
    }

    unsigned int CCTexture2D::getPixelsHigh() {

        unsigned int ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getPixelsHigh();
        
        
        return ret_impl;
    }

    unsigned int CCTexture2D::bitsPerPixelForFormat(int arg0) {

        unsigned int ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->bitsPerPixelForFormat((cocos2d::CCTexture2DPixelFormat)(arg0));
        
        
        return ret_impl;
    }

    unsigned int CCTexture2D::bitsPerPixelForFormat() {

        unsigned int ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->bitsPerPixelForFormat();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<WebGLTexture> CCTexture2D::getName() {
        
        unsigned int ret_impl = 0;
        if(m_cocos2d_impl != NULL)
            ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getName();
        RefPtr<WebGLTexture> ret = adoptRefWillBeNoop((WebGLTexture*) ret_impl);
        return ret.release();
    }

    bool CCTexture2D::initWithString(String arg0, String arg1, float arg2) {

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2));
        
        
        return ret_impl;
    }

    bool CCTexture2D::initWithString(String arg0, String arg1, float arg2, CCSize* arg3, int arg4, int arg5) {
        cocos2d::CCSize* _arg3 = (cocos2d::CCSize*)(arg3->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()), (char*)(arg1.utf8().data()), (float)(arg2),  *_arg3, (cocos2d::CCTextAlignment)(arg4), (cocos2d::CCVerticalTextAlignment)(arg5));
        
        
        return ret_impl;
    }

    bool CCTexture2D::initWithString(String arg0, ccFontDefinition* arg1) {
        cocos2d::ccFontDefinition* _arg1 = (cocos2d::ccFontDefinition*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithString((char*)(arg0.utf8().data()),  _arg1);
        
        
        return ret_impl;
    }

    void CCTexture2D::setMaxT(float arg0) {

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->setMaxT((float)(arg0));
    }

    void CCTexture2D::drawInRect(CCRect* arg0) {
        cocos2d::CCRect* _arg0 = (cocos2d::CCRect*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->drawInRect( *_arg0);
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTexture2D::getContentSize() {

        cocos2d::CCSize ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getContentSize();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCTexture2D::getMaxT() {

        float ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getMaxT();
        
        
        return ret_impl;
    }

    void CCTexture2D::setAliasTexParameters() {

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->setAliasTexParameters();
    }

    void CCTexture2D::setAntiAliasTexParameters() {

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->setAntiAliasTexParameters();
    }

    void CCTexture2D::generateMipmap() {

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->generateMipmap();
    }

    int CCTexture2D::getPixelFormat() {

        int ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getPixelFormat();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCTexture2D::getContentSizeInPixels() {

        const cocos2d::CCSize ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getContentSizeInPixels();
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned int CCTexture2D::getPixelsWide() {

        unsigned int ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->getPixelsWide();
        
        
        return ret_impl;
    }

    void CCTexture2D::drawAtPoint(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->drawAtPoint( *_arg0);
    }

    bool CCTexture2D::hasMipmaps() {

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->hasMipmaps();
        
        
        return ret_impl;
    }

    bool CCTexture2D::initWithPVRFile(String arg0) {

        bool ret_impl = ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithPVRFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCTexture2D::setMaxS(float arg0) {

        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->setMaxS((float)(arg0));
    }

    void CCTexture2D::setDefaultAlphaPixelFormat(int arg0) {

        cocos2d::CCTexture2D::setDefaultAlphaPixelFormat((cocos2d::CCTexture2DPixelFormat)(arg0));
    }

    int CCTexture2D::getDefaultAlphaPixelFormat() {

        int ret_impl = cocos2d::CCTexture2D::defaultAlphaPixelFormat();
        
        
        return ret_impl;
    }

    void CCTexture2D::PVRImagesHavePremultipliedAlpha(bool arg0) {

        cocos2d::CCTexture2D::PVRImagesHavePremultipliedAlpha((bool)(arg0));
    }
    cocos2d::CCTexture2D* CCTexture2D::getCocos2dImpl() {
        return (cocos2d::CCTexture2D*)m_cocos2d_impl;
    }


    CCTexture2D::CCTexture2D() {
        m_cocos2d_impl = NULL;
        m_img = nullptr;
        m_canvas = nullptr; 
        m_video = nullptr;
        m_isLoaded = false;
    }

    PassRefPtrWillBeRawPtr<CCTexture2D> CCTexture2D::create()
    {
        RefPtrWillBeRawPtr<CCTexture2D> ret = adoptRefWillBeNoop(new CCTexture2D());
        cocos2d::CCTexture2D* impl = new cocos2d::CCTexture2D();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTexture2D::~CCTexture2D() {
    }

    void CCTexture2D::handleLoadedTexture() {
        if(m_img != nullptr)
        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithHTMLImageElement(m_img, m_img->width(), m_img->height());
        else if(m_canvas != nullptr)
        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithHTMLCanvasElement(m_canvas, m_canvas->width(), m_canvas->height());
        else if(m_video != nullptr)
        ((cocos2d::CCTexture2D*)m_cocos2d_impl)->initWithHTMLVideoElement(m_video, m_video->videoWidth(), m_video->videoHeight());
        m_isLoaded = true;
    }

    void CCTexture2D::initWithElement(HTMLImageElement* image) {
        m_img = image;
        m_isLoaded = false;
        m_canvas = nullptr; 
        m_video  = nullptr;
    }

    void CCTexture2D::initWithElement(HTMLCanvasElement* canvas) {
        m_canvas = canvas;
        m_isLoaded = false;
        m_img = nullptr;
        m_video = nullptr;
    }

    void CCTexture2D::initWithElement(HTMLVideoElement* video) {
        m_video = video;
        m_isLoaded = false;
        m_canvas = nullptr;
        m_img = nullptr;
    }
} // namespace blink
