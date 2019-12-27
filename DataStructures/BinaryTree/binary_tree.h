#ifndef BINARY_TREE_BINARY_TREE_H_
#define BINARY_TREE_BINARY_TREE_H_

#include "node.h"

class BinaryTree {
    private:
        Node* root;
        int height;
    public:
        BinaryTree();
        BinaryTree(Node*);
        void printHeight();
        Node* insert(int);
};

#endif