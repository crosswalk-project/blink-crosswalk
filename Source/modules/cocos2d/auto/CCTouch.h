// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCTouch_h__
#define __CCTouch_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCTouch;
}

namespace blink {

class CCTouch : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCTouch> create();
    
    PassRefPtrWillBeRawPtr<CCPoint> getPreviousLocationInView();
    
    PassRefPtrWillBeRawPtr<CCPoint> getLocation();
    
    PassRefPtrWillBeRawPtr<CCPoint> getDelta();
    
    PassRefPtrWillBeRawPtr<CCPoint> getStartLocationInView();
    
    PassRefPtrWillBeRawPtr<CCPoint> getStartLocation();
    
    int getId();
    
    void setTouchInfo(int arg0, float arg1, float arg2);
    
    PassRefPtrWillBeRawPtr<CCPoint> getLocationInView();
    
    PassRefPtrWillBeRawPtr<CCPoint> getPreviousLocation();
    cocos2d::CCTouch* getCocos2dImpl();
    ~CCTouch();
public:
    CCTouch ();
};

DEFINE_TYPE_CASTS(CCTouch, CCObject, pCCTouch, true, true);

} // namespace blink

#endif
