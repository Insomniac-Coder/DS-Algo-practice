#include <iostream>
#include "stack.h"

template <typename T>
void stack<T>::push(T v) {
    
    if (head == nullptr) {
        head = new node<T>();
        head->next = nullptr;
        head->value = v;
    }
    else {
        node<T> *temp = new node<T>();
    
        if (temp == nullptr) {
            std::cout << "Heap overflow :(" << std::endl;
        }
        
        temp->value = v;
        temp->next = head;
        head = temp;
    }
}

template <typename T>
void stack<T>::display() {
    node<T> *temp = new node<T>();

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

template <typename T>
void stack<T>::pop() {
    node<T> *temp = new node<T>();

    if (temp == nullptr) {
        std::cout << "Heap overflow :(" << std::endl;
    }
    
    temp = head;
    head = head->next;
    
    temp->next = nullptr;
    delete temp;
}