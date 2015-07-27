// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __ImageView_h__
#define __ImageView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class ImageView;
    }
}

namespace blink {

class ImageView 
		:public Widget
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<ImageView> create();
    
    ScriptValue getVirtualRenderer(ScriptState* scriptState);
    
    void ignoreContentAdaptWithSize(bool arg0);
    
    void loadTexture(String arg0, int arg1);
    
    String getDescription();
    
    void setFlipY(bool arg0);
    
    void setFlipX(bool arg0);
    
    bool isFlipX();
    
    bool isFlipY();
    
    void setScale9Enabled(bool arg0);
    
    void setTextureRect(CCRect* arg0);
    
    void setCapInsets(CCRect* arg0);
    
    PassRefPtrWillBeRawPtr<CCSize> getContentSize();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::ImageView* getCocos2dImpl();
    ~ImageView();
public:
    ImageView ();
};

DEFINE_TYPE_CASTS(ImageView, Widget, pImageView, true, true);

} // namespace blink

#endif
