// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCInputDelegate_h__
#define __CCInputDelegate_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class CCInputDelegate;
    }
}

namespace blink {

class CCInputDelegate : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCInputDelegate> create();
    
    bool isAccelerometerEnabled();
    
    void setKeypadEnabled(bool arg0);
    
    int getTouchMode();
    
    void setAccelerometerEnabled(bool arg0);
    
    bool isKeypadEnabled();
    
    bool isTouchEnabled();
    
    void setTouchPriority(int arg0);
    
    int getTouchPriority();
    
    void setTouchEnabled(bool arg0);
    
    void setTouchMode(int arg0);
    cocos2d::extension::CCInputDelegate* getCocos2dImpl();
    ~CCInputDelegate();
public:
    CCInputDelegate ();
};

DEFINE_TYPE_CASTS(CCInputDelegate, CCObject, pCCInputDelegate, true, true);

} // namespace blink

#endif
