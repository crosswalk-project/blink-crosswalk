// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/manual/CCBezierTo.h"

namespace blink {

    void CCBezierTo::startWithTarget(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCNode, arg0_wrapper, arg0);
        cocos2d::CCNode* _arg0 = (cocos2d::CCNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCBezierTo*)m_cocos2d_impl)->startWithTarget( _arg0);
    }

    bool CCBezierTo::initWithDuration(float arg0, const ScriptValue& arg1_wrapper) {
        if (!arg1_wrapper.isObject())
            return false;

        v8::Handle<v8::Value> value = arg1_wrapper.v8Value();
        if (!value->IsArray())
            return false;

        v8::Local<v8::Object> object = value->ToObject();
        v8::Local<v8::Value> value0 = object->Get(0);
        v8::Local<v8::Value> value1 = object->Get(1);
        v8::Local<v8::Value> value2 = object->Get(2);
        if (!value0->IsObject() || !value1->IsObject() || !value2->IsObject())
            return false;

        v8::Isolate* isolate = arg1_wrapper.isolate();
        v8::Local<v8::Object> object0 = value0->ToObject();
        v8::Local<v8::Value> valueX0 = object0->Get(v8AtomicString(isolate, "x"));
        v8::Local<v8::Value> valueY0 = object0->Get(v8AtomicString(isolate, "y"));

        v8::Local<v8::Object> object1 = value1->ToObject();
        v8::Local<v8::Value> valueX1 = object1->Get(v8AtomicString(isolate, "x"));
        v8::Local<v8::Value> valueY1 = object1->Get(v8AtomicString(isolate, "y"));

        v8::Local<v8::Object> object2 = value2->ToObject();
        v8::Local<v8::Value> valueX2 = object2->Get(v8AtomicString(isolate, "x"));
        v8::Local<v8::Value> valueY2 = object2->Get(v8AtomicString(isolate, "y"));

        if (!valueX0->IsNumber() || !valueX1->IsNumber() || !valueX2->IsNumber() ||
            !valueY0->IsNumber() || !valueY1->IsNumber() || !valueY2->IsNumber())
            return false;

        float x0 = (float)valueX0->ToNumber()->Value();
        float y0 = (float)valueY0->ToNumber()->Value();
        float x1 = (float)valueX1->ToNumber()->Value();
        float y1 = (float)valueY1->ToNumber()->Value();
        float x2 = (float)valueX2->ToNumber()->Value();
        float y2 = (float)valueY2->ToNumber()->Value();

        cocos2d::ccBezierConfig bezierConfig = {cocos2d::CCPoint(x2, y2),
                                                cocos2d::CCPoint(x0, y0),
                                                cocos2d::CCPoint(x1, y1)};
        bool ret = ((cocos2d::CCBezierTo*)m_cocos2d_impl)->initWithDuration(arg0, bezierConfig);
        return ret;
    }

    cocos2d::CCBezierTo* CCBezierTo::getCocos2dImpl() {
        return (cocos2d::CCBezierTo*)m_cocos2d_impl;
    }

    CCBezierTo::CCBezierTo() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCBezierTo> CCBezierTo::create()
    {
        RefPtrWillBeRawPtr<CCBezierTo> ret = adoptRefWillBeNoop(new CCBezierTo());
        cocos2d::CCBezierTo* impl = new cocos2d::CCBezierTo();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCBezierTo::~CCBezierTo() {
    }
} // namespace blink
