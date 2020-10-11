#ifndef CARETAKER_H
#define CARETAKER_H

#include "memento.h"

class Caretaker
{
public:
    Caretaker();
    ~Caretaker();

public:
    Memento*        m_pMemento;
};

#endif // CARETAKER_H
