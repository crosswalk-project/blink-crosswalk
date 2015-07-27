// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "bindings/core/v8/ExceptionState.h"
#include "core/dom/ExceptionCode.h"
#include "core/cocos2d/cocos2dx/include/cocos2d.h"

#include "modules/cocos2d/cocos2d.hpp"
#include "modules/cocos2d/auto/CCParticleSystem.h"

namespace blink {

    float CCParticleSystem::getStartSizeVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartSizeVar();
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSystem::getTexture(ScriptState* scriptState) {

        cocos2d::CCTexture2D* ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getTexture();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCTexture2D)
        
    }

    bool CCParticleSystem::isFull() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->isFull();
        
        
        return ret_impl;
    }

    ScriptValue CCParticleSystem::getBatchNode(ScriptState* scriptState) {

        cocos2d::CCParticleBatchNode* ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getBatchNode();
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleBatchNode)
        
    }

    PassRefPtrWillBeRawPtr<ccColor4F> CCParticleSystem::getStartColor() {

        const cocos2d::ccColor4F ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartColor();
        
        RefPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    int CCParticleSystem::getPositionType() {

        int ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getPositionType();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setPosVar(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setPosVar( *_arg0);
    }

    float CCParticleSystem::getEndSpin() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndSpin();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setRotatePerSecondVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRotatePerSecondVar((float)(arg0));
    }

    float CCParticleSystem::getStartSpinVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartSpinVar();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getEndSpinVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndSpinVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::stopSystem() {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->stopSystem();
    }

    bool CCParticleSystem::init() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->init();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getEndSizeVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndSizeVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setRotation(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRotation((float)(arg0));
    }

    void CCParticleSystem::setTangentialAccel(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setTangentialAccel((float)(arg0));
    }

    void CCParticleSystem::setScaleY(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setScaleY((float)(arg0));
    }

    void CCParticleSystem::setScaleX(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setScaleX((float)(arg0));
    }

    float CCParticleSystem::getRadialAccel() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getRadialAccel();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartRadius(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartRadius((float)(arg0));
    }

    void CCParticleSystem::setRotatePerSecond(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRotatePerSecond((float)(arg0));
    }

    void CCParticleSystem::setEndSize(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndSize((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCParticleSystem::getGravity() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getGravity();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCParticleSystem::getTangentialAccel() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getTangentialAccel();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setEndRadius(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndRadius((float)(arg0));
    }

    float CCParticleSystem::getAngle() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getAngle();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getSpeed() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getSpeed();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setEndColor(ccColor4F* arg0) {
        cocos2d::ccColor4F* _arg0 = (cocos2d::ccColor4F*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndColor( *_arg0);
    }

    void CCParticleSystem::setStartSpin(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartSpin((float)(arg0));
    }

    void CCParticleSystem::setDuration(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setDuration((float)(arg0));
    }

    bool CCParticleSystem::initWithTotalParticles(unsigned int arg0) {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->initWithTotalParticles((unsigned int)(arg0));
        
        
        return ret_impl;
    }

    void CCParticleSystem::setTexture(CCTexture2D* arg0) {
        cocos2d::CCTexture2D* _arg0 = (cocos2d::CCTexture2D*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setTexture( _arg0);
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCParticleSystem::getPosVar() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getPosVar();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCParticleSystem::updateWithNoTime() {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->updateWithNoTime();
    }

    bool CCParticleSystem::isBlendAdditive() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->isBlendAdditive();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getAngleVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getAngleVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setPositionType(int arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setPositionType((cocos2d::tCCPositionType)(arg0));
    }

    float CCParticleSystem::getEndRadius() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndRadius();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<CCPoint> CCParticleSystem::getSourcePosition() {

        const cocos2d::CCPoint ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getSourcePosition();
        
        RefPtr<CCPoint> ret = adoptRefWillBeNoop(new CCPoint());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    void CCParticleSystem::setLifeVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setLifeVar((float)(arg0));
    }

    void CCParticleSystem::setTotalParticles(unsigned int arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setTotalParticles((unsigned int)(arg0));
    }

    void CCParticleSystem::setEndColorVar(ccColor4F* arg0) {
        cocos2d::ccColor4F* _arg0 = (cocos2d::ccColor4F*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndColorVar( *_arg0);
    }

    unsigned int CCParticleSystem::getAtlasIndex() {

        unsigned int ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getAtlasIndex();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getStartSize() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartSize();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartSpinVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartSpinVar((float)(arg0));
    }

    void CCParticleSystem::resetSystem() {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->resetSystem();
    }

    void CCParticleSystem::setAtlasIndex(unsigned int arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setAtlasIndex((unsigned int)(arg0));
    }

    void CCParticleSystem::setTangentialAccelVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setTangentialAccelVar((float)(arg0));
    }

    void CCParticleSystem::setEndRadiusVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndRadiusVar((float)(arg0));
    }

    bool CCParticleSystem::isActive() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->isActive();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setRadialAccelVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRadialAccelVar((float)(arg0));
    }

    void CCParticleSystem::setStartSize(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartSize((float)(arg0));
    }

    void CCParticleSystem::setSpeed(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setSpeed((float)(arg0));
    }

    float CCParticleSystem::getStartSpin() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartSpin();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getRotatePerSecond() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getRotatePerSecond();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setEmitterMode(int arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEmitterMode((int)(arg0));
    }

    float CCParticleSystem::getDuration() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getDuration();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setSourcePosition(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setSourcePosition( *_arg0);
    }

    float CCParticleSystem::getRadialAccelVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getRadialAccelVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setBlendAdditive(bool arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setBlendAdditive((bool)(arg0));
    }

    void CCParticleSystem::setLife(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setLife((float)(arg0));
    }

    void CCParticleSystem::setAngleVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setAngleVar((float)(arg0));
    }

    void CCParticleSystem::setRotationIsDir(bool arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRotationIsDir((bool)(arg0));
    }

    void CCParticleSystem::setEndSizeVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndSizeVar((float)(arg0));
    }

    void CCParticleSystem::setAngle(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setAngle((float)(arg0));
    }

    void CCParticleSystem::setBatchNode(ScriptValue& arg0_wrapper) {
        SCRIPT_VALUE_WRAPPER(CCParticleBatchNode, arg0_wrapper, arg0);
        cocos2d::CCParticleBatchNode* _arg0 = (cocos2d::CCParticleBatchNode*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setBatchNode( _arg0);
    }

    float CCParticleSystem::getTangentialAccelVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getTangentialAccelVar();
        
        
        return ret_impl;
    }

    int CCParticleSystem::getEmitterMode() {

        int ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEmitterMode();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setEndSpinVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndSpinVar((float)(arg0));
    }

    bool CCParticleSystem::initWithFile(String arg0) {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->initWithFile((char*)(arg0.utf8().data()));
        
        
        return ret_impl;
    }

    float CCParticleSystem::getSpeedVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getSpeedVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartColor(ccColor4F* arg0) {
        cocos2d::ccColor4F* _arg0 = (cocos2d::ccColor4F*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartColor( *_arg0);
    }

    float CCParticleSystem::getRotatePerSecondVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getRotatePerSecondVar();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getEndSize() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndSize();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getLife() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getLife();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setSpeedVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setSpeedVar((float)(arg0));
    }

    void CCParticleSystem::setAutoRemoveOnFinish(bool arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setAutoRemoveOnFinish((bool)(arg0));
    }

    void CCParticleSystem::setGravity(CCPoint* arg0) {
        cocos2d::CCPoint* _arg0 = (cocos2d::CCPoint*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setGravity( *_arg0);
    }

    void CCParticleSystem::postStep() {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->postStep();
    }

    void CCParticleSystem::setEmissionRate(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEmissionRate((float)(arg0));
    }

    PassRefPtrWillBeRawPtr<ccColor4F> CCParticleSystem::getEndColorVar() {

        const cocos2d::ccColor4F ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndColorVar();
        
        RefPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    bool CCParticleSystem::getRotationIsDir() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getRotationIsDir();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setScale(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setScale((float)(arg0));
    }

    float CCParticleSystem::getEmissionRate() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEmissionRate();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor4F> CCParticleSystem::getEndColor() {

        const cocos2d::ccColor4F ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndColor();
        
        RefPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    float CCParticleSystem::getLifeVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getLifeVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartSizeVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartSizeVar((float)(arg0));
    }

    void CCParticleSystem::setOpacityModifyRGB(bool arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setOpacityModifyRGB((bool)(arg0));
    }

    bool CCParticleSystem::addParticle() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->addParticle();
        
        
        return ret_impl;
    }

    bool CCParticleSystem::getOpacityModifyRGB() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getOpacityModifyRGB();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getStartRadius() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartRadius();
        
        
        return ret_impl;
    }

    unsigned int CCParticleSystem::getParticleCount() {

        unsigned int ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getParticleCount();
        
        
        return ret_impl;
    }

    float CCParticleSystem::getStartRadiusVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartRadiusVar();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartColorVar(ccColor4F* arg0) {
        cocos2d::ccColor4F* _arg0 = (cocos2d::ccColor4F*)(arg0->getCocos2dImpl());

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartColorVar( *_arg0);
    }

    void CCParticleSystem::setEndSpin(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setEndSpin((float)(arg0));
    }

    void CCParticleSystem::update(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->update((float)(arg0));
    }

    void CCParticleSystem::setRadialAccel(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setRadialAccel((float)(arg0));
    }

    bool CCParticleSystem::initWithDictionary(CCDictionary* arg0, String arg1) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->initWithDictionary( _arg0, (char*)(arg1.utf8().data()));
        
        
        return ret_impl;
    }

    bool CCParticleSystem::initWithDictionary(CCDictionary* arg0) {
        cocos2d::CCDictionary* _arg0 = (cocos2d::CCDictionary*)(arg0->getCocos2dImpl());

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->initWithDictionary( _arg0);
        
        
        return ret_impl;
    }

    bool CCParticleSystem::isAutoRemoveOnFinish() {

        bool ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->isAutoRemoveOnFinish();
        
        
        return ret_impl;
    }

    unsigned int CCParticleSystem::getTotalParticles() {

        unsigned int ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getTotalParticles();
        
        
        return ret_impl;
    }

    void CCParticleSystem::setStartRadiusVar(float arg0) {

        ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->setStartRadiusVar((float)(arg0));
    }

    float CCParticleSystem::getEndRadiusVar() {

        float ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getEndRadiusVar();
        
        
        return ret_impl;
    }

    PassRefPtrWillBeRawPtr<ccColor4F> CCParticleSystem::getStartColorVar() {

        const cocos2d::ccColor4F ret_impl = ((cocos2d::CCParticleSystem*)m_cocos2d_impl)->getStartColorVar();
        
        RefPtr<ccColor4F> ret = adoptRefWillBeNoop(new ccColor4F());
        ret->setCocos2dImpl(ret_impl);
        return ret.release();
    }

    ScriptValue CCParticleSystem::createInternal(ScriptState* scriptState, String arg0) {

        cocos2d::CCParticleSystem* ret_impl = cocos2d::CCParticleSystem::create((char*)(arg0.utf8().data()));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSystem)
        
    }

    ScriptValue CCParticleSystem::createWithTotalParticles(ScriptState* scriptState, unsigned int arg0) {

        cocos2d::CCParticleSystem* ret_impl = cocos2d::CCParticleSystem::createWithTotalParticles((unsigned int)(arg0));
        if (ret_impl == NULL) { return ScriptValue(); }
        RET_V8_WRAPPER(ret_impl, CCParticleSystem)
        
    }
    cocos2d::CCParticleSystem* CCParticleSystem::getCocos2dImpl() {
        return (cocos2d::CCParticleSystem*)m_cocos2d_impl;
    }


    CCParticleSystem::CCParticleSystem() {
        m_cocos2d_impl = NULL;
    }

    PassRefPtrWillBeRawPtr<CCParticleSystem> CCParticleSystem::create()
    {
        RefPtrWillBeRawPtr<CCParticleSystem> ret = adoptRefWillBeNoop(new CCParticleSystem());
        cocos2d::CCParticleSystem* impl = new cocos2d::CCParticleSystem();
        ret->setCocos2dImpl(impl);
        return ret.release();
    }

    void V8CCParticleSystem::ctorMethodCustom(const v8::FunctionCallbackInfo<v8::Value>& info) {
    }

    CCParticleSystem::~CCParticleSystem() {
    }
} // namespace blink
