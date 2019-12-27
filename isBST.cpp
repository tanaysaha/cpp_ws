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

    std::cout << "Before Rotation: " << bt.FindHeight() << std::endl;
    
    bt.RotateRight();
    std::cout << "After Rotation: " << bt.FindHeight() << std::endl;
    
    bt.RotateLeft();
    std::cout << "After Rotation: " << bt.FindHeight() << std::endl;
    return 0;
}