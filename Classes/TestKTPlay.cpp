//
// TestKTPlay.cpp
// TestKTPlay
//
// Created by ly on 15-1-26.
//
//

#include "TestKTPlay.h"
#include "MyControlButton.h"

#if ANDROID
#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#endif

TestKTPlay::TestKTPlay()
{
    
}

TestKTPlay::~TestKTPlay()
{
    
}

Scene* TestKTPlay::createScene()
{
    auto scene = Scene::create();
    auto layer = TestKTPlay::create();
    scene->addChild(layer);
    return scene;
}

bool TestKTPlay::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    initData();
    return true;
}

#pragma mark - initData
void TestKTPlay::initData()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Sprite * bg = Sprite::create("HelloWorld.png");
    this->addChild(bg);
    bg->setPosition(visibleSize.width / 2, visibleSize.height / 2);
    
    
    MyControlButton * login = MyControlButton::create(NULL, ui::Scale9Sprite::create("CloseNormal.png"));
    login->setScale(4);
    login->setPosition(visibleSize.width / 2, visibleSize.height / 2);
    login->addTargetWithActionForControlEvents(this, cccontrol_selector(TestKTPlay::onLoginClick), Control::EventType::TOUCH_UP_INSIDE);
    this->addChild(login);
    
}

void TestKTPlay::onLoginClick(Ref *Handler, Control::EventType m_type){
    CCLOG("ON LOGIN CLICK IN C++");
    
    
#if ANDROID
    cocos2d::JniMethodInfo minfo;
    
    jobject jobj;
    
    if (!cocos2d::JniHelper::getStaticMethodInfo(minfo, "org/cocos2dx/cpp/AppActivity", "LoginFunction", "(I)V"))
        return;
    
    jobj = minfo.env->CallStaticObjectMethod(minfo.classID, minfo.methodID);
    
    if (!cocos2d::JniHelper::getMethodInfo(minfo, "org/cocos2dx/cpp/AppActivity", "LoginFunction", "(I)V"))
        return;
    minfo.env->CallVoidMethod(jobj, minfo.methodID, 1);
#endif
    
}