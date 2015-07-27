// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCCatmullRomTo.h"
#include "modules/cocos2d/manual/CCCardinalSplineTo.h"

namespace blink {

    bool CCCatmullRomTo::initWithDuration(float arg0, CCPointArray* arg1) {
        cocos2d::CCPointArray* _arg1 = (cocos2d::CCPointArray*)(arg1->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCCatmullRomTo*)m_cocos2d_impl)->initWithDuration((float)(arg0),  _arg1);


        return ret_impl;
    }

    bool CCCatmullRomTo:: initWithDuration(float arg0, const Vector<ScriptValue>& arg1)
    {
        cocos2d::CCPointArray* point_array = cocos2d::CCPointArray::create(arg1.size());
        CCCardinalSplineTo::jsArrayToCCPointArray(arg1, point_array);
        bool ret_impl = ((cocos2d::CCCatmullRomTo*)m_cocos2d_impl)->initWithDuration((float)(arg0), point_array);
        return ret_impl;
    }

    cocos2d::CCCatmullRomTo* CCCatmullRomTo::getCocos2dImpl() {
        return (cocos2d::CCCatmullRomTo*)m_cocos2d_impl;
    }

    CCCatmullRomTo::CCCatmullRomTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCCatmullRomTo> CCCatmullRomTo::create()
    {
        RefPtrWillBeRawPtr<CCCatmullRomTo> ret = adoptRefWillBeNoop(new CCCatmullRomTo());
        cocos2d::CCCatmullRomTo* impl = new cocos2d::CCCatmullRomTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCCatmullRomTo::~CCCatmullRomTo() {
    }
} // namespace blink
