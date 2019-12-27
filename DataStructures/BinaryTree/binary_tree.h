#ifndef BINARY_TREE_BINARY_TREE_H_
#define BINARY_TREE_BINARY_TREE_H_

#include "node.h"

class BinaryTree {
    private:
        Node* root;
    public:
        BinaryTree();
        BinaryTree(Node*);
        Node* insert(int);
        int FindHeight();
        void RotateRight();
        void RotateLeft();
};

#endif