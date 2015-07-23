// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXMapInfo_h__
#define __CCTMXMapInfo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXMapInfo;
}

namespace blink {

class CCTMXMapInfo : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXMapInfo> create();
    
    ScriptValue getTileProperties(ScriptState* scriptState);
    
    void setObjectGroups(CCArray* arg0);
    
    void setTileSize(CCSize* arg0);
    
    bool initWithTMXFile(String arg0);
    
    void setTMXFileName(String arg0);
    
    void setLayers(CCArray* arg0);
    
    void setStoringCharacters(bool arg0);
    
    bool getStoringCharacters();
    
    int getParentElement();
    
    int getLayerAttribs();
    
    ScriptValue getLayers(ScriptState* scriptState);
    
    ScriptValue getTilesets(ScriptState* scriptState);
    
    unsigned int getParentGID();
    
    void setParentElement(int arg0);
    
    void setProperties(CCDictionary* arg0);
    
    void setParentGID(unsigned int arg0);
    
    bool parseXMLString(String arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getTileSize();
    
    ScriptValue getObjectGroups(ScriptState* scriptState);
    
    void setLayerAttribs(int arg0);
    
    String getTMXFileName();
    
    void setCurrentString(String arg0);
    
    bool initWithXML(String arg0, String arg1);
    
    void setTileProperties(CCDictionary* arg0);
    
    void setMapSize(CCSize* arg0);
    
    bool parseXMLFile(String arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getMapSize();
    
    void setTilesets(CCArray* arg0);
    
    ScriptValue getProperties(ScriptState* scriptState);
    
    String getCurrentString();
    
    static ScriptValue formatWithTMXFile(ScriptState* scriptState, String arg0);
    
    static ScriptValue formatWithXML(ScriptState* scriptState, String arg0, String arg1);
    cocos2d::CCTMXMapInfo* getCocos2dImpl();
    ~CCTMXMapInfo();
public:
    CCTMXMapInfo ();
};

DEFINE_TYPE_CASTS(CCTMXMapInfo, CCObject, pCCTMXMapInfo, true, true);

} // namespace blink

#endif
