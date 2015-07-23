// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCFileUtils_h__
#define __CCFileUtils_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCFileUtils;
}

namespace blink {

class CCFileUtils : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCFileUtils> create();
    
    bool isFileExist(String arg0);
    
    void removeSearchPath(String arg0);
    
    void purgeCachedEntries();
    
    String fullPathFromRelativeFile(String arg0, String arg1);
    
    PassRefPtr<Uint8Array> getFileData(String arg0, String arg1, PassRefPtr<Uint8Array> arg2);
    
    bool isPopupNotify();
    
    void setFilenameLookupDictionary(CCDictionary* arg0);
    
    void addSearchResolutionsOrder(String arg0);
    
    PassRefPtr<Uint8Array> getFileDataFromZip(String arg0, String arg1, PassRefPtr<Uint8Array> arg2);
    
    void removeAllPaths();
    
    String fullPathForFilename(String arg0);
    
    bool isAbsolutePath(String arg0);
    
    String getWritablePath();
    
    void addSearchPath(String arg0);
    
    void setPopupNotify(bool arg0);
    
    void loadFilenameLookup(String arg0);
    
    static void purgeFileUtils();
    
    static ScriptValue getInstance(ScriptState* scriptState);
    cocos2d::CCFileUtils* getCocos2dImpl();
    ~CCFileUtils();
public:
    CCFileUtils ();
};

DEFINE_TYPE_CASTS(CCFileUtils, CCObject, pCCFileUtils, true, true);

} // namespace blink

#endif
