//唯一的工厂，可以生产两种型号的处理器核，在内部判断 
//简单工厂模式：在工厂类中做判断，从而创造相应的产品
//增加新产品，就需要修改工厂类
//违反开放封闭原则
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
	SingleCore* CreateSingleCore(enum CTYPE ctype)  
	{  
		if(ctype == COREA) //工厂内部判断  
		{
			return new SingleCoreA(); //生产核A 
		}
		else if(ctype == COREB)  
		{
			return new SingleCoreB(); //生产核B  
		}			
		else 
		{
			return NULL; 
		}			
	}  
};  
#endif