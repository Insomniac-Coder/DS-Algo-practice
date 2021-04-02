#include "queue.h"
#include <iostream>

void queue::push(int v) {
    node *temp = new node();

    if (temp == nullptr) {
        std::cout<< "Heap overflow :("<<std::endl;
    }

    if (head == nullptr) {
        temp->value = v;
        temp->next = nullptr;
        last = head = temp;
    }
    else {
        temp->value = v;
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void queue::pop() {
    node *temp = new node();

    if (temp == nullptr) {
        std::cout<< "Heap overflow :("<<std::endl;
    }

    temp = head;
    head = head->next;

    delete temp;
}

void queue::display() {
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