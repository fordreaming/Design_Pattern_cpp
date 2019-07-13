#pragma once
#include "component.h"
#include <stdio.h>

class CConcreteComponent :
	public CComponent
{
public:
	CConcreteComponent(void);
	~CConcreteComponent(void);
public:
	void Operation();
};
