// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCCardinalSplineTo.h"

namespace blink {

    void CCCardinalSplineTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    ScriptValue CCCardinalSplineTo::reverse(ScriptState* scriptState) {

        cocos2d::CCActionInterval* ret_impl = ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->reverse();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCActionInterval)
        
    }

    bool CCCardinalSplineTo::initWithDuration(float arg0, const Vector<ScriptValue>& arg1, float arg2) {
        cocos2d::CCPointArray* point_array = cocos2d::CCPointArray::create(arg1.size());
        jsArrayToCCPointArray(arg1, point_array);
        bool ret_impl = ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->initWithDuration((float)(arg0),  point_array, (float)(arg2));
        return ret_impl;
    }

    ScriptValue CCCardinalSplineTo::getPoints(ScriptState* scriptState) {

        cocos2d::CCPointArray* ret_impl = ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->getPoints();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCPointArray)
        
    }

    void CCCardinalSplineTo::update(float arg0) {

        ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCCardinalSplineTo::updatePosition(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCCardinalSplineTo*)m_cocos2d_impl)->updatePosition( *_arg0);
    }
    cocos2d::CCCardinalSplineTo* CCCardinalSplineTo::getCocos2dImpl() {
        return (cocos2d::CCCardinalSplineTo*)m_cocos2d_impl;
    }

    void CCCardinalSplineTo:: jsArrayToCCPointArray(const Vector<ScriptValue>& points, cocos2d::CCPointArray* pointsArray){
       size_t size = points.size();
       for (size_t i = 0; i < size; i++) {
         ScriptValue arg_wrapper = points.at(i);
         SCRIPT_VALUE_WRAPPER(CCPoint, arg_wrapper, arg);
         cocos2d::CCPoint* _arg = (cocos2d::CCPoint*)(arg->getCocos2dImpl());
         pointsArray->addControlPoint(*_arg);
       }
    }

    CCCardinalSplineTo::CCCardinalSplineTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCCardinalSplineTo> CCCardinalSplineTo::create()
    {
        RefPtrWillBeRawPtr<CCCardinalSplineTo> ret = adoptRefWillBeNoop(new CCCardinalSplineTo());
        cocos2d::CCCardinalSplineTo* impl = new cocos2d::CCCardinalSplineTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCCardinalSplineTo::~CCCardinalSplineTo() {
    }
} // namespace blink
