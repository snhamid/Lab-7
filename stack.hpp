#ifndef stack_hpp
#define stack_hpp
#include <stdio.h>

class Stack
{
private:
    double elementList[10];
    int position = 0;

public:
    void pop();
    void push(double pusher);
    double top();
};

#endif