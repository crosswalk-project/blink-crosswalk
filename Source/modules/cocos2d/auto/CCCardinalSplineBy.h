// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCCardinalSplineBy_h__
#define __CCCardinalSplineBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCCardinalSplineBy;
}

namespace blink {

class CCCardinalSplineBy 
		:public CCCardinalSplineTo
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCCardinalSplineBy> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void updatePosition(CCPoint* arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    cocos2d::CCCardinalSplineBy* getCocos2dImpl();
    ~CCCardinalSplineBy();
public:
    CCCardinalSplineBy ();
};

DEFINE_TYPE_CASTS(CCCardinalSplineBy, CCCardinalSplineTo, pCCCardinalSplineBy, true, true);

} // namespace blink

#endif
