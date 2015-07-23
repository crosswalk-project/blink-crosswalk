// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLayerGradient.h"

namespace blink {

    PassRefPtrWillBeRawPtr<ccColor3B> CCLayerGradient::getStartColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->getStartColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCLayerGradient::isCompressedInterpolation() {

        bool ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->isCompressedInterpolation();
        
        
        return ret_impl;
    }

    unsigned char CCLayerGradient::getStartOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->getStartOpacity();
        
        
        return ret_impl;
    }

    void CCLayerGradient::setVector(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setVector( *_arg0);
    }

    void CCLayerGradient::setStartOpacity(unsigned char arg0) {

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setStartOpacity((unsigned char)(arg0));
    }

    void CCLayerGradient::setCompressedInterpolation(bool arg0) {

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setCompressedInterpolation((bool)(arg0));
    }

    void CCLayerGradient::setEndOpacity(unsigned char arg0) {

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setEndOpacity((unsigned char)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCLayerGradient::getVector() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->getVector();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCLayerGradient::init() {

        bool ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    void CCLayerGradient::setEndColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setEndColor( *_arg0);
    }

    bool CCLayerGradient::initWithColor(ccColor4B* arg0, ccColor4B* arg1, CCPoint* arg2) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());
        cocos2d::ccColor4B* _arg1 = (cocos2d::ccColor4B*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->initWithColor( *_arg0,  *_arg1,  *_arg2);
        
        
        return ret_impl;
    }

    bool CCLayerGradient::initWithColor(ccColor4B* arg0, ccColor4B* arg1) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());
        cocos2d::ccColor4B* _arg1 = (cocos2d::ccColor4B*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->initWithColor( *_arg0,  *_arg1);
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCLayerGradient::getEndColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->getEndColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    unsigned char CCLayerGradient::getEndOpacity() {

        unsigned char ret_impl = ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->getEndOpacity();
        
        
        return ret_impl;
    }

    void CCLayerGradient::setStartColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerGradient*)m_cocos2d_impl)->setStartColor( *_arg0);
    }
    ScriptValue CCLayerGradient::createInternal(ScriptState* scriptState, ccColor4B* arg0, ccColor4B* arg1, CCPoint* arg2) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());
        cocos2d::ccColor4B* _arg1 = (cocos2d::ccColor4B*)(arg1->getCocos2dImpl());
        cocos2d::CCPoint* _arg2 = (cocos2d::CCPoint*)(arg2->getCocos2dImpl());

        cocos2d::CCLayerGradient* ret_impl = cocos2d::CCLayerGradient::create( *_arg0,  *_arg1,  *_arg2);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerGradient)
        
    }
    ScriptValue CCLayerGradient::createInternal(ScriptState* scriptState, ccColor4B* arg0, ccColor4B* arg1) {
        cocos2d::ccColor4B* _arg0 = (cocos2d::ccColor4B*)(arg0->getCocos2dImpl());
        cocos2d::ccColor4B* _arg1 = (cocos2d::ccColor4B*)(arg1->getCocos2dImpl());

        cocos2d::CCLayerGradient* ret_impl = cocos2d::CCLayerGradient::create( *_arg0,  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerGradient)
        
    }
    ScriptValue CCLayerGradient::createInternal(ScriptState* scriptState) {

        cocos2d::CCLayerGradient* ret_impl = cocos2d::CCLayerGradient::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCLayerGradient)
        
    }
    cocos2d::CCLayerGradient* CCLayerGradient::getCocos2dImpl() {
        return (cocos2d::CCLayerGradient*)m_cocos2d_impl;
    }


    CCLayerGradient::CCLayerGradient() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLayerGradient> CCLayerGradient::create()
    {
        RefPtrWillBeRawPtr<CCLayerGradient> ret = adoptRefWillBeNoop(new CCLayerGradient());
        cocos2d::CCLayerGradient* impl = new cocos2d::CCLayerGradient();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLayerGradient::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLayerGradient::~CCLayerGradient() {
    }
} // namespace blink
