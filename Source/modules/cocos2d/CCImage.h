// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CCImage_h
#define CCImage_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"


namespace blink {

class CCImage : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    static PassRefPtrWillBeRawPtr<CCImage> create()
    {
        return adoptRefWillBeNoop(new CCImage());
    }

    ~CCImage() {};

    cocos2d::CCImage* getCocos2dImpl() {return (cocos2d::CCImage*)(m_cocos2d_impl);}
    void setCocos2dImpl(cocos2d::CCImage* impl) {m_cocos2d_impl = impl;}
    void setCocos2dImpl(cocos2d::CCImage& impl) {}

protected:
    cocos2d::CCImage* m_cocos2d_impl;

public:
    CCImage();
};

DEFINE_TYPE_CASTS(CCImage, CCObject, pCCImage, true, true);

}

#endif // CCImage_h
