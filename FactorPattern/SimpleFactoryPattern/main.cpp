#include <iostream>
#include "Factory.hpp"

using namespace std;

int main()
{
	SingleCore* singleCore;
	Factory* factory = new Factory;
	singleCore = factory->CreateSingleCore(COREA);
	singleCore->Show();
	return 0;
}   
 
