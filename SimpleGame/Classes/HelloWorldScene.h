#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
using namespace cocos2d;

class HelloWorld : public cocos2d::Layer
{
private:
    Sprite* _player;
    
    
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    bool onContactBegan(PhysicsContact &contact);
    
    bool onTouchBegan(Touch * touch, Event * unused_event);
    
    void addMonster(float dt);
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
