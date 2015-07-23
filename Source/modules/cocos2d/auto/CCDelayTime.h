// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCDelayTime_h__
#define __CCDelayTime_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCDelayTime;
}

namespace blink {

class CCDelayTime 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCDelayTime> create();
    
    void update(float arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0);
    cocos2d::CCDelayTime* getCocos2dImpl();
    ~CCDelayTime();
public:
    CCDelayTime ();
};

DEFINE_TYPE_CASTS(CCDelayTime, CCActionInterval, pCCDelayTime, true, true);

} // namespace blink

#endif
