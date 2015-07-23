// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTableViewCell_h__
#define __CCTableViewCell_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCTableViewCell;
    }
}

namespace blink {

class CCTableViewCell 
		:public CCNode
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTableViewCell> create();
    
    void reset();
    
    void setIdx(unsigned int arg0);
    
    void setObjectID(unsigned int arg0);
    
    unsigned int getObjectID();
    
    unsigned int getIdx();
    cocos2d::extension::CCTableViewCell* getCocos2dImpl();
    ~CCTableViewCell();
public:
    CCTableViewCell ();
};

DEFINE_TYPE_CASTS(CCTableViewCell, CCNode, pCCTableViewCell, true, true);

} // namespace blink

#endif
