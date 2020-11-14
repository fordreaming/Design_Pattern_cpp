#pragma once
#include "flyWeight.h"
#include <iostream>

using namespace std;

class ConcreteFlyWeight :
	public FlyWeight
{
public:
	ConcreteFlyWeight();
	~ConcreteFlyWeight();

	void Operation(int extrinsicstate);
};

