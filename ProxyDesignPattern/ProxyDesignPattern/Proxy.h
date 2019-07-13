#pragma once
#include "interface.h"
#include "Persuit.h"

class CProxy :
	public CInterface
{
public:
	CProxy(CSchoolGirl *pSchoolGirl);
	~CProxy(void);

public:
	//gg
	CPersuit *m_pPersuit;

public:
	 void GiveDolls(); 
	 void GiveFlowers(); 
	 void GiveChocolate();
};
