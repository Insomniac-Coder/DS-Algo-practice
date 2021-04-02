#include "queue_example.h"
#include <iostream>

void queue_example()
{
    queue q;
    
    char s[20];
    memset(s, '#', sizeof(s) - 1);
    s[sizeof(s) - 1] = '\0';

    std::cout<<s<<std::endl;
    std::cout<<"QUEUE EXAMPLE" << std::endl;
    std::cout<<s<<std::endl;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    std::cout<<s<<std::endl;
    q.display();
    std::cout<<s<<std::endl;
    q.pop();
    std::cout<<"After popping" << std::endl;
    std::cout<<s<<std::endl;
    q.display();
    std::cout<<s<<std::endl;
    q.pop();
    q.push(69);
    std::cout<<"After popping and pushing 69" << std::endl;
    std::cout<<s<<std::endl;
    q.display();
    std::cout<<s<<std::endl;
    
}