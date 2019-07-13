#pragma once
#include "component.h"

class CDecorator:
	public CComponent
{
public:
	CDecorator(void);
	~CDecorator(void);
protected:
	CComponent *m_pComponent;

public:
	void Operation();
	void SetComponent(CComponent *pComponent);
};
