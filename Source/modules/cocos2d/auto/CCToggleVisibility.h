// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCToggleVisibility_h__
#define __CCToggleVisibility_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCToggleVisibility;
}

namespace blink {

class CCToggleVisibility 
		:public CCActionInstant
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCToggleVisibility> create();
    
    void update(float arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCToggleVisibility* getCocos2dImpl();
    ~CCToggleVisibility();
public:
    CCToggleVisibility ();
};

DEFINE_TYPE_CASTS(CCToggleVisibility, CCActionInstant, pCCToggleVisibility, true, true);

} // namespace blink

#endif
