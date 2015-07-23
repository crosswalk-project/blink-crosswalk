// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCAffineTransform_h
#define CCAffineTransform_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

namespace blink {

class CCAffineTransform : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCAffineTransform> create()
    {
        RefPtrWillBeRawPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform());
        return ret.release();
    }

    static PassRefPtrWillBeRawPtr<CCAffineTransform> create(float a, float b, float c, float d, float tx, float ty)
    {
        RefPtrWillBeRawPtr<CCAffineTransform> ret = adoptRefWillBeNoop(new CCAffineTransform(a, b, c, d, tx, ty));
        return ret.release();
    }

    ~CCAffineTransform();

    float a() {return m_cocos2d_impl->a;}
    float b() {return m_cocos2d_impl->b;}
    float c() {return m_cocos2d_impl->c;}
    float d() {return m_cocos2d_impl->d;}
    float tx() {return m_cocos2d_impl->tx;}
    float ty() {return m_cocos2d_impl->ty;}
    void setA(float a) {m_cocos2d_impl->a = a;}
    void setB(float b) {m_cocos2d_impl->b = b;}
    void setC(float c) {m_cocos2d_impl->c = c;}
    void setD(float d) {m_cocos2d_impl->d = d;}
    void setTx(float tx) {m_cocos2d_impl->tx = tx;}
    void setTy(float ty) {m_cocos2d_impl->ty = ty;}

    cocos2d::CCAffineTransform* getCocos2dImpl() {return (cocos2d::CCAffineTransform*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCAffineTransform* impl) {
        if (m_cocos2d_impl != NULL) {
            delete m_cocos2d_impl;
        }
        m_cocos2d_impl = impl;
    }
    void setCocos2dImpl(cocos2d::CCAffineTransform impl) {
        if (m_cocos2d_impl != NULL) {
            delete m_cocos2d_impl;
        }
        m_cocos2d_impl = new cocos2d::CCAffineTransform(impl);
    }

protected:
    cocos2d::CCAffineTransform* m_cocos2d_impl;

public:
    CCAffineTransform();
    CCAffineTransform(float a, float b, float c, float d, float tx, float ty);
};

DEFINE_TYPE_CASTS(CCAffineTransform, CCObject, pCCAffineTransform, true, true);

}

#endif // CCAction_h
