#ifndef HANDSETBRAND_H
#define HANDSETBRAND_H

#include <set>
#include "handsetsoft.h"

class HandsetBrand
{
public:
    HandsetBrand();
    virtual void Run();
    void SetHandsetSoft(HandsetSoft *soft);

protected:
    HandsetSoft                 *m_pHandsetSoft;

};

#endif // HANDSETBRAND_H
