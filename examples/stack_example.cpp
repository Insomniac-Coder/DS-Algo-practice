#include "stack_example.h"
#include <iostream>

void stack_example()
{
    stack<int> st;
    
    char s[20];
    memset(s, '#', sizeof(s) - 1);
    s[sizeof(s) - 1] = '\0';
    
    std::cout<<s<<std::endl;
    std::cout<<"STACK EXAMPLE" << std::endl;
    std::cout<<s<<std::endl;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    std::cout<<s<<std::endl;
    st.display();
    std::cout<<s<<std::endl;
    st.pop();
    std::cout<<"After popping" << std::endl;
    std::cout<<s<<std::endl;
    st.display();
    std::cout<<s<<std::endl;
    st.pop();
    st.push(420);
    std::cout<<"After popping and pushing 420" << std::endl;
    std::cout<<s<<std::endl;
    st.display();
    std::cout<<s<<std::endl;
    
}
