#ifndef _FACTORYA_H_
#define _FACTORYA_H_

#include "CoreFactory.hpp"
#include "SingleCoreA.hpp"
#include "MultiCoreA.hpp"

class FactoryA:public CoreFactory
{
public:
	SingleCoreA* CreateSingleCore()
	{
		return new SingleCoreA;
	}
	MultiCoreA* CreateMultiCore()
	{
		return new MultiCoreA;
	}
};
#endif