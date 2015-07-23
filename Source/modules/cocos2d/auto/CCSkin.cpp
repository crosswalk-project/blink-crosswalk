// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSkin.h"

namespace blink {

    ScriptValue CCSkin::getBone(ScriptState* scriptState) {

        cocos2d::extension::CCBone* ret_impl = ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->getBone();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCBone)
        
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCSkin::nodeToWorldTransform() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->nodeToWorldTransform();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCSkin::initWithFile(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCAffineTransform> CCSkin::nodeToWorldTransformAR() {

        cocos2d::CCAffineTransform ret_impl = ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->nodeToWorldTransformAR();
        
        RefPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCSkin::updateTransform() {

        ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->updateTransform();
    }

    String CCSkin::getDisplayName() {

        String ret_impl = String(((cocos2d::extension::CCSkin*)m_cocos2d_impl)->getDisplayName().c_str());
        
        
        return ret_impl;
    }

    void CCSkin::updateArmatureTransform() {

        ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->updateArmatureTransform();
    }

    bool CCSkin::initWithSpriteFrameName(String arg0) {

        bool ret_impl = ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->initWithSpriteFrameName((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    void CCSkin::setBone(CCBone* arg0) {
        cocos2d::extension::CCBone* _arg0 = (cocos2d::extension::CCBone*)(arg0->getCocos2dImpl());

        ((cocos2d::extension::CCSkin*)m_cocos2d_impl)->setBone( _arg0);
    }
    ScriptValue CCSkin::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCSkin* ret_impl = cocos2d::extension::CCSkin::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSkin)
        
    }
    ScriptValue CCSkin::createInternal(ScriptState* scriptState) {

        cocos2d::extension::CCSkin* ret_impl = cocos2d::extension::CCSkin::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSkin)
        
    }

    ScriptValue CCSkin::createWithSpriteFrameName(ScriptState* scriptState, String arg0) {

        cocos2d::extension::CCSkin* ret_impl = cocos2d::extension::CCSkin::createWithSpriteFrameName((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSkin)
        
    }
    cocos2d::extension::CCSkin* CCSkin::getCocos2dImpl() {
        return (cocos2d::extension::CCSkin*)m_cocos2d_impl;
    }


    CCSkin::CCSkin() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSkin> CCSkin::create()
    {
        RefPtrWillBeRawPtr<CCSkin> ret = adoptRefWillBeNoop(new CCSkin());
        cocos2d::extension::CCSkin* impl = new cocos2d::extension::CCSkin();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCSkin::~CCSkin() {
    }
} // namespace blink
