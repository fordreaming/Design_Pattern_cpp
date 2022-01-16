#ifndef WAITER_H
#define WAITER_H
#include "command.h"

class Waiter
{
public:
    Waiter();
    void SetOrder(Command* pCommand);
    void Notify();

private:
    Command         m_command;
};

#endif // WAITER_H
