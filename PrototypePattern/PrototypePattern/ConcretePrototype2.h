#pragma once
#include <String>
#include "prototype.h"

using std::string;

class CConcretePrototype2 :
	public CPrototype
{
public:
	CConcretePrototype2();
	CConcretePrototype2(string id);
	~CConcretePrototype2(void);

public:
	CPrototype *Clone();
};
