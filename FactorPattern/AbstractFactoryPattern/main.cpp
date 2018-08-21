#include <iostream>
#include "CoreFactory.hpp"
#include "FactoryA.hpp"
#include "FactoryB.hpp"

using namespace std;

int main()
{
	CoreFactory* coreFactory = new FactoryB;
	SingleCore* signleCore = coreFactory->CreateSingleCore();
	MultiCore* multiCore = coreFactory->CreateMultiCore();
	multiCore->Show();
	signleCore->Show();
	return 0;
}   
 
