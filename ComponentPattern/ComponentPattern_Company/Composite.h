#pragma once
#include <iostream>
#include <list>
#include "component.h"

using std::list;
using std::endl;
using std::cout;

class CComposite :
	public CComponent
{
public:
	CComposite(void);
	CComposite(string name);
	~CComposite(void);

public:
	void Add(CComponent* pCompnent);
	void Remove(CComponent* pCompnent);
	void Display(int depth);

private:
	list <CComponent*> _componentList;
};
