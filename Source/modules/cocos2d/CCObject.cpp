// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"
#include "modules/cocos2d/CCObject.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "modules/cocos2d/cocos2d.hpp"

long blink::CCObject::s_count = 0;
namespace blink {

    CCObject::CCObject()
    {
        m_cocos2d_impl = NULL;
    }

    void CCObject::retain() {
        if (m_cocos2d_impl != NULL) {
            m_cocos2d_impl->retain();
        }
    }

    void CCObject::release() {
        if (m_cocos2d_impl != NULL) {
            m_cocos2d_impl->release();
        }
    }

    ScriptValue CCObject::copy(ScriptState* scriptState) {
        cocos2d::CCObject* ret_impl = ((cocos2d::CCObject*)m_cocos2d_impl)->copy();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCObject)
    }

    
   ScriptValue CCObject:: clone(ScriptState* scriptState){
       return copy(scriptState);
    }

    void CCObject::setCocos2dImpl(cocos2d::CCObject* impl) {
        if (m_cocos2d_impl != NULL) {
            m_cocos2d_impl->setCrosswalkImpl(NULL);
        }
        m_cocos2d_impl = impl;
        if (m_cocos2d_impl != NULL) {
            m_cocos2d_impl->retain();
            if (m_cocos2d_impl->getCrosswalkImpl() == NULL) {
                m_cocos2d_impl->setCrosswalkImpl((CCObject*)this);
            } else {
                m_cocos2d_impl->setCrosswalkImpl(NULL);
                m_cocos2d_impl->setCrosswalkImpl((CCObject*)this);
            }
        }
    }

    cocos2d::CCObject* CCObject::getCocos2dImpl() {
        return (cocos2d::CCObject*)m_cocos2d_impl;
    }

    CCObject::~CCObject() {
        if (m_cocos2d_impl != NULL) {
            if (m_cocos2d_impl->getCrosswalkImpl() == this) {
                m_cocos2d_impl->setCrosswalkImpl(NULL);
            } else {
                m_cocos2d_impl->release();
            }
            m_cocos2d_impl = NULL;
        }
    }

    long CCObject::instanceId() {
        if (m_cocos2d_impl != NULL) {
            return m_cocos2d_impl->m_uID;
        }
        return 0;
    }

    void CCObject::autorelease() {
        if (m_cocos2d_impl != NULL) {
            m_cocos2d_impl->autorelease();
        }
    }
}
