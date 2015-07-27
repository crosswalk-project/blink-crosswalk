// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCSet.h"

namespace blink {

    int CCSet::count() {

        int ret_impl = ((cocos2d::CCSet*)m_cocos2d_impl)->count();
        
        
        return ret_impl;
    }

    void CCSet::addObject(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSet*)m_cocos2d_impl)->addObject( _arg0);
    }

    ScriptValue CCSet::mutableCopy(ScriptState* scriptState) {

        cocos2d::CCSet* ret_impl = ((cocos2d::CCSet*)m_cocos2d_impl)->mutableCopy();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSet)
        
    }

    ScriptValue CCSet::anyObject(ScriptState* scriptState) {

        cocos2d::CCObject* ret_impl = ((cocos2d::CCSet*)m_cocos2d_impl)->anyObject();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
        
    }

    void CCSet::removeAllObjects() {

        ((cocos2d::CCSet*)m_cocos2d_impl)->removeAllObjects();
    }

    void CCSet::removeObject(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        ((cocos2d::CCSet*)m_cocos2d_impl)->removeObject( _arg0);
    }

    ScriptValue CCSet::copy(ScriptState* scriptState) {

        cocos2d::CCSet* ret_impl = ((cocos2d::CCSet*)m_cocos2d_impl)->copy();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSet)
        
    }

    bool CCSet::containsObject(CCObject* arg0) {
        cocos2d::CCObject* _arg0 = (cocos2d::CCObject*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCSet*)m_cocos2d_impl)->containsObject( _arg0);
        
        
        return ret_impl;
    }

    ScriptValue CCSet::createInternal(ScriptState* scriptState) {

        cocos2d::CCSet* ret_impl = cocos2d::CCSet::create();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCSet)
        
    }
    cocos2d::CCSet* CCSet::getCocos2dImpl() {
        return (cocos2d::CCSet*)m_cocos2d_impl;
    }


    CCSet::CCSet() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCSet> CCSet::create()
    {
        RefPtrWillBeRawPtr<CCSet> ret = adoptRefWillBeNoop(new CCSet());
        return ret.release();
    }


    CCSet::~CCSet() {
    }
} // namespace blink
