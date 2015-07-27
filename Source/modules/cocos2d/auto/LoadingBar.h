// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __LoadingBar_h__
#define __LoadingBar_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class LoadingBar;
    }
}

namespace blink {

class LoadingBar 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<LoadingBar> create();
    
    void setPercent(int arg0);
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    void ignoreContentAdaptWithSize(bool arg0);
    
    void loadTexture(String arg0, int arg1);
    
    void setDirection(int arg0);
    
    String getDescription();
    
    void setScale9Enabled(bool arg0);
    
    void setCapInsets(CCRect* arg0);
    
    int getDirection();
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    int getPercent();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::LoadingBar* getCocos2dImpl();
    ~LoadingBar();
public:
    LoadingBar ();
};

DEFINE_TYPE_CASTS(LoadingBar, Widget, pLoadingBar, true, true);

} // namespace blink

#endif
