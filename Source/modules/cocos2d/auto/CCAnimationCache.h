// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCAnimationCache_h__
#define __CCAnimationCache_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCAnimationCache;
}

namespace blink {

class CCAnimationCache : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCAnimationCache> create();
    
    ScriptValue getAnimation(ScriptState* scriptState, String arg0);
    
    void addAnimations(String arg0);
    
    bool init();
    
    void addAnimationsWithDictionary(CCDictionary* arg0, String arg1);
    
    void removeAnimation(String arg0);
    
    void addAnimation(CCAnimation* arg0, String arg1);
    
    static void purgeSharedAnimationCache();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::CCAnimationCache* getCocos2dImpl();
    ~CCAnimationCache();
public:
    CCAnimationCache ();
};

DEFINE_TYPE_CASTS(CCAnimationCache, CCObject, pCCAnimationCache, true, true);

} // namespace blink

#endif
