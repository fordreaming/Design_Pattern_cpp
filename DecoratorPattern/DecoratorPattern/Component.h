#pragma once

class CComponent
{
public:
	CComponent(void);
	~CComponent(void);
public:
	virtual void Operation() = 0;
};
