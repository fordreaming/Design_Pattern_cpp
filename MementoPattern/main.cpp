#include <iostream>
#include "originator.h"
#include "caretaker.h"

using namespace std;

int main()
{
    Originator originator;
    originator.m_state = 1;
    originator.Show();

    Caretaker   careTaker;
    careTaker.m_pMemento = originator.CreateMemento();

    originator.m_state = 2;
    originator.Show();

    originator.SetMemento(careTaker.m_pMemento);
    originator.Show();

    return 0;
}
