// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __PageView_h__
#define __PageView_h__

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"


#include "modules/cocos2d/cocos2d_class.hpp"
namespace cocos2d {
    namespace extension {
        class PageView;
    }
}

namespace blink {

class PageView 
		:public Layout
{
    DEFINE_WRAPPERTYPEINFO();
public:
    void trace(Visitor*) {}
    static PassRefPtrWillBeRawPtr<PageView> create();
    
    int getLayoutType();
    
    int getCurPageIndex();
    
    void addWidgetToPage(Widget* arg0, int arg1, bool arg2);
    
    ScriptValue getPage(ScriptState* scriptState, int arg0);
    
    void removePage(Layout* arg0);
    
    String getDescription();
    
    void insertPage(Layout* arg0, int arg1);
    
    void setLayoutType(int arg0);
    
    void scrollToPage(int arg0);
    
    void update(float arg0);
    
    void removePageAtIndex(int arg0);
    
    ScriptValue getPages(ScriptState* scriptState);
    
    void removeAllPages();
    
    void addPage(Layout* arg0);
    
    static ScriptValue createInternal(ScriptState* scriptState);
    cocos2d::gui::PageView* getCocos2dImpl();
    ~PageView();
public:
    PageView ();
};

DEFINE_TYPE_CASTS(PageView, Layout, pPageView, true, true);

} // namespace blink

#endif
