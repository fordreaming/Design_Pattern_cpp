#pragma once
#include "decorator.h"
#include <string>

using std::string;

class CConcreteDecoratorB :
	public CDecorator
{
public:
	CConcreteDecoratorB(void);
	~CConcreteDecoratorB(void);
public:
	void Operation();
	void AddedBehavior();
public:
	string m_addedState;
};
