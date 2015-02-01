//
//  MyControlButton.cpp
//  rz_Zom
//
//  Created by ly on 14-12-13.
//
//

#include "MyControlButton.h"

MyControlButton* MyControlButton::create(Node* label, cocos2d::ui::Scale9Sprite* backgroundSprite)
{
    if (label == NULL) {
        label = Label::create();
        
    }
    MyControlButton *pRet = new (std::nothrow) MyControlButton();
    pRet->initWithLabelAndBackgroundSprite(label, backgroundSprite);
    pRet->autorelease();
    return pRet;
}
void MyControlButton::setBtnTouchRect(cocos2d::Rect touchRect){
    this->rect = touchRect;
    
//    LayerColor *layer = CCLayerColor::create();
//    layer->setColor(Color3B(255, 0, 0));
//    layer->setOpacity(50);
//    addChild(layer);
//    layer->setPosition(Vec2(touchRect.origin.x, touchRect.origin.y));
//    layer->setContentSize(touchRect.size);
//    layer->setAnchorPoint(Vec2(0.5f, 0.5f));
    
    
//    this->setAnchorPoint(Vec2(0.5,0.5));
//    this->setContentSize(touchRect.size);
}

bool MyControlButton::onTouchBegan(Touch *pTouch, Event *event)
{
    Vec2 touchLocation = pTouch->getLocation(); // Get the touch position
//    touchLocation = this->getParent()->convertToNodeSpace(touchLocation);
    touchLocation = Director::getInstance()->convertToUI(touchLocation);
    
    if(rect.size.width&&rect.size.height){
        if(rect.containsPoint(touchLocation)) {
//            CCLOG("wid is %f, hei is %f",rect.size.width,rect.size.height);
//            CCLOG("button out of visible rect, ignore touch event...");
            return false;
        }
    }
    
    if (!isTouchInside(pTouch) || !isEnabled() || !isVisible() || !hasVisibleParents() )
    {
//        CCLOG("is touch inside");
        return false;
    }
    
    for (Node *c = this->_parent; c != NULL; c = c->getParent())
    {
        if (c->isVisible() == false)
        {
            return false;
        }
    }
    
    _isPushed = true;
    this->setHighlighted(true);
    sendActionsForControlEvents(EventType::TOUCH_DOWN);
    
    return true;
}
void MyControlButton::onTouchEnded(Touch *pTouch, Event *pEvent)
{
    _isPushed = false;
    setHighlighted(false);
    if (isTouchInside(pTouch))
    {
        sendActionsForControlEvents(Control::EventType::TOUCH_UP_INSIDE);
    }
    else
    {
        sendActionsForControlEvents(Control::EventType::TOUCH_UP_OUTSIDE);
    }
}


void MyControlButton::setBlendFunc(){
    BlendFunc blend = {GL_SRC_ALPHA , GL_ONE};
    
    _bgSprite = ui::Scale9Sprite::createWithSpriteFrame(getBackgroundSprite()->getSprite()->getSpriteFrame());
    for (Node *  child : _bgSprite->_protectedChildren) {
        ((Sprite*)child)->setBlendFunc(blend);
    }
    setBackgroundSpriteForState(_bgSprite, Control::State::HIGH_LIGHTED);
}

