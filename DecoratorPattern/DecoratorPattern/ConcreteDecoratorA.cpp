#include "ConcreteDecoratorA.h"

CConcreteDecoratorA::CConcreteDecoratorA(void)
{
}

CConcreteDecoratorA::~CConcreteDecoratorA(void)
{
}

void CConcreteDecoratorA::Operation()
{
	m_pComponent->Operation();
	m_addedState = "New State";
	printf("具体装饰对象A的操作\n");
}
