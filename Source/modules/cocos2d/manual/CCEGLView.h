// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __CCEGLView_h__
#define __CCEGLView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    class CCEGLView;
}

namespace blink {

class CCEGLView 
		:public CCEGLViewProtocol
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<CCEGLView> create();
    
    void setIMEKeyboardState(bool arg0);
    
    bool isOpenGLReady();
    
    static PassRefPtrWillBeRawPtr<CCEGLView> getInstance();
    cocos2d::CCEGLView* getCocos2dImpl();
    ~CCEGLView();
public:
    CCEGLView ();
};

DEFINE_TYPE_CASTS(CCEGLView, CCEGLViewProtocol, pCCEGLView, true, true);

} // namespace blink

#endif
