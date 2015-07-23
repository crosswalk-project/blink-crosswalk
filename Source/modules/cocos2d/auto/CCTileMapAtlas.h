// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTileMapAtlas_h__
#define __CCTileMapAtlas_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTileMapAtlas;
}

namespace blink {

class CCTileMapAtlas 
		:public CCAtlasNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTileMapAtlas> create();
    
    bool initWithTileFile(String arg0, String arg1, int arg2, int arg3);
    
    void releaseMap();
    
    PassRefPtrWillBeRawPtr<ccColor3B> getTileAt(CCPoint* arg0);
    
    void setTile(ccColor3B* arg0, CCPoint* arg1);
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0, String arg1, int arg2, int arg3);
    cocos2d::CCTileMapAtlas* getCocos2dImpl();
    ~CCTileMapAtlas();
public:
    CCTileMapAtlas ();
};

DEFINE_TYPE_CASTS(CCTileMapAtlas, CCAtlasNode, pCCTileMapAtlas, true, true);

} // namespace blink

#endif
