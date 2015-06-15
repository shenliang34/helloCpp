#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
	DrawNode* drawNode = DrawNode::create();
	this->addChild(drawNode);
	drawNode->clear();
	//圆点 位置 半径 颜色
	drawNode->drawDot(Vec2(50,50),40,Color4F(1,1,1,1));
	//线段
	drawNode->drawSegment(Vec2(100,80),Vec2(150,80),1,Color4F(1,1,1,1));
	//三角形
	drawNode->drawTriangle(Vec2(180,100),Vec2(220,100),Vec2(200,150),Color4F(1,1,1,1));
	//多边形
	Vec2 point[4];
	point[0] = Vec2(300,200);
	point[1] = Vec2(400,200);
	point[2] = Vec2(400,300);
	point[3] = Vec2(300,300);
	//空心将填充设置为透明
	drawNode->drawPolygon(point,4,Color4F(1,1,1,0),1,Color4F(1,0,0,1));

 //   Size visibleSize = Director::getInstance()->getVisibleSize();
 //   Vec2 origin = Director::getInstance()->getVisibleOrigin();

 //   /////////////////////////////
 //   // 2. add a menu item with "X" image, which is clicked to quit the program
 //   //    you may modify it.

 //   // add a "close" icon to exit the progress. it's an autorelease object
 //   auto closeItem = MenuItemImage::create(
 //                                          "CloseNormal.png",
 //                                          "CloseSelected.png",
 //                                          CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
 //   
	//closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
 //                               origin.y + closeItem->getContentSize().height/2));

 //   // create menu, it's an autorelease object
 //   auto menu = Menu::create(closeItem, NULL);
 //   menu->setPosition(Vec2::ZERO);
 //   this->addChild(menu, 1);
 //  auto closeItem1 = MenuItemImage::create(
 //                                          "CloseNormal.png",
 //                                          "CloseSelected.png",
 //                                          CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
 //   
 //   closeItem1->setPosition(Vec2(0 ,
 //                              0));

 //   // create menu, it's an autorelease object
 //   auto menu1 = Menu::create(closeItem1, NULL);
 //   menu1->setPosition(Vec2::ZERO);
 //   this->addChild(menu1, 1);

 //   /////////////////////////////
 //   // 3. add your codes below...

 //   // add a label shows "Hello World"
 //   // create and initialize a label
 //   
 //   auto label = LabelTTF::create("Hello World SLL HelloWorld\n 1212121", "Arial", 24);
 //   
 //   // position the label on the center of the screen
 //   label->setPosition(Vec2(origin.x + visibleSize.width/2,
 //                           origin.y + visibleSize.height - label->getContentSize().height));

 //   // add the label as a child to this layer
 //   this->addChild(label, 1);

 //   // add "HelloWorld" splash screen"
 //   auto sprite = Sprite::create("HelloWorld.png");

 //   // position the sprite on the center of the screen
 //   sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

 //   // add the sprite as a child to this layer
 //   this->addChild(sprite, 0);
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
