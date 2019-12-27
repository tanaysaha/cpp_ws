#include "node.h"

Node::Node(int d):data(d), right(nullptr), left(nullptr) {}

int Node::FindHeight() {
    int r,l;
    if(left==nullptr)
        l = 0;
    else
        l = left->FindHeight();
    if(right==nullptr)
        r = 0;
    else
        r = right->FindHeight();
    
    return r > l ? r+1 : l+1 ;
}