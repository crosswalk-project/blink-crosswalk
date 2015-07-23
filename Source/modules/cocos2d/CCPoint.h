// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCPoint_h
#define CCPoint_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCPoint : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCPoint> create()
    {
        RefPtrWillBeRawPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        return ret.release();
    }

    static PassRefPtrWillBeRawPtr<CCPoint> create(float x, float y)
    {
        RefPtrWillBeRawPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint(x, y));
        return ret.release();
    }

    ~CCPoint();

    void setX(float x) {
        m_cocos2d_impl->x = x;
    }

    void setY(float y) {
        m_cocos2d_impl->y = y;
    }

    float x() {return m_cocos2d_impl->x;}
    float y() {return m_cocos2d_impl->y;}

    cocos2d::CCPoint* getCocos2dImpl() {return (cocos2d::CCPoint*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCPoint* impl) {
        if (m_cocos2d_impl != NULL) {
            delete m_cocos2d_impl;
            m_cocos2d_impl = NULL;
        }
        m_cocos2d_impl = impl;
    }
    void setCocos2dImpl(const cocos2d::CCPoint& impl) {
        if (m_cocos2d_impl != NULL) {
            delete m_cocos2d_impl;
            m_cocos2d_impl = NULL;
        }
        m_cocos2d_impl = new cocos2d::CCPoint(impl);
    }

protected:
    cocos2d::CCPoint* m_cocos2d_impl;

public:
    CCPoint();
    CCPoint(float x, float y);
};

DEFINE_TYPE_CASTS(CCPoint, CCObject, pCCPoint, true, true);

}

#endif // CCAction_h
