#include "PlayMusic.h"
USING_NS_CC;

PlayMusic::PlayMusic(void)
{
}
Scene *PlayMusic::createScene()
{
	auto scene = Scene::create();
	auto layer = Layer::create();
	scene->addChild(layer);
	return scene;
}
bool PlayMusic::init()
{
	if(!Layer::init())
	{
		return false;
	}
	//ControlPotentiometer* potent =  ControlPo
	return true;
}
PlayMusic::~PlayMusic(void)
{
}
