#include "Work.h"
#include "ForenoonState.h"



Work::Work()
{
	m_current = new ForenoonState();
}


Work::~Work()
{
	if (nullptr != m_current) {
		delete m_current;
	}
	m_current = nullptr;
}

void Work::SetState(State* state)
{
	m_current = state;
}

void Work::WriteProgram()
{
	m_current->WriteProgram(this);
}
