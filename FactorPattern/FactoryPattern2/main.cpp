#include <iostream>
#include "Factory.hpp"
#include "FactoryA.hpp"
#include "FactoryB.hpp"

using namespace std;

int main()
{
	SingleCore* singleCore;
	Factory* factory = new FactoryA;
	singleCore->Show();
	return 0;
}   
 
