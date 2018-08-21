//唯一的工厂，可以生产两种型号的处理器核，在内部判断 
//工厂模式：
//定义一个用于创建对象的接口，让子类决定实例化哪个类
//使类的实例化延迟到子类

//缺点：每增加一种产品就需要增加一个对象的工厂
//相对于简单工厂模式，工厂模式需要更多的类定义；

#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "SingleCoreA.hpp"
#include "SingleCoreB.hpp"
#include "SingleCore.h"

enum CTYPE
{
	COREA, 
	COREB
};

class Factory  
{  
public:   
	virtual SingleCore* CreateSingleCore() = 0;
};  
#endif