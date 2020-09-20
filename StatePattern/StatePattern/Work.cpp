#include "Work.h"
#include "ForenoonState.h"



Work::Work()
{
	m_current = new ForenoonState();
}


Work::~Work()
{
}

void Work::SetState(State* state)
{
	m_current = state;
}

void Work::WriteProgram()
{
	m_current->WriteProgram(this);
}
