// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __LayoutParameter_h__
#define __LayoutParameter_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class LayoutParameter;
    }
}

namespace blink {

class LayoutParameter : public CCObject {
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<LayoutParameter> create();
    
    int getLayoutType();
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::LayoutParameter* getCocos2dImpl();
    ~LayoutParameter();
public:
    LayoutParameter ();
};

DEFINE_TYPE_CASTS(LayoutParameter, CCObject, pLayoutParameter, true, true);

} // namespace blink

#endif
