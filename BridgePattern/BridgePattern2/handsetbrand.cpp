#include "handsetbrand.h"

HandsetBrand::HandsetBrand() : m_pHandsetSoft(nullptr)
{

}

void HandsetBrand::Run()
{

}

void HandsetBrand::SetHandsetSoft(HandsetSoft *soft)
{
    this->m_pHandsetSoft = soft;
}
