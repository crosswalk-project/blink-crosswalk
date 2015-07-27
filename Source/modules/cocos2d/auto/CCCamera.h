// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCCamera_h__
#define __CCCamera_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCCamera;
}

namespace blink {

class CCCamera : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCCamera> create();
    
    void locate();
    
    void restore();
    
    void setEye(float arg0, float arg1, float arg2);
    
    void setCenter(float arg0, float arg1, float arg2);
    
    bool isDirty();
    
    void init();
    
    void setDirty(bool arg0);
    
    void setUp(float arg0, float arg1, float arg2);
    
    static float getZEye();
    cocos2d::CCCamera* getCocos2dImpl();
    ~CCCamera();
public:
    CCCamera ();
};

DEFINE_TYPE_CASTS(CCCamera, CCObject, pCCCamera, true, true);

} // namespace blink

#endif
