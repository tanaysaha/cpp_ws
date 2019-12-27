#ifndef LINKED_LIST_NODE_H_
#define LINKED_LIST_NODE_H_

class Node {
    private:
        int data;
        Node* next;
    public:
        Node(int d=0);
};

#endif