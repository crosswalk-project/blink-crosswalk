// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXTiledMap_h__
#define __CCTMXTiledMap_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXTiledMap;
}

namespace blink {

class CCTMXTiledMap 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXTiledMap> create();
    
    void setObjectGroups(CCArray* arg0);
    
    void setTileSize(CCSize* arg0);
    
    void setMapSize(CCSize* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getTileSize();
    
    ScriptValue getPropertiesForGID(ScriptState* scriptState, int arg0);
    
    ScriptValue getObjectGroups(ScriptState* scriptState);
    
    bool initWithXML(String arg0, String arg1);
    
    bool initWithTMXFile(String arg0);
    
    ScriptValue getObjectGroup(ScriptState* scriptState, String arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getMapSize();
    
    ScriptValue getProperties(ScriptState* scriptState);
    
    void setMapOrientation(int arg0);
    
    void setProperties(CCDictionary* arg0);
    
    ScriptValue getLayer(ScriptState* scriptState, String arg0);
    
    int getMapOrientation();
    
    ScriptValue getProperty(ScriptState* scriptState, String arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, String arg0);
    
    static ScriptValue createWithXML(ScriptState* scriptState, String arg0, String arg1);
    cocos2d::CCTMXTiledMap* getCocos2dImpl();
    ~CCTMXTiledMap();
public:
    CCTMXTiledMap ();
};

DEFINE_TYPE_CASTS(CCTMXTiledMap, CCNode, pCCTMXTiledMap, true, true);

} // namespace blink

#endif
