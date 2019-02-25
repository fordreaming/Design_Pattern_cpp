#pragma once

class COperate
{
public:
	COperate(void);
	~COperate(void);
public:
	int m_numA;
	int m_numB;

public:
	virtual int GetResult() = 0;
};
