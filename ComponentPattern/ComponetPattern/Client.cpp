#include <iostream>
#include "Company.h"
#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

using namespace std;


int main()
{
	CConcreteCompany* root = new CConcreteCompany("北京总公司");
	root->Add(new CHRDepartment("总公司人力资源部"));
	root->Add(new CFinanceDepartment("总公司财务部"));

	CConcreteCompany* comp = new CConcreteCompany("上海华东分公司");
	comp->Add(new CHRDepartment("上海华东分公司人力资源部"));
	comp->Add(new CFinanceDepartment("上海华东分公司财务部"));
	root->Add(comp);

	CConcreteCompany* comp1 = new CConcreteCompany("南京办事处");
	comp1->Add(new CHRDepartment("南京办事处人力资源部"));
	comp1->Add(new CFinanceDepartment("南京办事处财务部"));
	root->Add(comp1);

	CConcreteCompany* comp2 = new CConcreteCompany("杭州办事处");
	comp2->Add(new CHRDepartment("杭州办事处人力资源部"));
	comp2->Add(new CFinanceDepartment("杭州办事处财务部"));
	root->Add(comp2);

	cout << "结构图" << endl;
	root->Display(1);

	cout << "职责" << endl;
	root->LineOfDuty();

	return 0;
}