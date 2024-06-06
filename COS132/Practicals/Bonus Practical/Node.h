#ifndef NODE_H
#define NODE_H
#include <cstddef>

struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;
    Node(int data){
        this->data = data;
    }    
};

#endif