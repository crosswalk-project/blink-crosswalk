// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCSize_h
#define CCSize_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCSize : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCSize> create()
    {
        RefPtrWillBeRawPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize());
        return ret.release();
    }

    static PassRefPtrWillBeRawPtr<CCSize> create(float width, float height)
    {
        RefPtrWillBeRawPtr<CCSize> ret = adoptRefWillBeNoop(new CCSize(width, height));
        return ret.release();
    }

    ~CCSize();

    void setWidth(float width) {m_cocos2d_impl->width = width;}
    float width() {return m_cocos2d_impl->width;}
    void setHeight(float height) {m_cocos2d_impl->height = height;}
    float height() {return m_cocos2d_impl->height;}

    cocos2d::CCSize* getCocos2dImpl() {return (cocos2d::CCSize*)(m_cocos2d_impl);}
    /*void setCocos2dImpl(cocos2d::CCSize* impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
	m_cocos2d_impl = impl;
	}*/
    void setCocos2dImpl(const cocos2d::CCSize& impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
        m_cocos2d_impl = new cocos2d::CCSize(impl);
    }

protected:
    cocos2d::CCSize* m_cocos2d_impl;

public:
    CCSize();
    CCSize(float width, float height);
};

DEFINE_TYPE_CASTS(CCSize, CCObject, pCCSize, true, true);

}

#endif // CCAction_h
