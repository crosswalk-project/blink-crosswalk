// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __RelativeLayoutParameter_h__
#define __RelativeLayoutParameter_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class RelativeLayoutParameter;
    }
}

namespace blink {

class RelativeLayoutParameter 
		:public LayoutParameter
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<RelativeLayoutParameter> create();
    
    void setAlign(int arg0);
    
    void setRelativeToWidgetName(String arg0);
    
    String getRelativeName();
    
    String getRelativeToWidgetName();
    
    void setRelativeName(String arg0);
    
    int getAlign();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::RelativeLayoutParameter* getCocos2dImpl();
    ~RelativeLayoutParameter();
public:
    RelativeLayoutParameter ();
};

DEFINE_TYPE_CASTS(RelativeLayoutParameter, LayoutParameter, pRelativeLayoutParameter, true, true);

} // namespace blink

#endif
