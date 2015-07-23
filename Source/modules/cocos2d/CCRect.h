// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCRect_h
#define CCRect_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/CCSize.h"
#include "modules/cocos2d/CCPoint.h"

namespace blink {

class CCRect : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCRect> create()
    {
        RefPtrWillBeRawPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect());
        return ret.release();
    }

    static PassRefPtrWillBeRawPtr<CCRect> create(float x, float y, float width, float height)
    {
        RefPtrWillBeRawPtr<CCRect> ret = adoptRefWillBeNoop(new CCRect(x, y, width, height));
        return ret.release();
    }

    ~CCRect();

    PassRefPtrWillBeRawPtr<CCPoint> origin() {
        cocos2d::CCPoint p = m_cocos2d_impl->origin;
        return adoptRefWillBeNoop(new CCPoint(p.x, p.y));
    }
    void setOrigin(CCPoint* p) {
        m_cocos2d_impl->origin = *(p->getCocos2dImpl());
    }

    float x() {
        cocos2d::CCPoint p = m_cocos2d_impl->origin;
        return p.x;
    }
    void setX(float x) {
        cocos2d::CCPoint& p = m_cocos2d_impl->origin;
        p.x = x;
    }

    float y() {
        cocos2d::CCPoint p = m_cocos2d_impl->origin;
        return p.y;
    }
    void setY(float y) {
        cocos2d::CCPoint& p = m_cocos2d_impl->origin;
        p.y = y;
    }

    float width() {
        cocos2d::CCSize& s = m_cocos2d_impl->size;
        return s.width;
    }
    void setWidth(float width) {
        cocos2d::CCSize& s = m_cocos2d_impl->size;
        s.width = width;
    }

    float height() {
        cocos2d::CCSize& s = m_cocos2d_impl->size;
        return s.height;
    }
    void setHeight(float height) {
        cocos2d::CCSize& s = m_cocos2d_impl->size;
        s.height = height;
    }

    PassRefPtrWillBeRawPtr<CCSize> size() {
        cocos2d::CCSize s = m_cocos2d_impl->size;
        return adoptRefWillBeNoop(new CCSize(s.width, s.height));
    }
    void setSize(CCSize* s) {
        m_cocos2d_impl->size = *(s->getCocos2dImpl());
    }

    cocos2d::CCRect* getCocos2dImpl() {return (cocos2d::CCRect*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCRect* impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
	m_cocos2d_impl = impl;
    }
    void setCocos2dImpl(cocos2d::CCRect impl) {
        if (m_cocos2d_impl != NULL) {
	    delete m_cocos2d_impl;
        }
	m_cocos2d_impl = new cocos2d::CCRect(impl);
    }

protected:
    cocos2d::CCRect* m_cocos2d_impl;

public:
    CCRect();
    CCRect(float x, float y, float width, float height);
};

DEFINE_TYPE_CASTS(CCRect, CCObject, pCCRect, true, true);

}

#endif // CCAction_h
