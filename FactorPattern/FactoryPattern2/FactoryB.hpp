#ifndef _FACTORYB_H_
#define _FACTORYB_H_

#include "Factory.hpp"
#include "FactoryB.hpp"

class FactoryB:public Factory
{
public:
	SingleCoreB* CreateSingleCore()
	{
		return new SingleCoreB;
	}
};
#endif