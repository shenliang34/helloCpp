#include "MyScene.h"
USING_NS_CC;
Scene* MyScene::createScene()
{
	auto scene = Scene::create();

	auto layer = MyScene::create();

	scene->addChild(layer);
	return scene;
}
bool MyScene::init()
{
	if(!Layer::init())
	{
		return false;
	}
	DrawNode* drawNode = DrawNode::create();
	this->addChild(drawNode);
	drawNode->drawDot(Vec2(100,100),100,Color4F(1,0,0,1));
}
MyScene::MyScene(void)
{
}


MyScene::~MyScene(void)
{
}
