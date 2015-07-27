// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTMXTilesetInfo_h__
#define __CCTMXTilesetInfo_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTMXTilesetInfo;
}

namespace blink {

class CCTMXTilesetInfo : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTMXTilesetInfo> create();
    
    PassRefPtrWillBeRawPtr<CCRect> rectForGID(unsigned int arg0);
    cocos2d::CCTMXTilesetInfo* getCocos2dImpl();
    ~CCTMXTilesetInfo();
public:
    CCTMXTilesetInfo ();
};

DEFINE_TYPE_CASTS(CCTMXTilesetInfo, CCObject, pCCTMXTilesetInfo, true, true);

} // namespace blink

#endif
