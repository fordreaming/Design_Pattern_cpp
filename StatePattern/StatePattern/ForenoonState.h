#pragma once
#include "State.hpp"

class ForenoonState : public State
{
public:
	ForenoonState();
	~ForenoonState();

	void WriteProgram(Work* work);
};

