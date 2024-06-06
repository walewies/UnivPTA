#include "BinaryTree.h"

void BinaryTree::insertNode(int data) {
    Node* dataNodePtr = new Node(data);
    if (root == NULL) {
        root = dataNodePtr;
    } else {
        recursiveInsert(root, dataNodePtr);
    }
}

void BinaryTree::recursiveInsert(Node* curr, Node* newNode) {
    if (newNode->data < curr->data) {
        if (curr->left == NULL) {
            curr->left = newNode;
        } else {
            recursiveInsert(curr->left, newNode);
        }
    } else if (newNode->data > curr->data) {
        if (curr->right == NULL) {
            curr->right = newNode;
        } else {
            recursiveInsert(curr->right, newNode);
        }
    } else if (newNode->data == curr->data) {
        std::cout << "No duplicate insertions are permitted." << std::endl;
    }
}

bool BinaryTree::searchNode(int data) {
    if (root == NULL) {
        std::cout << "Tree is empty." << std::endl;
        return false;
    } else {
        return recursiveSearch(root, data);
    }
}

bool BinaryTree::recursiveSearch(Node* curr, int data) {
    if (curr == NULL) {
        std::cout << "Data not found." << std::endl;
        return false;
    } else if (data == curr->data) {
        std::cout << "Current Node value is: " << curr->data << ", the required value is: " << data << std::endl;
        return true;
    } else {
        std::cout << "Current node value is: " << curr->data << "." << std::endl;
    } 

    if (data < curr->data) {
        std::cout << "The desired data is less than the current node's value, searching down the left child..." << std::endl;
        return recursiveSearch(curr->left, data);
    } else if (data > curr->data) {
        std::cout << "The desired data is greater than the current node's value, searching down the right child..." << std::endl;
        return recursiveSearch(curr->right, data);
    }
    
    return false;
}