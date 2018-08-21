#ifndef _FACTORYB_H_
#define _FACTORYB_H_

#include "CoreFactory.hpp"
#include "SingleCoreB.hpp"
#include "MultiCoreB.hpp"

class FactoryB:public CoreFactory
{
public:
	SingleCoreB* CreateSingleCore()
	{
		return new SingleCoreB;
	}
	MultiCoreB* CreateMultiCore()
	{
		return new MultiCoreB;
	}
};
#endif