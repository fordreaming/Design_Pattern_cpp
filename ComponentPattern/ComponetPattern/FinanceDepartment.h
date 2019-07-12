#pragma once
#include <iostream>
#include "company.h"

using std::cout;
using std::endl;

class CFinanceDepartment :
	public CCompany
{
public:
	CFinanceDepartment(void);
	CFinanceDepartment(string name);
	~CFinanceDepartment(void);
public:
	void Add(CCompany* company);
	void Remove(CCompany* company);
	void Display(int depth);
	void LineOfDuty();
};
