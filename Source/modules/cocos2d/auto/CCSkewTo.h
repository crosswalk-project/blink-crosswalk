// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSkewTo_h__
#define __CCSkewTo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSkewTo;
}

namespace blink {

class CCSkewTo 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSkewTo> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    void update(float arg0);
    
    bool initWithDuration(float arg0, float arg1, float arg2);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, float arg1, float arg2);
    cocos2d::CCSkewTo* getCocos2dImpl();
    ~CCSkewTo();
public:
    CCSkewTo ();
};

DEFINE_TYPE_CASTS(CCSkewTo, CCActionInterval, pCCSkewTo, true, true);

} // namespace blink

#endif
