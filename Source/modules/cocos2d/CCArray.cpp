// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/CCArray.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8CCArray.h"
#include "modules/cocos2d/events/ArrayForEachCallback.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "modules/cocos2d/CCDictionary.h"
#include "bindings/modules/v8/V8CCDictionary.h"
#include "bindings/modules/v8/V8ArrayForEachCallback.h"
#include "modules/cocos2d/cocos2d.hpp"

#include <android/log.h>

#define  LOG_TAG    "CCArray"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

namespace blink {

CCArray::CCArray()
{
    m_cocos2d_impl = nullptr;
}

CCArray::~CCArray()
{
    if (m_cocos2d_impl != NULL) {
        if (m_cocos2d_impl->getCrosswalkImpl() == this) {
            m_cocos2d_impl->setCrosswalkImpl(NULL);
        } else {
            m_cocos2d_impl->release();
        }
        m_cocos2d_impl = NULL;
    }
}


long CCArray::length() const {
    if (m_cocos2d_impl == nullptr) {
        return 0;
    }
    return m_cocos2d_impl->count();
}

void CCArray::getItem(unsigned int index, cocos2d::CCString** str, cocos2d::CCDictionary** dic, cocos2d::CCArray** arr,
                      cocos2d::CCDouble** dou, cocos2d::CCBool** bol, cocos2d::CCFloat** flt, cocos2d::CCInteger** itg) {
    if (m_cocos2d_impl == nullptr) return;

    cocos2d::CCObject* obj = m_cocos2d_impl->objectAtIndex(index);

    if ((*str = m_cocos2d_impl->getCCStringPtrIfExists(obj))) {
        return;
    } else if ((*dic = m_cocos2d_impl->getCCDictionaryPtrIfExists(obj))) {
        return;
    } else if ((*arr = m_cocos2d_impl->getCCArrayPtrIfExists(obj))) {
        return;
    } else if ((*dou = m_cocos2d_impl->getCCDoublePtrIfExists(obj))) {
        return;
    } else if ((*flt = m_cocos2d_impl->getCCFloatPtrIfExists(obj))) {
        return;
    } else if ((*itg = m_cocos2d_impl->getCCIntegerPtrIfExists(obj))) {
        return;
    } else if ((*bol = m_cocos2d_impl->getCCBoolPtrIfExists(obj))) {
        return;
    }
}

PassRefPtrWillBeRawPtr<CCArray> CCArray::fromJSArray(const Vector<ScriptValue>& jsValues) {
    cocos2d::CCArray* ccArray = cocos2d::CCArray::create();
    size_t size = jsValues.size();
    for (size_t i = 0; i < size; i++) {
        ScriptValue item = jsValues.at(i);
	v8::Handle<v8::Value> v8Value = item.v8Value();
        if (v8Value->IsNumber()) {
            int tmp = v8::Handle<v8::Number>::Cast(v8Value)->Value();
            ccArray->addObject(cocos2d::CCInteger::create(tmp));
        } else if (v8Value->IsString()) {
            String tmp = toCoreString(v8::Handle<v8::String>::Cast(v8Value));
            ccArray->addObject(cocos2d::CCString::create(tmp.utf8().data()));
        } else if (v8Value->IsObject()) {
            SCRIPT_VALUE_WRAPPER(CCObject, item, tmp)
	    cocos2d::CCObject* obj = tmp->getCocos2dImpl();
            ccArray->addObject(obj);
        } else {
            LOGD("CCArray: No wrapper for item");
        }
    }
    PassRefPtrWillBeRawPtr<CCArray> retValue = CCArray::create();
    retValue->setCocos2dImpl(ccArray);
    return retValue;
}

void V8CCArray::indexedPropertyGetterCustom(unsigned int index, v8::PropertyCallbackInfo<v8::Value> const& info) {
    v8::Isolate* isolate = info.GetIsolate();
    CCArray* impl = V8CCArray::toImpl(info.Holder());

    cocos2d::CCString* strVal = NULL;
    cocos2d::CCDictionary* dictVal = NULL;
    cocos2d::CCArray* arrVal = NULL;
    cocos2d::CCDouble* doubleVal = NULL;
    cocos2d::CCBool* boolVal = NULL;
    cocos2d::CCFloat* floatVal = NULL;
    cocos2d::CCInteger* intVal = NULL;

    impl->getItem(index, &strVal, &dictVal, &arrVal, &doubleVal, &boolVal, &floatVal, &intVal);

    if (strVal != NULL) {
        v8SetReturnValue(info, v8AtomicString(info.GetIsolate(), strVal->getCString()));
    } else if (dictVal != NULL) {
        RefPtr<CCDictionary> ret = adoptRefWillBeNoop(new CCDictionary());
        ret->setCocos2dImpl(dictVal);
        v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
        v8SetReturnValue(info, wrapper);
    } else if (arrVal != NULL) {
        RefPtr<CCArray> ret = adoptRefWillBeNoop(new CCArray());
        ret->setCocos2dImpl(arrVal);
        v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
        v8SetReturnValue(info, wrapper);
    } else if (doubleVal != NULL) {
	v8SetReturnValue(info, v8::Number::New(isolate, doubleVal->getValue()));
    } else if (floatVal != NULL) {
        v8SetReturnValue(info, v8::Number::New(isolate, floatVal->getValue()));
    } else if (intVal != NULL) {
        v8SetReturnValueInt(info, intVal->getValue());
    } else if (boolVal != NULL) {
	v8SetReturnValueBool(info, boolVal->getValue());
    } else {
        cocos2d::CCObject* obj = impl->getCocos2dImpl()->objectAtIndex(index);
        if (obj == NULL) {
            v8SetReturnValue(info, v8::None);
            return;
        }
        CCObject* objCrosswalk = (CCObject*)obj->getCrosswalkImpl();
        if (objCrosswalk != NULL) {
            v8SetReturnValue(info, toV8(objCrosswalk, info.Holder(), info.GetIsolate()));
        } else {
            v8::Handle<v8::Value> v8_wrapper;
            v8_wrapper = ScriptingCore::getInstance()->getBindingWrapper(ScriptState::current(info.GetIsolate()), obj);
            if (v8_wrapper->IsNull()) {
                v8SetReturnValue(info, v8::None);
            } else {
                v8SetReturnValue(info, v8_wrapper);
            }
        }
    }
}

void V8CCArray::forEachMethodCustom(v8::FunctionCallbackInfo<v8::Value> const& info) {
    CCArray* impl = V8CCArray::toImpl(info.Holder());

    ArrayForEachCallback* callback;
    {
        callback = V8ArrayForEachCallback::create(v8::Handle<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
    }
    cocos2d::CCArray* array = impl->getCocos2dImpl();

    if (array == NULL) return;

    int length = array->count();

    ScriptState* state = ScriptState::current(info.GetIsolate());
    v8::Isolate* isolate = info.GetIsolate();

    for (int i=0; i<length; i++) {
        cocos2d::CCString* strVal = NULL;
        cocos2d::CCDictionary* dictVal = NULL;
        cocos2d::CCArray* arrVal = NULL;
        cocos2d::CCDouble* doubleVal = NULL;
        cocos2d::CCBool* boolVal = NULL;
        cocos2d::CCFloat* floatVal = NULL;
        cocos2d::CCInteger* intVal = NULL;

        impl->getItem(i, &strVal, &dictVal, &arrVal, &doubleVal, &boolVal, &floatVal, &intVal);
	if (strVal != NULL) {
            callback->handleEvent(ScriptValue(state, v8AtomicString(info.GetIsolate(), strVal->getCString())));
        } else if (dictVal != NULL) {
            RefPtr<CCDictionary> ret = adoptRefWillBeNoop(new CCDictionary());
            ret->setCocos2dImpl(dictVal);
            v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
            callback->handleEvent(ScriptValue(state, wrapper));
        } else if (arrVal != NULL) {
            RefPtr<CCArray> ret = adoptRefWillBeNoop(new CCArray());
            ret->setCocos2dImpl(arrVal);
            v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
            callback->handleEvent(ScriptValue(state, wrapper));
        } else if (doubleVal != NULL) {
            callback->handleEvent(ScriptValue(state, v8::Number::New(isolate, doubleVal->getValue())));
        } else if (boolVal != NULL) {
            callback->handleEvent(ScriptValue(state, v8::Boolean::New(isolate, boolVal->getValue())));
        } else if (floatVal != NULL) {
            callback->handleEvent(ScriptValue(state, v8::Number::New(isolate, floatVal->getValue())));
        } else if (intVal != NULL) {
            callback->handleEvent(ScriptValue(state, v8::Number::New(isolate, intVal->getValue())));
        } else {
            cocos2d::CCObject* obj = impl->getCocos2dImpl()->objectAtIndex(i);
            if (obj == NULL) {
                continue;
            }
            CCObject* objCrosswalk = (CCObject*)obj->getCrosswalkImpl();
            if (objCrosswalk != NULL) {
                callback->handleEvent(ScriptValue(state, toV8(objCrosswalk, info.Holder(), info.GetIsolate())));
                //v8SetReturnValue(info, toV8(objCrosswalk, info.Holder(), info.GetIsolate()));
            } else {
                v8::Handle<v8::Value> v8_wrapper;
                v8_wrapper = ScriptingCore::getInstance()->getBindingWrapper(ScriptState::current(info.GetIsolate()), obj);
                if (v8_wrapper->IsNull()) {
                    //v8SetReturnValue(info, v8::None);
                } else {
                    //v8SetReturnValue(info, v8_wrapper);
                    callback->handleEvent(ScriptValue(state, v8_wrapper));
                }
            }
        }
    }
}

PassRefPtrWillBeRawPtr<CCArray> CCArray::create() {
    RefPtrWillBeRawPtr<CCArray> ret = adoptRefWillBeNoop(new CCArray());
    cocos2d::CCArray* impl = cocos2d::CCArray::create();
    ret->setCocos2dImpl(impl);
    return ret.release();
}

void CCArray::setCocos2dImpl(cocos2d::CCArray* impl) {
    if (m_cocos2d_impl != NULL) {
        m_cocos2d_impl->setCrosswalkImpl(NULL);
        m_cocos2d_impl->release();
    }
    if (impl != NULL) {
        m_cocos2d_impl = impl;
        impl->retain();
        m_cocos2d_impl->setCrosswalkImpl((CCObject*)this);
    }
}
}
