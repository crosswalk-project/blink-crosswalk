// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCBezierBy_h__
#define __CCBezierBy_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCBezierBy;
}

namespace blink {

class CCBezierBy 
		:public CCActionInterval
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCBezierBy> create();
    
    void startWithTarget(ScriptValue& arg0);
    
    ScriptValue reverse(ScriptState* scriptState);

    void update(float arg0);
    bool initWithDuration(float arg0, const ScriptValue& arg1_wrapper);
    cocos2d::CCBezierBy* getCocos2dImpl();
    ~CCBezierBy();
public:
    CCBezierBy ();
};

DEFINE_TYPE_CASTS(CCBezierBy, CCActionInterval, pCCBezierBy, true, true);

} // namespace blink

#endif
