// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCBReader_h__
#define __CCBReader_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCBReader;
    }
}

namespace blink {

class CCBReader : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCBReader> create();
    
    ScriptValue getAnimationManager(ScriptState* scriptState);
    
    void setAnimationManager(CCBAnimationManager* arg0);
    
    void addOwnerOutletName(String arg0);
    
    ScriptValue getOwnerCallbackNames(ScriptState* scriptState);
    
    void addDocumentCallbackControlEvents(unsigned int arg0);
    
    void setCCBRootPath(String arg0);
    
    void addOwnerOutletNode(CCNode* arg0);
    
    ScriptValue getOwnerCallbackNodes(ScriptState* scriptState);
    
    bool readSoundKeyframesForSeq(PassRefPtr<Uint8Array> arg0);
    
    String getCCBRootPath();
    
    ScriptValue getOwnerCallbackControlEvents(ScriptState* scriptState);
    
    ScriptValue getOwnerOutletNodes(ScriptState* scriptState);
    
    String readUTF8();
    
    void addOwnerCallbackControlEvents(unsigned int arg0);
    
    ScriptValue getOwnerOutletNames(ScriptState* scriptState);
    
    bool readCallbackKeyframesForSeq(PassRefPtr<Uint8Array> arg0);
    
    ScriptValue getAnimationManagersForNodes(ScriptState* scriptState);
    
    ScriptValue getNodesWithAnimationManagers(ScriptState* scriptState);
    
    static void setResolutionScale(float arg0);
    cocos2d::extension::CCBReader* getCocos2dImpl();
    ~CCBReader();
public:
    CCBReader ();
};

DEFINE_TYPE_CASTS(CCBReader, CCObject, pCCBReader, true, true);

} // namespace blink

#endif
