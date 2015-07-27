// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSet_h__
#define __CCSet_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSet;
}

namespace blink {

class CCSet : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSet> create();
    
    int count();
    
    void addObject(CCObject* arg0);
    
    ScriptValue mutableCopy(ScriptState* scriptState);
    
    ScriptValue anyObject(ScriptState* scriptState);
    
    void removeAllObjects();
    
    void removeObject(CCObject* arg0);
    
    ScriptValue copy(ScriptState* scriptState);
    
    bool containsObject(CCObject* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::CCSet* getCocos2dImpl();
    ~CCSet();
public:
    CCSet ();
};

DEFINE_TYPE_CASTS(CCSet, CCObject, pCCSet, true, true);

} // namespace blink

#endif
