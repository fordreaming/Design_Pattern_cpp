#pragma once
#include "flyWeight.h"
#include <iostream>
using namespace std;

class UnsharedConcreteFlyWeight :
	public FlyWeight
{
public:
	UnsharedConcreteFlyWeight();
	~UnsharedConcreteFlyWeight();

	void Operation(int extrinsicstate);
};

