//
//  MyControlButton.h
//  rz_Zom
//
//  Created by ly on 14-12-13.
//
//

#ifndef __rz_Zom__MyControlButton__
#define __rz_Zom__MyControlButton__

#include "cocos2d.h"
#include <cocos-ext.h>
#include "cocostudio/CocoStudio.h"
#include "cocostudio/CCInputDelegate.h"
//#include "MyScrollView.h"
using namespace cocos2d;
using namespace extension;
//
class  MyControlButton : public ControlButton,public cocostudio::InputDelegate{
public:
//    MyScrollView *scView;
    ScrollView *scView;
public:
    static MyControlButton* create(Node* label, cocos2d::ui::Scale9Sprite* backgroundSprite);
    
//    CREATE_FUNC(MyControlButton);
//    void setTouchPriority(int priority) override;
    void setBtnTouchRect(cocos2d::Rect touchRect);
    cocos2d::Rect rect;
    
//    virtual bool isTouchInside(Touch * touch);
    
    virtual bool onTouchBegan(Touch *touch, Event *event) override;
    virtual void onTouchEnded(Touch * touch,Event * event) override;
    virtual void setBlendFunc();
protected:
    ui::Scale9Sprite * _bgSprite;
//    virtual void onTouchMoved(Touch *touch, Event *event) override;
//    virtual void onTouchEnded(Touch *touch, Event *event) override;
//    virtual void onTouchCancelled(Touch *touch, Event *event) override;
   
};
#endif /* defined(__rz_Zom__MyControlButton__) */
