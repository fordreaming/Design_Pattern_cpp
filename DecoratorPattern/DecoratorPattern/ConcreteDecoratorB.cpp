#include "ConcreteDecoratorB.h"
#include <stdio.h>

CConcreteDecoratorB::CConcreteDecoratorB(void)
{
}

CConcreteDecoratorB::~CConcreteDecoratorB(void)
{
}

void CConcreteDecoratorB::Operation()
{
	m_pComponent->Operation();
	AddedBehavior();
	printf("具体装饰对象B的操作\n");
}

void CConcreteDecoratorB::AddedBehavior()
{
	m_addedState = "New B State";
	printf("具体装饰对象B的添加操作\n");
}
