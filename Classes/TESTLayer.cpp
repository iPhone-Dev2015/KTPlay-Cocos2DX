//
// TESTLayer.cpp
// TestKTPlay
//
// Created by ly on 15-1-26.
//
//

#include "TESTLayer.h"
TESTLayer::TESTLayer()
{
    
}

TESTLayer::~TESTLayer()
{
    
}

Scene* TESTLayer::createScene()
{
    Scene* scene = Scene::create();
    auto layer = TESTLayer::create();
    scene->addChild(layer);
    return scene;
}

bool TESTLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    initData();
    return true;
}

#pragma mark - initData
void TESTLayer::initData()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}