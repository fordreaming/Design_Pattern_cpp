#pragma once
#include <string>
#include <iostream>
#include "company.h"

using std::string;
using std::cout;
using std::endl;

class CHRDepartment :
	public CCompany
{
public:
	CHRDepartment(void);
	CHRDepartment(string name);
	~CHRDepartment(void);
public:
	void Add(CCompany* company);
	void Remove(CCompany* company);
	void Display(int depth);
	void LineOfDuty();
};
