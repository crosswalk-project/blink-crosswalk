// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTintBy_h__
#define __CCTintBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTintBy;
}

namespace blink {

class CCTintBy 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTintBy> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);
    
    bool initWithDuration(float arg0, short arg1, short arg2, short arg3);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, float arg0, short arg1, short arg2, short arg3);
    cocos2d::CCTintBy* getCocos2dImpl();
    ~CCTintBy();
public:
    CCTintBy ();
};

DEFINE_TYPE_CASTS(CCTintBy, CCActionInterval, pCCTintBy, true, true);

} // namespace blink

#endif
