#pragma once
#include <String>
#include "prototype.h"

using std::string;

class CConcretePrototype1 :
	public CPrototype
{
public:
	CConcretePrototype1();
	CConcretePrototype1(string id);
	~CConcretePrototype1(void);

public:
	CPrototype *Clone();
};
