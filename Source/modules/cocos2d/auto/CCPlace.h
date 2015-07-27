// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCPlace_h__
#define __CCPlace_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCPlace;
}

namespace blink {

class CCPlace 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCPlace> create();
    
    bool initWithPosition(CCPoint* arg0);
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCPoint* arg0);
    cocos2d::CCPlace* getCocos2dImpl();
    ~CCPlace();
public:
    CCPlace ();
};

DEFINE_TYPE_CASTS(CCPlace, CCActionInstant, pCCPlace, true, true);

} // namespace blink

#endif
