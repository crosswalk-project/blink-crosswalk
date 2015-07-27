// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEGLViewProtocol_h__
#define __CCEGLViewProtocol_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"
#include "wtf/Vector.h"


#include "modules/cocos2d/cocos2d_class.hpp"

namespace cocos2d {
    class CCEGLViewProtocol;
}

namespace blink {

class CCEGLViewProtocol : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEGLViewProtocol> create();
    
    PassRefPtrWillBeRawPtr<CCPoint> getVisibleOrigin();
    
    PassRefPtrWillBeRawPtr<CCSize> getVisibleSize();
    
    void setDesignResolutionSize(float arg0, float arg1, int arg2);

    void handleTouchesBegin(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys);
    void handleTouchesMove(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys);
    void handleTouchesEnd(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys);
    void handleTouchesCancel(int num, Vector<int> ids, Vector<float> xs, Vector<float> ys);

    cocos2d::CCEGLViewProtocol* getCocos2dImpl();
    virtual void setCocos2dImpl(cocos2d::CCEGLViewProtocol* impl);
    ~CCEGLViewProtocol();
protected:
    cocos2d::CCEGLViewProtocol* m_cocos2d_impl;
public:
    CCEGLViewProtocol ();
};

DEFINE_TYPE_CASTS(CCEGLViewProtocol, CCObject, pCCEGLViewProtocol, true, true);

} // namespace blink

#endif
