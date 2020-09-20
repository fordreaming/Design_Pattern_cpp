#pragma once
#include <iostream>

using namespace std;

class Work;
class State
{
public:
	State() {}
	~State() {}

public:
	virtual void WriteProgram(Work* w) = 0;

};

