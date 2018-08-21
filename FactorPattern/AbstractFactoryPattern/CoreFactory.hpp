//https://blog.csdn.net/wuzhekai1985/article/details/6660462
//唯一的工厂，可以生产两种型号的处理器核，在内部判断 
//工厂模式：
//定义一个用于创建对象的接口，让子类决定实例化哪个类
//使类的实例化延迟到子类

//缺点：每增加一种产品就需要增加一个对象的工厂
//相对于简单工厂模式，工厂模式需要更多的类定义；


//抽象工厂：
//提供一个创建一系列相关或相互依赖对象的接口，而无需指定他们具体的类


#ifndef _CORE_FACTORY_H_
#define _CORE_FACTORY_H_

#include "SingleCore.h"
#include "MultiCore.h"

enum CTYPE
{
	COREA, 
	COREB
};

class CoreFactory
{  
public:   
	virtual SingleCore* CreateSingleCore() = 0;
	virtual MultiCore* CreateMultiCore() = 0;
};  
#endif