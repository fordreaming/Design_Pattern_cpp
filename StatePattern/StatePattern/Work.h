#pragma once
#include "State.hpp"

class Work
{
public:
	Work();
	~Work();

	void SetState(State* state);
	void WriteProgram();

public:
	State*					m_current;
	double					m_hour;
	bool					m_finished;

};

