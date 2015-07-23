// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXLayer_h__
#define __CCTMXLayer_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXLayer;
}

namespace blink {

class CCTMXLayer 
		:public CCSpriteBatchNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXLayer> create();
    
    void addChild(ScriptValue& arg0, int arg1, int arg2);
    unsigned int getTileGIDAt(CCPoint* arg0, PassRefPtr<Uint8Array> arg1);
    unsigned int getTileGIDAt(CCPoint* arg0);
    
    PassRefPtrWillBeRawPtr<CCPoint> getPositionAt(CCPoint* arg0);
    
    void setLayerOrientation(unsigned int arg0);
    
    void releaseMap();
    
    void setTiles(PassRefPtr<Uint8Array> arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getLayerSize();
    
    void setMapTileSize(CCSize* arg0);
    
    unsigned int getLayerOrientation();
    
    void setProperties(CCDictionary* arg0);
    
    void setLayerName(String arg0);
    
    void removeTileAt(CCPoint* arg0);
    
    bool initWithTilesetInfo(CCTMXTilesetInfo* arg0, CCTMXLayerInfo* arg1, ScriptValue& arg2);
    
    void setupTiles();
    
    PassRefPtrWillBeRawPtr<CCSize> getMapTileSize();
    
    ScriptValue getProperty(ScriptState* scriptState, String arg0);
    
    void setLayerSize(CCSize* arg0);
    
    String getLayerName();
    
    void setTileSet(CCTMXTilesetInfo* arg0);
    
    void removeChild(ScriptValue& arg0, bool arg1);
    
    ScriptValue getTileSet(ScriptState* scriptState);
    
    ScriptValue getProperties(ScriptState* scriptState);
    
    ScriptValue getTileAt(ScriptState* scriptState, CCPoint* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState, CCTMXTilesetInfo* arg0, CCTMXLayerInfo* arg1, ScriptValue& arg2);
    cocos2d::CCTMXLayer* getCocos2dImpl();
    ~CCTMXLayer();
public:
    CCTMXLayer ();
};

DEFINE_TYPE_CASTS(CCTMXLayer, CCSpriteBatchNode, pCCTMXLayer, true, true);

} // namespace blink

#endif
