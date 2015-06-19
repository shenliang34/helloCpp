#include "MySound.h"

USING_NS_CC;

MySound::MySound(void)
{
}
Scene* MySound::createScene()
{
	auto scene = Scene::create();
	auto layer = MySound::create();
	scene->addChild(layer);
	return scene;
}
bool MySound::init()
{
	if(!Layer::init())
	{
		return false;
	}
	bool b = false;
	do
	{
		//²¥·Å±³¾°ÒôÀÖ
		//CocosDenshion::SimpleAudioEngine::sharedEngine()->playBackgroundMusic("sound.mp3",true);
		//²¥·ÅÒôÐ§
		//CocosDenshion::SimpleAudioEngine::sharedEngine()->playEffect("attack.wav",true);
		b = true;
	} while (false);
	return true;
}

MySound::~MySound(void)
{
}
