// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCLayerMultiplex.h"

namespace blink {

    bool CCLayerMultiplex::initWithArray(CCArray* arg0) {
        cocos2d::CCArray* _arg0 = (cocos2d::CCArray*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCLayerMultiplex*)m_cocos2d_impl)->initWithArray( _arg0);
        
        
        return ret_impl;
    }

    void CCLayerMultiplex::switchTo(unsigned int arg0) {

        ((cocos2d::CCLayerMultiplex*)m_cocos2d_impl)->switchTo((unsigned int)(arg0));
    }

    void CCLayerMultiplex::addLayer(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCLayer, arg0_wrapper, arg0);
        cocos2d::CCLayer* _arg0 = (cocos2d::CCLayer*)(arg0->getCocos2dImpl());

        ((cocos2d::CCLayerMultiplex*)m_cocos2d_impl)->addLayer( _arg0);
    }

    void CCLayerMultiplex::switchToAndReleaseMe(unsigned int arg0) {

        ((cocos2d::CCLayerMultiplex*)m_cocos2d_impl)->switchToAndReleaseMe((unsigned int)(arg0));
    }
    cocos2d::CCLayerMultiplex* CCLayerMultiplex::getCocos2dImpl() {
        return (cocos2d::CCLayerMultiplex*)m_cocos2d_impl;
    }


    CCLayerMultiplex::CCLayerMultiplex() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCLayerMultiplex> CCLayerMultiplex::create()
    {
        RefPtrWillBeRawPtr<CCLayerMultiplex> ret = adoptRefWillBeNoop(new CCLayerMultiplex());
        cocos2d::CCLayerMultiplex* impl = new cocos2d::CCLayerMultiplex();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCLayerMultiplex::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCLayerMultiplex::~CCLayerMultiplex() {
    }
} // namespace blink
