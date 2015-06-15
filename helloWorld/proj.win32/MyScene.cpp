#include "MyScene.h"
USING_NS_CC;
Scene* MyScene::createScene()
{
	auto scene = Scene::create();

	auto layer = MyScene::create();

	scene->addChild(layer);
	return scene;
}
