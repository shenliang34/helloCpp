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
	//DrawNode* drawNode = DrawNode::create();
	//this->addChild(drawNode);
	//drawNode->drawDot(Vec2(100,100),100,Color4F(1,0,0,1));
	////二次贝塞尔

	//Vec2 form = Vec2(200,100);
	//Vec2 to = Vec2(500,100);
	//Vec2 contorl1 = Vec2(300,200);
	//Vec2 contorl2 = Vec2(400,50);
	////drawNode->drawQuadraticBezier(form,contorl1,to,100,Color4F::YELLOW);
	//drawNode->drawCubicBezier(form,contorl1,contorl2,to,10,Color4F::WHITE);
	/*Sprite* sprite = Sprite::create("CloseNormal.png");
	this->addChild(sprite);
	sprite->setPosition(Vec2(100,100));*/
	//auto mySprite = Sprite::create("CloseNormal.png");
	//mySprite->setPosition(100,100);
	//this->addChild(mySprite);
	//// create a few actions.
	//auto jump = JumpBy::create(0.5, Vec2(0, 0), 100, 1);
 //
	//auto rotate = RotateTo::create(2.0f, 10);
 //
	//// create a few callbacks
	//auto callbackJump = CallFunc::create([](){
	//log("Jumped!");
	//});
 //
	//auto callbackRotate = CallFunc::create([](){
	//log("Rotated!");
	//});
 //
	//// create a sequence with the actions and callbacks
	//auto seq = Sequence::create(jump, callbackJump, rotate, callbackRotate, nullptr);
 //
	//// run it
	//mySprite->runAction(seq);
	
	auto sprite = Sprite::create("CloseNormal.png");
	sprite->setPosition(100,100);
	this->addChild(sprite);
	//auto lable = Label::createWithSystemFont(
	//触摸事件
	/*auto listener1 = EventListenerTouchOneByOne::create();
	listener1->onTouchBegan = [](Touch *touch,Event *event)
	{
		CCLog("touchBegan");
		return true;
	};
	listener1->onTouchMoved = [](Touch *touch,Event *event)
	{
		CCLog("onTouchMoved");
		
	};
	listener1->onTouchEnded = [](Touch *touch,Event *event)
	{
		CCLog("onTouchEnded");
		
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener1,this);*/
	//键盘事件
	/*auto keyboardListener = EventListenerKeyboard::create();
	keyboardListener->onKeyPressed = CC_CALLBACK_2(MyScene::onKeyPressed, this);
    keyboardListener->onKeyReleased = CC_CALLBACK_2(MyScene::onKeyReleased, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(keyboardListener,this);*/
	//连续动画
	/*auto moveTo = MoveTo::create(2,Vec2(200,100));
	auto callBackMoveTo = CallFunc::create([](){
		CCLog("callBackMoveTo");
	});
	auto callBackMoveBy = CallFunc::create([](){
		CCLog("callBackMoveBy");
	});
	auto callBackJumpTo = CallFunc::create([](){
		CCLog("callBackJumpTo");
	});
	auto callBackJumpBy = CallFunc::create([](){
		CCLog("callBackJumpBy");
	});
	auto moveBy = MoveBy::create(2,Vec2(200,100));
	auto jumpTo = JumpTo::create(2,Vec2(200,100),20,5);
	auto jumpBy = JumpBy::create(2,Vec2(200,100),20,5);
	auto seq = Sequence::create(moveTo,callBackMoveTo,moveBy,callBackMoveBy,jumpTo,callBackJumpTo,jumpBy,callBackJumpBy, nullptr);
	sprite->runAction(seq);*/

	MyScene::test();
	cout = 1;
	scheduleUpdate();
	/*auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(MyScene::onTouchBegan,this);*/
}
//void MyScene::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
//{
//    log("Box2dView:onKeyPressed, keycode: %d", keyCode);
//    //m_test->Keyboard(static_cast<unsigned char>(code));
//}
//
//void MyScene::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
//{
//    log("onKeyReleased, keycode: %d", keyCode);
//    //m_test->KeyboardUp(static_cast<unsigned char>(code));
//}
void MyScene::update(float dt)
{
	/*cout ++;
	drawNode->setPosition(Vec2(250+cout,300));
	CCLog("cout>>>>%d",cout);
	if(cout>=100)
	{
		CCLog("移除update");
		unscheduleUpdate();
	}*/
}
bool MyScene::test()
{
	CCLog("test");
	DrawNode *drawNode = DrawNode::create();
	this->addChild(drawNode);
	int width = 50;
	int radius = 10;
	for (int i = 0; i < 10; i++)
	{
		drawNode->drawDot(Vec2(width*(i%5),(i/5)*width),radius,Color4F::WHITE);
	}
	drawNode->setPosition(Vec2(250,300));
	return true;
}
MyScene::MyScene(void)
{
}


MyScene::~MyScene(void)
{
}
