// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCCardinalSplineTo_h__
#define __CCCardinalSplineTo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCCardinalSplineTo;
    class CCPointArray;
}

namespace blink {

class CCCardinalSplineTo 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCCardinalSplineTo> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    bool initWithDuration(float arg0, const Vector<ScriptValue>& arg1, float arg2);
    
    ScriptValue getPoints(ScriptState* scriptState);
    
    void update(float arg0);
    
    void updatePosition(CCPoint* arg0);
    cocos2d::CCCardinalSplineTo* getCocos2dImpl();

    static void jsArrayToCCPointArray(const Vector<ScriptValue>& frames, cocos2d::CCPointArray* pointsArray);

    ~CCCardinalSplineTo();
public:
    CCCardinalSplineTo ();
};

DEFINE_TYPE_CASTS(CCCardinalSplineTo, CCActionInterval, pCCCardinalSplineTo, true, true);

} // namespace blink

#endif
