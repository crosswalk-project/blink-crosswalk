// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCAtlasNode.h"

namespace blink {

    void CCAtlasNode::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->setTexture( _arg0);
    }

    void CCAtlasNode::draw() {

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->draw();
    }

    bool CCAtlasNode::initWithTileFile(String arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {

        bool ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->initWithTileFile((char*)(arg0.utf8().data()), (unsigned int)(arg1), (unsigned int)(arg2), (unsigned int)(arg3));
        
        
        return ret_impl;
    }

    void CCAtlasNode::setColor(ccColor3B* arg0) {
        cocos2d::ccColor3B* _arg0 = (cocos2d::ccColor3B*)(arg0->getCocos2dImpl());

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->setColor( *_arg0);
    }

    void CCAtlasNode::setOpacity(unsigned char arg0) {

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->setOpacity((unsigned char)(arg0));
    }

    ScriptValue CCAtlasNode::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    void CCAtlasNode::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    unsigned int CCAtlasNode::getQuadsToDraw() {

        unsigned int ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->getQuadsToDraw();
        
        
        return ret_impl;
    }

    void CCAtlasNode::updateAtlasValues() {

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->updateAtlasValues();
    }

    PassRefPtrWillBeRawPtr<ccColor3B> CCAtlasNode::getColor() {

        const cocos2d::ccColor3B ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->getColor();
        
        RefPtr<ccColor3B> ret = adoptRefWillBeNoop(new ccColor3B());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCAtlasNode::initWithTexture(CCTexture2D* arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->initWithTexture( _arg0, (unsigned int)(arg1), (unsigned int)(arg2), (unsigned int)(arg3));
        
        
        return ret_impl;
    }

    bool CCAtlasNode::isOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->isOpacityModifyRGB();
        
        
        return ret_impl;
    }

    void CCAtlasNode::setQuadsToDraw(unsigned int arg0) {

        ((cocos2d::CCAtlasNode*)m_cocos2d_impl)->setQuadsToDraw((unsigned int)(arg0));
    }

    ScriptValue CCAtlasNode::createInternal(ScriptState* scriptState, String arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {

        cocos2d::CCAtlasNode* ret_impl = cocos2d::CCAtlasNode::create((char*)(arg0.utf8().data()), (unsigned int)(arg1), (unsigned int)(arg2), (unsigned int)(arg3));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCAtlasNode)
        
    }
    cocos2d::CCAtlasNode* CCAtlasNode::getCocos2dImpl() {
        return (cocos2d::CCAtlasNode*)m_cocos2d_impl;
    }


    CCAtlasNode::CCAtlasNode() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCAtlasNode> CCAtlasNode::create()
    {
        RefPtrWillBeRawPtr<CCAtlasNode> ret = adoptRefWillBeNoop(new CCAtlasNode());
        cocos2d::CCAtlasNode* impl = new cocos2d::CCAtlasNode();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }


    CCAtlasNode::~CCAtlasNode() {
    }
} // namespace blink
