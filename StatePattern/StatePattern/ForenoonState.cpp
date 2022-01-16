#include "ForenoonState.h"
#include "Work.h"
#include "NoonState.h"



ForenoonState::ForenoonState()
{
}


ForenoonState::~ForenoonState()
{
}

void ForenoonState::WriteProgram(Work* work) 
{
	if (work->m_hour < 12) {
		cout << "current time : 9:00 " << work->m_hour;
	}
	else {
		work->SetState(new NoonState());
		work->WriteProgram();
	}
}
