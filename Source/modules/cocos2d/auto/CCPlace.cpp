// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCPlace.h"

namespace blink {

    bool CCPlace::initWithPosition(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCPlace*)m_cocos2d_impl)->initWithPosition( *_arg0);
        
        
        return ret_impl;
    }

    void CCPlace::update(float arg0) {

        ((cocos2d::CCPlace*)m_cocos2d_impl)->update((float)(arg0));
    }

    ScriptValue CCPlace::createInternal(ScriptState* scriptState, CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        cocos2d::CCPlace* ret_impl = cocos2d::CCPlace::create( *_arg0);
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCPlace)
        
    }
    cocos2d::CCPlace* CCPlace::getCocos2dImpl() {
        return (cocos2d::CCPlace*)m_cocos2d_impl;
    }


    CCPlace::CCPlace() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCPlace> CCPlace::create()
    {
        RefPtrWillBeRawPtr<CCPlace> ret = adoptRefWillBeNoop(new CCPlace());
        cocos2d::CCPlace* impl = new cocos2d::CCPlace();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCPlace::~CCPlace() {
    }
} // namespace blink
