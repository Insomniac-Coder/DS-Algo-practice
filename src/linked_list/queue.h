/*************************************************************************
 * Basic implementation of queue, has push, pop and display functionality 
 ************************************************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class queue {
    public:
    void push(int v);
    void display();
    void pop();
    
    private:
    node *head = nullptr, *last = nullptr;
};

#endif QUEUE_H