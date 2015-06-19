#pragma once
#include "cocos2d.h";

class PlayMusic:public cocos2d::Layer
{
public:
	PlayMusic(void);
	~PlayMusic(void);
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(PlayMusic);
};

