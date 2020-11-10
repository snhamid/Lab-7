#include "stack.hpp"

void Stack::push(double pusher)
{
    elementList[position] = pusher;
    position++;
}

void Stack::pop()
{
    delete &elementList[position - 1];
    position--;
}

double Stack::top()
{
    return elementList[position - 1];
}
