#pragma once
#include "decorator.h"
#include <string>

using std::string;

class CConcreteDecoratorA :
	public CDecorator
{
public:
	CConcreteDecoratorA(void);
	~CConcreteDecoratorA(void);
public:
	void Operation();

public:
	string m_addedState;
};
