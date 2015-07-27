// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCSpriteFrameCache_h__
#define __CCSpriteFrameCache_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCSpriteFrameCache;
}

namespace blink {

class CCSpriteFrameCache : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCSpriteFrameCache> create();
    void addSpriteFrames(String arg0, String arg1);
    void addSpriteFrames(String arg0);
    void addSpriteFrames(String arg0, CCTexture2D* arg1);
    
    void addSpriteFrame(ScriptValue& arg0, String arg1);
    
    void removeUnusedSpriteFrames();
    
    ScriptValue getSpriteFrame(ScriptState* scriptState, String arg0);
    
    void removeSpriteFramesFromFile(String arg0);
    
    bool init();
    
    void removeSpriteFrames();
    
    void removeSpriteFramesFromTexture(CCTexture2D* arg0);
    
    void removeSpriteFrameByName(String arg0);
    
    static void purgeSharedSpriteFrameCache();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::CCSpriteFrameCache* getCocos2dImpl();
    ~CCSpriteFrameCache();
public:
    CCSpriteFrameCache ();
};

DEFINE_TYPE_CASTS(CCSpriteFrameCache, CCObject, pCCSpriteFrameCache, true, true);

} // namespace blink

#endif
