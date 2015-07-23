// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCApplication_h__
#define __CCApplication_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"

#include "modules/cocos2d/cocos2d_class.hpp"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

namespace cocos2d {
    class CCApplication;
}

namespace blink {

class CCApplication : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCApplication> create()
    {
        RefPtrWillBeRawPtr<CCApplication> ret = adoptRefWillBeNoop(new CCApplication());
        return ret.release();
    }
        
    void setAnimationInterval(double arg0);
    String getTargetPlatform() {return "Crosswalk";}
    CCApplication* getInstance();
    ~CCApplication() {}

protected:
public:
    CCApplication ();
};

DEFINE_TYPE_CASTS(CCApplication, CCObject, pCCApplication, true, true);

}

#endif
