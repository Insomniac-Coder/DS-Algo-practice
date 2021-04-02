#include "binary_tree_example.h"
#include <iostream>

void binary_tree_example() {
    binary_tree b;

    char s[20];
    memset(s, '#', sizeof(s) - 1);
    s[sizeof(s) - 1] = '\0';

    std::cout<<s<<std::endl;
    std::cout<<"BINARY TREE EXAMPLE" << std::endl;
    std::cout<<s<<std::endl;
    std::cout<<s<<std::endl;
    std::cout<<"EMPTY TREE" << std::endl;
    std::cout<<s<<std::endl;
    b.display();
    std::cout<<s<<std::endl;
    b.insert(30);
    b.insert(20);
    b.insert(10);
    b.insert(40);
    std::cout<<s<<std::endl;
    std::cout<<"AFTER INSERTIONS" << std::endl;
    std::cout<<s<<std::endl;
    b.display();
    std::cout<<s<<std::endl;
    std::cout<<"AFTER ADDING 35" << std::endl;
    std::cout<<s<<std::endl;
    b.insert(35);
    b.display();
    std::cout<<s<<std::endl;
    std::cout<<"SEARCHING" << std::endl;
    std::cout<<s<<std::endl;
    b.search(40);
    b.search(30);
}