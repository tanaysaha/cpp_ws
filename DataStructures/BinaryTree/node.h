#ifndef BINARY_TREE_NODE_H_
#define BINARY_TREE_NODE_H_

class Node {
    friend class BinaryTree;
    private:
        int data;
        Node* right;
        Node* left;
    public:
        Node(int d=0);
        int FindHeight();
};

#endif