#pragma once
#include "cocos2d.h"
class MyScene : public cocos2d::Layer
{
public:
	MyScene(void);
	~MyScene(void);
	static cocos2d::Scene* createScene();
	virtual bool init();
	/*virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);
    virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);*/
	bool test();
	void update(float dt);
	float cout;
	
	CREATE_FUNC(MyScene);
	//Sprite* getSprite();
private:
};

