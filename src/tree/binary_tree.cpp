#include "binary_tree.h"
#include <iostream>

binary_tree::binary_tree() {
    root = nullptr;
}

void binary_tree::delete_node(tree_node *element) {
    //std::cout << element->data << std::endl;
    if (element != nullptr) {
        delete_node(element->left);
        delete_node(element->right);
        delete element;
    }
}

binary_tree::~binary_tree() {
    if (root != nullptr) {
        delete_node(root);
    }
}

void binary_tree::insert(int data) {
    if (root == nullptr) {
        root = new tree_node();
        root->data = data;
        root->left = nullptr;
        root->right = nullptr;
    }
    else {
        insert(data, root);
    }
}

void binary_tree::insert(int data, tree_node* element) {
    if (data < element->data) {
        if (element->left != nullptr) {
            insert(data, element->left);
        }
        else{
            element->left = new tree_node();
            element->left->data = data;
            element->left->left = nullptr;
            element->left->right = nullptr;
        }
    }
    else{
        if (element->right != nullptr) {
            insert(data, element->right);
        }
        else{
            element->right = new tree_node();
            element->right->data = data;
            element->right->left = nullptr;
            element->right->right = nullptr;
        }
    }
}

tree_node* binary_tree::search(int data) {
    return search(data, root);
}

tree_node* binary_tree::search(int data, tree_node* element) {
    static int level = 1;
    if (element != nullptr) {
        if(data == element->data) {
            std::cout << "(SEARCH:)Element " << element->data  << " found at level " << level << std::endl;
            return element;
        }
        else {
            if (data < root->data) {
                if(root->left != nullptr) {
                    ++level;
                    search(data, root->left);
                } 
            }
            else {
                if(root->right != nullptr) {
                    ++level;
                    search(data, root->right);
                } 
            }
        }
    }
}

void binary_tree::display() {
    tree_gen(root, 1, "ROOT");
}

void binary_tree::tree_gen(tree_node* element, int level, std::string type) {
    if(element != nullptr) {
        std::cout << element->data << ", " << level << ", " << type << std::endl;

        if(element->left != nullptr) {
        tree_gen(element->left, level + 1, "LEFT");
        }
        if(element->right != nullptr) {
            tree_gen(element->right, level + 1, "RIGHT");
        }
    }
    else {
        std::cout << "Empty tree!" << std::endl;
    }
}