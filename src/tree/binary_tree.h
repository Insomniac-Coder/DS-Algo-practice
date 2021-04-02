/************************************************************************************
 * Basic implementation of binary tree, has insert, search and display functionality 
 ***********************************************************************************/

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "tree_node.h"
#include <string>

class binary_tree {
    public:
    binary_tree();
    ~binary_tree();

    void insert(int data);
    tree_node* search(int data);
    void display();

    private:
    void delete_node(tree_node* element);
    void insert(int data, tree_node* element);
    tree_node* search(int data, tree_node* element);
    void tree_gen(tree_node* element, int level, std::string type);
    tree_node *root;    
};

#endif BINARY_TREE_H