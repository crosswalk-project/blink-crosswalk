// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCTurnOffTiles.h"

namespace blink {

    void CCTurnOffTiles::turnOnTile(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->turnOnTile( *_arg0);
    }

    void CCTurnOffTiles::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    void CCTurnOffTiles::turnOffTile(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->turnOffTile( *_arg0);
    }

    void CCTurnOffTiles::shuffle(PassRefPtr<Uint8Array> arg0, unsigned int arg1) {

        ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->shuffle((unsigned int*)(arg0.get()->data()), (unsigned int)(arg1));
    }

    bool CCTurnOffTiles::initWithDuration(float arg0, CCSize* arg1, unsigned int arg2) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (unsigned int)(arg2));
        
        
        return ret_impl;
    }

    void CCTurnOffTiles::update(float arg0) {

        ((cocos2d::CCTurnOffTiles*)m_cocos2d_impl)->update((float)(arg0));
    }
    ScriptValue CCTurnOffTiles::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCTurnOffTiles* ret_impl = cocos2d::CCTurnOffTiles::create((float)(arg0),  *_arg1, (unsigned int)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTurnOffTiles)
        
    }
    ScriptValue CCTurnOffTiles::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCTurnOffTiles* ret_impl = cocos2d::CCTurnOffTiles::create((float)(arg0),  *_arg1);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTurnOffTiles)
        
    }
    cocos2d::CCTurnOffTiles* CCTurnOffTiles::getCocos2dImpl() {
        return (cocos2d::CCTurnOffTiles*)m_cocos2d_impl;
    }


    CCTurnOffTiles::CCTurnOffTiles() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCTurnOffTiles> CCTurnOffTiles::create()
    {
        RefPtrWillBeRawPtr<CCTurnOffTiles> ret = adoptRefWillBeNoop(new CCTurnOffTiles());
        cocos2d::CCTurnOffTiles* impl = new cocos2d::CCTurnOffTiles();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCTurnOffTiles::~CCTurnOffTiles() {
    }
} // namespace blink
