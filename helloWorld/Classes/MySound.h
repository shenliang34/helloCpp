#pragma once

#include "cocos2d.h";

class MySound :public cocos2d::Layer
{
public:
	MySound(void);
	~MySound(void);
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MySound);
};

