#include <iostream>

#include "DataStructures/BinaryTree/binary_tree.h"

int main()
{
    int t;
    BinaryTree bt;
    do
    {
        std::cin >> t;
        bt.insert(t);
    } while (t!=-1);
    bt.printHeight();
    return 0;
}