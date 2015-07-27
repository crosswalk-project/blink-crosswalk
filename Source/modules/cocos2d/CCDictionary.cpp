// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/cocos2d/CCDictionary.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "wtf/ArrayBufferView.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "bindings/modules/v8/V8CCDictionary.h"
#include "modules/cocos2d/CCArray.h"
#include "bindings/modules/v8/V8CCArray.h"
#include "modules/cocos2d/cocos2d.hpp"


#include <android/log.h>

#define  LOG_TAG    "CCDictionary"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)


namespace blink {

CCDictionary::CCDictionary()
{
    m_cocos2d_impl = NULL;
    cocos2d::CCDictionary* impl = cocos2d::CCDictionary::create();
    setCocos2dImpl(impl);
}

CCDictionary::~CCDictionary()
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

unsigned CCDictionary::length() const {
    if (m_cocos2d_impl == nullptr) {
        return 0;
    }
    return m_cocos2d_impl->count();
}

void CCDictionary::getItem(String key, cocos2d::CCString** str, cocos2d::CCDictionary** dic, cocos2d::CCArray** arr,
                      cocos2d::CCDouble** dou, cocos2d::CCBool** bol, cocos2d::CCFloat** flt, cocos2d::CCInteger** itg) {
    if (m_cocos2d_impl == nullptr) return;

    cocos2d::CCObject* obj = m_cocos2d_impl->objectForKey(key.utf8().data());

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

void CCDictionary::namedPropertyEnumerator(Vector<String>& names, ExceptionState& exception) {
    if (m_cocos2d_impl == nullptr) return;
    cocos2d::CCArray* array = m_cocos2d_impl->allKeys();
    if (array == NULL) return;
    int length = array->count();
    for (int i=0; i<length; i++) {
	cocos2d::CCObject* keyObj = array->objectAtIndex(i);
	cocos2d::CCString* keyStr = array->getCCStringPtrIfExists(keyObj);
        names.append(keyStr->getCString());
    }
}

bool CCDictionary::namedPropertyQuery(const AtomicString& name, ExceptionState& exception) {
    if (m_cocos2d_impl == nullptr) return false;
    cocos2d::CCArray* array = m_cocos2d_impl->allKeys();
    if (array == NULL) return false;
    int length = array->count();
    for (int i=0; i<length; i++) {
	cocos2d::CCObject* keyObj = array->objectAtIndex(i);
	cocos2d::CCString* keyStr = array->getCCStringPtrIfExists(keyObj);
        if (keyStr->compare(name.utf8().data()) == 0) {
            return true;
        }
    }
    return false;
}

void V8CCDictionary::namedPropertyGetterCustom(v8::Local<v8::String> key, v8::PropertyCallbackInfo<v8::Value> const& info) {

    if(info.Holder()->HasRealNamedCallbackProperty(key))
        return;
    if(!info.Holder()->GetRealNamedProperty(key).IsEmpty())
        return;
    
    v8::Isolate* isolate = info.GetIsolate();
    CCDictionary* impl = V8CCDictionary::toImpl(info.Holder());    

    cocos2d::CCString* strVal = NULL;
    cocos2d::CCDictionary* dictVal = NULL;
    cocos2d::CCArray* arrVal = NULL;
    cocos2d::CCDouble* doubleVal = NULL;
    cocos2d::CCBool* boolVal = NULL;
    cocos2d::CCFloat* floatVal = NULL;
    cocos2d::CCInteger* intVal = NULL;

    impl->getItem(toCoreString(key), &strVal, &dictVal, &arrVal, &doubleVal, &boolVal, &floatVal, &intVal);

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
        cocos2d::CCObject* obj = impl->getCocos2dImpl()->objectForKey(toCoreString(key).utf8().data());
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

void V8CCDictionary::indexedPropertyGetterCustom(unsigned int index, v8::PropertyCallbackInfo<v8::Value> const& info) {
    v8::Isolate* isolate = info.GetIsolate();
    CCDictionary* impl = V8CCDictionary::toImpl(info.Holder());
    cocos2d::CCDictionary* cocos2d_impl = impl->getCocos2dImpl();

    if (cocos2d_impl == nullptr) return;

    cocos2d::CCArray* array = cocos2d_impl->allKeys();

    if (array == NULL) {
        v8SetReturnValue(info, v8::None);
        return;
    }

    unsigned int length = array->count();
    if (index > length) {
        v8SetReturnValue(info, v8::None);
        return;
    }

    cocos2d::CCObject* keyObj = array->objectAtIndex(index);
    cocos2d::CCString* keyStr = array->getCCStringPtrIfExists(keyObj);

    v8::Handle<v8::Object> object = v8::Object::New(isolate);

    cocos2d::CCString* strVal = NULL;
    cocos2d::CCDictionary* dictVal = NULL;
    cocos2d::CCArray* arrVal = NULL;
    cocos2d::CCDouble* doubleVal = NULL;
    cocos2d::CCBool* boolVal = NULL;
    cocos2d::CCFloat* floatVal = NULL;
    cocos2d::CCInteger* intVal = NULL;

    impl->getItem(keyStr->getCString(), &strVal, &dictVal, &arrVal, &doubleVal, &boolVal, &floatVal, &intVal);

    if (strVal != NULL) {
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), 
                    v8AtomicString(info.GetIsolate(), strVal->getCString()));
    } else if (dictVal != NULL) {
        RefPtr<CCDictionary> ret = adoptRefWillBeNoop(new CCDictionary());
        ret->setCocos2dImpl(dictVal);
        v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), wrapper);
    } else if (arrVal != NULL) {
        RefPtr<CCArray> ret = adoptRefWillBeNoop(new CCArray());
        ret->setCocos2dImpl(arrVal);
        v8::Handle<v8::Value> wrapper = toV8(ret.get(), info.Holder(), info.GetIsolate());
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), wrapper);
    } else if (doubleVal != NULL) {
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), 
                    v8::Number::New(isolate, doubleVal->getValue()));
    } else if (floatVal != NULL) {
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), 
                    v8::Number::New(isolate, floatVal->getValue()));
    } else if (intVal != NULL) {
        object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()), 
                    v8::Number::New(isolate, intVal->getValue()));
    } else if (boolVal != NULL) {
	object->Set(v8AtomicString(info.GetIsolate(), keyStr->getCString()),
                    boolVal->getValue() ? v8::True(isolate): v8::False(isolate));
    } else {
        cocos2d::CCObject* obj = impl->getCocos2dImpl()->objectForKey(keyStr->getCString());
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
        return;
    }
    v8SetReturnValue(info, object);
}

void CCDictionary:: v8ObjectToCCDictionary(v8::Handle<v8::Object>& jsDict, cocos2d::CCDictionary* ccDict)
{
  v8::Handle<v8::Array> names = jsDict->GetOwnPropertyNames();
  for (size_t i=0; i < names->Length(); i++)
  {
     String key = toCoreString(v8::Handle<v8::String>::Cast(names->Get(i)));
     std::string stdKey = key.utf8().data();
     v8::Handle<v8::Value> v8Value = jsDict->Get(names->Get(i));
     
     if(v8Value->IsNumber())
     {
         int tmp = v8::Handle<v8::Number>::Cast(v8Value)->Value();
         ccDict->setObject(cocos2d::CCInteger::create(tmp), stdKey);
     }
     else if(v8Value->IsString())
     {
         String tmp = toCoreString(v8::Handle<v8::String>::Cast(v8Value));
         ccDict->setObject(cocos2d::CCString::create(tmp.utf8().data()), stdKey);
     }
     else if(v8Value->IsArray())
     {
         cocos2d::CCArray* ccArray = cocos2d::CCArray::create();
         v8::Handle<v8::Array> jsArray =v8::Handle<v8::Array>::Cast(v8Value);
         v8ArrayToCCArray(jsArray, ccArray);
         ccDict->setObject(ccArray, stdKey);
     }
     else if(v8Value->IsObject())
     {
         //in recursive way
         v8::Handle<v8::Object> jsDict0 = v8Value->ToObject();
         cocos2d::CCDictionary* ccDict0 = cocos2d::CCDictionary::create();
         v8ObjectToCCDictionary(jsDict0, ccDict0);
         ccDict->setObject(ccDict0, stdKey);
     } else {
         LOGD("CCDictionary: No wrapper for item");
     }
  }

}

void CCDictionary::v8ArrayToCCArray(v8::Handle<v8::Array>& jsArray, cocos2d::CCArray* ccArray) {

    size_t size = jsArray->Length();
    for (size_t i = 0; i < size; i++) {
	    v8::Handle<v8::Value> v8Value = jsArray->Get(i);
        if (v8Value->IsNumber()) {
            int tmp = v8::Handle<v8::Number>::Cast(v8Value)->Value();
            ccArray->addObject(cocos2d::CCInteger::create(tmp));
        } else if (v8Value->IsString()) {
            String tmp = toCoreString(v8::Handle<v8::String>::Cast(v8Value));
            ccArray->addObject(cocos2d::CCString::create(tmp.utf8().data()));
        } else if (v8Value->IsObject()) {
            //Fixme? to CCObject
            
            //SCRIPT_VALUE_WRAPPER(CCObject, item, tmp)
	        //cocos2d::CCObject* obj = tmp->getCocos2dImpl();
            //ccArray->addObject(obj);
        } else {
            LOGD("CCArray: No wrapper for item");
        }
    }
}

PassRefPtrWillBeRawPtr<CCDictionary> CCDictionary::fromJSObj(const ScriptValue& jsObj) {
    cocos2d::CCDictionary* ccDict = cocos2d::CCDictionary::create();
	v8::Handle<v8::Value> v8Value = jsObj.v8Value();
    if (v8Value->IsObject()) {
        v8::Handle<v8::Object> jsDict = v8Value->ToObject();
        v8ObjectToCCDictionary(jsDict, ccDict);
    } 
    else {
        LOGD("CCArray: No wrapper for item");
    }
    PassRefPtrWillBeRawPtr<CCDictionary> retValue = CCDictionary::create();
    retValue->setCocos2dImpl(ccDict);
    return retValue;
}

void CCDictionary::setCocos2dImpl(cocos2d::CCDictionary* impl) {
    if (m_cocos2d_impl != NULL) {
        m_cocos2d_impl->setCrosswalkImpl(NULL);
        m_cocos2d_impl = NULL;
    }
    m_cocos2d_impl = impl;
    impl->retain();
    m_cocos2d_impl->setCrosswalkImpl((CCObject*)this);
}

}
