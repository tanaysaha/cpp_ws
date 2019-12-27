#include <iostream>

#include "binary_tree.h"

BinaryTree::BinaryTree():root(nullptr), height(0) {}

BinaryTree::BinaryTree(Node* head):root(head), height(head->FindHeight()) {}

void BinaryTree::printHeight() { std::cout << height << std::endl; }

Node* BinaryTree::insert(int data) {
    if(root==nullptr)
    {
        root = new Node(data);
    }
    else
    {
        if(data < root->data)
        {
            if(root->left==nullptr)
                root->left = new Node(data);
            else
                root->left = BinaryTree(root->left).insert(data);
        }
        else
        {
            if(root->right==nullptr)
                root->right = new Node(data);
            else
                root->right = BinaryTree(root->right).insert(data);
        }    
    }
    height = root->FindHeight();
    return root;
}