#include "originator.h"
#include <QDebug>

Originator::Originator() : m_state(0)
{

}

void Originator::SetMemento(Memento *memento)
{
    this->m_state = memento->m_state;
}

Memento *Originator::CreateMemento()
{
    Memento* mementa = new Memento();
    mementa->m_state = m_state;
    return mementa;
}

void Originator::Show()
{
    qDebug() << "current state is: " << m_state << endl;
}
