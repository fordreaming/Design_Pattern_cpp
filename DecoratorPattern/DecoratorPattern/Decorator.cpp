#include "Decorator.h"

CDecorator::CDecorator(void)
{
}

CDecorator::~CDecorator(void)
{
}

void CDecorator::Operation()
{
	if (0 != m_pComponent)
	{
		m_pComponent->Operation();
	}
}

void CDecorator::SetComponent(CComponent *pComponent)
{
	this->m_pComponent = pComponent;
}