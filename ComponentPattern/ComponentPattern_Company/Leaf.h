#pragma once
#include <iostream>
#include "component.h"

using std::cout;
using std::endl;

class CLeaf :
	public CComponent
{
public:
	CLeaf(void);
	CLeaf(string name);
	~CLeaf(void);


public:
	void Add(CComponent* pCompnent);
	void Remove(CComponent* pCompnent);
	void Display(int depth);
};
