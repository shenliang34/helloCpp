#pragma once
#include "cocos2d.h"
class MyScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene *createScene();;
	virtual bool init();
	CREATE_FUNC(MyScene);
};

