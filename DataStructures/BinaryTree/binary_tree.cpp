#include <iostream>

#include "binary_tree.h"

BinaryTree::BinaryTree():root(nullptr) {}

BinaryTree::BinaryTree(Node* head):root(head) {}

Node* BinaryTree::insert(int data) {
    if(root==nullptr)
        root = new Node(data);
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
    return root;
}

int BinaryTree::FindHeight() {
    return root->FindHeight();
}

void BinaryTree::RotateRight() {
    if(root->left==nullptr)
        return;
    else
    {
        Node* temp = root->left;
        root->left = root->left->right;
        temp->right = root;
        root = temp;
        return;
    }
}

void BinaryTree::RotateLeft() {
    if(root->right==nullptr)
        return;
    else
    {
        Node* temp = root->right;
        root->right = root->right->left;
        temp->left = root;
        root = temp;
        return;
    }
}