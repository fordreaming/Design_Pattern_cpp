#pragma once
#include <string>

using std::string;

class CComponent
{
public:
	CComponent(void);
	CComponent(string name);
	~CComponent(void);

public:
	virtual void Add(CComponent* pCompnent) = 0;
	virtual void Remove(CComponent* pCompnent) = 0;
	virtual void Display(int depth) = 0;

protected:
	string _name;
};
