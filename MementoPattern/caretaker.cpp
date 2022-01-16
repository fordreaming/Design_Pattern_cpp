#include "caretaker.h"

Caretaker::Caretaker(): m_pMemento(nullptr)
{

}

Caretaker::~Caretaker()
{
    if(nullptr != m_pMemento) {
        delete m_pMemento;
    }
    m_pMemento = nullptr;
}
