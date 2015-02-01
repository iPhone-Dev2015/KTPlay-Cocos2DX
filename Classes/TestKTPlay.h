//
// TestKTPlay.h
// TestKTPlay
//
// Created by ly on 15-1-26.
//
//

#ifndef __TestKTPlay__TestKTPlay__
#define __TestKTPlay__TestKTPlay__

#include "cocos2d.h"
#include "MyControlButton.h"
USING_NS_CC;

/**
 *　　　　　　　  ┏┓　　　 ┏┓+ +
 *　　　　　　　 ┏┛┻━━━━━━┛┻┓ + +
 *　　　　　　　 ┃　　　　　  ┃
 *　　　　　　 　┃　　　━　   ┃ ++ + + +
 *　　　　　　  ████━████   ┃+
 *　　　　　　　 ┃　　　　　　┃ +
 *　　　　　　　 ┃　┻　　　  ┃
 *　　　　　　　 ┃　　　　　 ┃ + +
 *　　　　　　 　┗━┓　　  ┏━┛
 *　　　　　　　　　┃　　　┃
 *　　　　　　　　　┃　　　┃ + + + +
 *　　　　　　　　　┃　　　┃　　　　Code is far away from bug with the animal protecting
 *　　　　　　　　　┃　　　┃ + 　　　　神兽保佑,代码无bug
 *　　　　　　　　　┃　　　┃
 *　　　　　　　　　┃　　　┃　　+
 *　　　　　　　　　┃　 　 ┗━━━┓ + +
 *　　　　　　　　　┃ 　　　　　┣┓
 *　　　　　　　　　┃ 　　　  ┏┛
 *　　　　　　　　 　┗┓┓┏━┳┓┏┛ + + + +
 *　　　　　　　　　　┃┫┫　┃┫┫
 *　　　　　　　　　　┗┻┛　┗┻┛+ + + +
 */

class TestKTPlay : public Layer
{
public:
    TestKTPlay();
    ~TestKTPlay();
    static Scene* createScene();
    virtual bool init();
    CREATE_FUNC(TestKTPlay);
    
    void onLoginClick(Ref *Handler, Control::EventType m_type);
    
private:
    void initData();
};

#endif /* defined(__TestKTPlay__TestKTPlay__) */