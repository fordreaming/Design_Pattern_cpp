#pragma once
#include <list>
#include <iostream>
#include "company.h"

using std::list;
using std::cout;
using std::endl;

class CConcreteCompany :
	public CCompany
{
public:
	CConcreteCompany(void);
	CConcreteCompany(string name): CCompany(name) 
	{

	}
	~CConcreteCompany(void);

public:
	void Add(CCompany* company);
	void Remove(CCompany* company);
	void Display(int depth);
	void LineOfDuty();

private:
	//vector<CCompany*> _companyList; 
	list<CCompany*> _companyList;
};
