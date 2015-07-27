// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef tCCParticle_h
#define tCCParticle_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class tCCParticle : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<tCCParticle> create()
    {
        RefPtrWillBeRawPtr<tCCParticle> ret = adoptRefWillBeNoop(new tCCParticle());
        return ret.release();
    }

    ~tCCParticle() {};

    cocos2d::tCCParticle* getCocos2dImpl() {return (cocos2d::tCCParticle*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::tCCParticle* impl) {m_cocos2d_impl = impl;}
    void setCocos2dImpl(cocos2d::tCCParticle impl) {m_cocos2d_impl = new cocos2d::tCCParticle(impl);}

protected:
    cocos2d::tCCParticle* m_cocos2d_impl;

public:
    tCCParticle();
};

DEFINE_TYPE_CASTS(tCCParticle, CCObject, ptCCParticle, true, true);

}

#endif // CCAction_h
