#include <iostream>
#include "Tree.h"


auto f2 = [](int thing)->void {std::cout << thing; };

int main(int argc, const char* argv[]) {

    std::cout << "Tree test program\n";
    Tree<int> aTree({ 4,7,2,3,5,8 });

    std::cout << "\n Inorder:\n";
    aTree.inorder(f2);

    std::cout << "\n Decrease:\n";
    aTree.decrease(f2);

    return 0;
}