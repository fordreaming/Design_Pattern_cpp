#include "ConcreteCompany.h"

CConcreteCompany::CConcreteCompany(void)
{
}

CConcreteCompany::~CConcreteCompany(void)
{
}


void CConcreteCompany::Add(CCompany* company)
{
	_companyList.push_back(company);
}

void CConcreteCompany::Remove(CCompany* company)
{
	_companyList.remove(company);
}

void CConcreteCompany::Display(int depth)
{
	for (int i = 0; i < depth; ++i)
	{
		cout <<"_";
	}
	cout << _name << endl;
	list<CCompany *>::iterator iter= _companyList.begin();
	for(; iter != _companyList.end(); iter++) //显示下层结点
	        (*iter)->Display(depth + 2);
		
}

void CConcreteCompany::LineOfDuty()
{
	list<CCompany *>::iterator iter= _companyList.begin();
	for(; iter != _companyList.end(); iter++) //显示下层结点
		(*iter)->LineOfDuty();
}
