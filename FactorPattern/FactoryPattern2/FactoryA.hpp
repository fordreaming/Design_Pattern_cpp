#ifndef _FACTORYA_H_
#define _FACTORYA_H_
#include "Factory.hpp"
#include "SingleCoreA.hpp"

class FactoryA:public Factory
{
public:
	SingleCoreA* CreateSingleCore()
	{
		return new SingleCoreA;
	}
};
#endif