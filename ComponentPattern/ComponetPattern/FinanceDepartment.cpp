#include "FinanceDepartment.h"

CFinanceDepartment::CFinanceDepartment(void)
{
}

CFinanceDepartment::CFinanceDepartment(string name):CCompany(name)
{
}

CFinanceDepartment::~CFinanceDepartment(void)
{
}

void CFinanceDepartment::Add(CCompany* company)
{

}

void CFinanceDepartment::Remove(CCompany* company)
{

}

void CFinanceDepartment::Display(int depth)
{
	for (int i = 0; i < depth; ++i)
	{
		cout << "-";
	}
	cout << _name << endl;
}

void CFinanceDepartment::LineOfDuty()
{
	cout << _name << "finance manage" << endl;
}
