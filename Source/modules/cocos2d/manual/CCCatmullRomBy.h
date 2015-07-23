// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCCatmullRomBy_h__
#define __CCCatmullRomBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCCatmullRomBy;
}

namespace blink {

class CCCatmullRomBy 
		:public CCCardinalSplineBy
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCCatmullRomBy> create();
    
    bool initWithDuration(float arg0, CCPointArray* arg1);
    bool initWithDuration(float arg0, const Vector<ScriptValue>& arg1);
    
    cocos2d::CCCatmullRomBy* getCocos2dImpl();
    ~CCCatmullRomBy();
public:
    CCCatmullRomBy ();
};

DEFINE_TYPE_CASTS(CCCatmullRomBy, CCCardinalSplineBy, pCCCatmullRomBy, true, true);

} // namespace blink

#endif
