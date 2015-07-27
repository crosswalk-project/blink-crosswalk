// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTextureCache_h__
#define __CCTextureCache_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTextureCache;
}

namespace blink {

class CCTextureCache : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTextureCache> create();
    
    void dumpCachedTextureInfo();
    
    ScriptValue addUIImage(ScriptState* scriptState, CCImage* arg0, String arg1);
    
    void removeTextureForKey(String arg0);
    
    ScriptValue textureForKey(ScriptState* scriptState, String arg0);
    
    ScriptValue snapshotTextures(ScriptState* scriptState);
    
    ScriptValue addImage(ScriptState* scriptState, String arg0);
    
    void removeAllTextures();
    
    void removeUnusedTextures();
    
    void removeTexture(CCTexture2D* arg0);
    
    static void purgeSharedTextureCache();
    
    static void reloadAllTextures();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::CCTextureCache* getCocos2dImpl();
    ~CCTextureCache();
public:
    CCTextureCache ();
};

DEFINE_TYPE_CASTS(CCTextureCache, CCObject, pCCTextureCache, true, true);

} // namespace blink

#endif
