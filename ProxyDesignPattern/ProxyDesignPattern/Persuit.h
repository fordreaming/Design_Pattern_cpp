#pragma once
#include "interface.h"
#include "SchoolGirl.h"

class CPersuit :
	public CInterface
{
public:
	CPersuit(CSchoolGirl *pSchoolGirl);
	~CPersuit(void);

public:
	CSchoolGirl m_schoolGirl;
	
public:
	void GiveDolls(); 
	void GiveFlowers(); 
	void GiveChocolate(); 
};
