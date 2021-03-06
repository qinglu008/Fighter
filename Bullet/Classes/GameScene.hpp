//
//  GameScene.hpp
//  Bullet
//
//  Created by zason on 7/1/16.
//
//

#ifndef GameScene_hpp
#define GameScene_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "Player.hpp"

class GameScene : public cocos2d::Layer
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(GameScene);
    
    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
    
    void menuCloseCallback(cocos2d::Ref* pSender);
    void startStep(float dt);
    void startGame();
    
    static GameScene* pInstance;
    
    static void onUpdatePosition(float x, float y);
    
private:
    
    int countDown;

    Player *playerA; // 玩家A飞机
    Player *playerB; // 玩家B飞机
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
    GameScene();
    void loadPlayer();
    void loadBackground();
    cocos2d::Vec2 limitPosition(cocos2d::Vec2 newPos);
    
};

#endif /* GameScene_hpp */
