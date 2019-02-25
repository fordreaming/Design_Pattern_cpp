#include "Persuit.h"

CPersuit::CPersuit(CSchoolGirl *pSchoolGirl)
{
	this->m_schoolGirl = *pSchoolGirl;
}

void CPersuit::GiveDolls()
{
	printf("%sËÍÄãÑóÍŞÍŞ\n", m_schoolGirl.m_name.c_str());
} 

void CPersuit::GiveFlowers()
{
	printf("%sËÍÄã»¨\n", m_schoolGirl.m_name.c_str());
}

void CPersuit::GiveChocolate()
{
	printf("%sËÍÄãÇÉ¿ËÁ¦\n", m_schoolGirl.m_name.c_str());
}
