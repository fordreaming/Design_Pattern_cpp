#pragma once
#include "State.hpp"
class NoonState : public State
{
public:
	NoonState();
	~NoonState();

	void WriteProgram(Work* work);
};

