// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCArmatureDataManager_h__
#define __CCArmatureDataManager_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCArmatureDataManager;
    }
}

namespace blink {

class CCArmatureDataManager : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCArmatureDataManager> create();
    void addArmatureFileInfo(String arg0, String arg1, String arg2);
    void addArmatureFileInfo(String arg0);
    
    void removeArmatureFileInfo(String arg0);
    
    bool init();
    
    bool isAutoLoadSpriteFile();
    
    void addSpriteFrameFromFile(String arg0, String arg1, String arg2);
    
    static void purge();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::extension::CCArmatureDataManager* getCocos2dImpl();
    ~CCArmatureDataManager();
public:
    CCArmatureDataManager ();
};

DEFINE_TYPE_CASTS(CCArmatureDataManager, CCObject, pCCArmatureDataManager, true, true);

} // namespace blink

#endif
