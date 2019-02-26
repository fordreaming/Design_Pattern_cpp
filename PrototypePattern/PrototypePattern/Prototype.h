#pragma once
#include <String>

using std::string;

class CPrototype
{
public:
	CPrototype();
	CPrototype(string id);
	~CPrototype(void);

public:
	string m_id;

public:
	virtual CPrototype *Clone() = 0;
};
