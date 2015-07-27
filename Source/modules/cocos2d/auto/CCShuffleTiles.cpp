// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCShuffleTiles.h"

namespace blink {

    void CCShuffleTiles::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCShuffleTiles*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCShuffleTiles::initWithDuration(float arg0, CCSize* arg1, unsigned int arg2) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCShuffleTiles*)m_cocos2d_impl)->initWithDuration((float)(arg0),  *_arg1, (unsigned int)(arg2));
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCSize> CCShuffleTiles::getDelta(CCSize* arg0) {
        cocos2d::CCSize* _arg0 = (cocos2d::CCSize*)(arg0->getCocos2dImpl());

        cocos2d::CCSize ret_impl = ((cocos2d::CCShuffleTiles*)m_cocos2d_impl)->getDelta( *_arg0);
        
        RefPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCShuffleTiles::update(float arg0) {

        ((cocos2d::CCShuffleTiles*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCShuffleTiles::createInternal(ScriptState* scriptState, float arg0, CCSize* arg1, unsigned int arg2) {
        cocos2d::CCSize* _arg1 = (cocos2d::CCSize*)(arg1->getCocos2dImpl());

        cocos2d::CCShuffleTiles* ret_impl = cocos2d::CCShuffleTiles::create((float)(arg0),  *_arg1, (unsigned int)(arg2));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCShuffleTiles)
        
    }
    cocos2d::CCShuffleTiles* CCShuffleTiles::getCocos2dImpl() {
        return (cocos2d::CCShuffleTiles*)m_cocos2d_impl;
    }


    CCShuffleTiles::CCShuffleTiles() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCShuffleTiles> CCShuffleTiles::create()
    {
        RefPtrWillBeRawPtr<CCShuffleTiles> ret = adoptRefWillBeNoop(new CCShuffleTiles());
        cocos2d::CCShuffleTiles* impl = new cocos2d::CCShuffleTiles();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCShuffleTiles::~CCShuffleTiles() {
    }
} // namespace blink
