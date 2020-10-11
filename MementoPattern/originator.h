#ifndef ORIGINATOR_H
#define ORIGINATOR_H
#include "memento.h"

class Originator
{
public:
    explicit Originator();
    void SetMemento(Memento* memento);
    Memento* CreateMemento();
    void Show();

public:
    int         m_state;
};

#endif // ORIGINATOR_H
