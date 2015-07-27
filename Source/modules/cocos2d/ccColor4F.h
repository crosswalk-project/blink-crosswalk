// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ccColor4F_h
#define ccColor4F_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class ccColor4F : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<ccColor4F> create()
    {
        RefPtrWillBeRawPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        return ret.release();
    }

    static PassRefPtrWillBeRawPtr<ccColor4F> create(float r, float g, float b, float a)
    {
        RefPtrWillBeRawPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F(r, g, b, a));
        return ret.release();
    }

    void setR(float r) {m_cocos2d_impl->r = r;}
    void setG(float g) {m_cocos2d_impl->g = g;}
    void setB(float b) {m_cocos2d_impl->b = b;}
    void setA(float a) {m_cocos2d_impl->a = a;}

    int r() {return m_cocos2d_impl->r;}
    int g() {return m_cocos2d_impl->g;}
    int b() {return m_cocos2d_impl->b;}
    int a() {return m_cocos2d_impl->a;}

    ~ccColor4F();

    cocos2d::ccColor4F* getCocos2dImpl() {return (cocos2d::ccColor4F*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::ccColor4F* impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
	m_cocos2d_impl = impl;
    }
    void setCocos2dImpl(cocos2d::ccColor4F impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
	m_cocos2d_impl = new cocos2d::ccColor4F(impl);
    }

protected:
    cocos2d::ccColor4F* m_cocos2d_impl;

public:
    ccColor4F();
    ccColor4F(float r, float g, float b, float a);
};

DEFINE_TYPE_CASTS(ccColor4F, CCObject, pccColor4F, true, true);

}

#endif // CCAction_h
