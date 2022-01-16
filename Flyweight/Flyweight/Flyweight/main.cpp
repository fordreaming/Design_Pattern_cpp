#include <iostream>
#include "FlyWeightFactory.h"
#include "ConcreteFlyWeight.h"
#include "UnsharedConcreteFlyWeight.h"

using namespace std;

#define	PTR_SAFE_DELETE(ptr) {													\
								if (nullptr != ptr) {							\
									delete ptr;									\
								}												\
								ptr = nullptr;									\
							}

int main()
{
	int externalState = 22;
	FlyWeightFactory* flyWeightFactory = new FlyWeightFactory();

	FlyWeight* fx = flyWeightFactory->GetFlyWeight("x");
	fx->Operation(--externalState);

	FlyWeight* fy = flyWeightFactory->GetFlyWeight("y");
	fy->Operation(--externalState);

	FlyWeight* fz = flyWeightFactory->GetFlyWeight("z");
	fz->Operation(--externalState);

	FlyWeight* uf = new UnsharedConcreteFlyWeight();
	uf->Operation(--externalState);

	PTR_SAFE_DELETE(fx);
	PTR_SAFE_DELETE(fy);
	PTR_SAFE_DELETE(fz);
	PTR_SAFE_DELETE(uf);

	return 0;
}