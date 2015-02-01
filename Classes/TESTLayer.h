//
// TESTLayer.h
// TestKTPlay
//
// Created by ly on 15-1-26.
//
//

#ifndef __TestKTPlay__TESTLayer__
#define __TestKTPlay__TESTLayer__

#include "cocos2d.h"
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

class TESTLayer : public Layer
{
public:
    TESTLayer();
    ~TESTLayer();
    static Scene* createScene();
    virtual bool init();
    CREATE_FUNC(TESTLayer);
    
private:
    void initData();
};

#endif /* defined(__TestKTPlay__TESTLayer__) */