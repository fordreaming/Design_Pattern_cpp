#pragma once

class CInterface
{
public:
	CInterface(void);
	~CInterface(void);

public:
	virtual void GiveDolls() = 0; 
	virtual void GiveFlowers() = 0; 
	virtual void GiveChocolate() = 0; 
};
