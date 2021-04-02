#include <iostream>
#include "stack.h"

void stack::push(int v) {
    node *temp = new node();
    
    if (temp == nullptr) {
        std::cout << "Heap overflow :(" << std::endl;
    }
    
    temp->value = v;
    
    temp->next = head;
    head = temp;
}

void stack::display() {
    node *temp = new node();

    if (temp == nullptr) {
        std::cout << "Heap overflow :(" << std::endl;
    }
    
    if(head == nullptr) {
        std::cout << "The stack is empty" << std::endl;
    }
    
    temp = head;
    
    while(temp != nullptr) {
        std::cout << temp->value << std::endl;
        
        temp = temp->next;
    }
}

void stack::pop() {
    node *temp = new node();

    if (temp == nullptr) {
        std::cout << "Heap overflow :(" << std::endl;
    }
    
    temp = head;
    head = head->next;
    
    temp->next = nullptr;
    free(temp);
}