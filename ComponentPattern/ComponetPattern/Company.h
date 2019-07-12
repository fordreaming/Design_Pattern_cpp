#pragma once
#include <string>

using std::string;
class CCompany
{
public:
	CCompany(void);
	CCompany(string name);
	~CCompany(void);
protected:
	string _name;

public:
	virtual void Add(CCompany* company);
	virtual void Remove(CCompany* company);
	virtual void Display(int depth);
	virtual void LineOfDuty();
};
