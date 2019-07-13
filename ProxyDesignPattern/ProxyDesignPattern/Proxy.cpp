#include "Proxy.h"

CProxy::CProxy(CSchoolGirl *pSchoolGirl)
{
	m_pPersuit = new CPersuit(pSchoolGirl);
}

CProxy::~CProxy(void)
{
}

void CProxy::GiveDolls()
{
	m_pPersuit->GiveDolls();
} 

void CProxy::GiveFlowers()
{
	m_pPersuit->GiveFlowers();
}

void CProxy::GiveChocolate()
{
	m_pPersuit->GiveChocolate();
}