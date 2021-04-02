/*************************************************************************
 * Basic implementation of stack, has push, pop and display functionality 
 ************************************************************************/

#ifndef STACK_H
#define STACK_H

#include "node.h"

class stack {
    public:
    void push(int v);
    void display();
    void pop();
    
    private:
    node *head;
};

#endif STACK_H