#include "HRDepartment.h"

CHRDepartment::CHRDepartment(void)
{
}

CHRDepartment::CHRDepartment(string name):CCompany(name)
{

}

CHRDepartment::~CHRDepartment(void)
{
}

void CHRDepartment::Add(CCompany* company)
{

}

void CHRDepartment::Remove(CCompany* company)
{

}

void CHRDepartment::Display(int depth)
{
	for (int i = 0; i < depth; ++i)
	{
		cout << "-";
	}
	cout << _name << endl;
}

void CHRDepartment::LineOfDuty()
{
	cout << _name << "employee training" << endl;
}
