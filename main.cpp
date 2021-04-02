#include "examples/stack_example.h"
#include "examples/queue_example.h"
#include "examples/binary_tree_example.h"
#include <iostream>

int main(){
    stack_example();
    queue_example();
    binary_tree_example();

    std::cin.get();

    return 0;
}