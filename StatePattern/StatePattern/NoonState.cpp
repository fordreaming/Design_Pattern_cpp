#include "NoonState.h"
#include "Work.h"



NoonState::NoonState()
{
}


NoonState::~NoonState()
{
}

void NoonState::WriteProgram(Work* work)
{
	if (work->m_hour < 13) {
		cout << "current time : " << work->m_hour << endl;
	}
}
