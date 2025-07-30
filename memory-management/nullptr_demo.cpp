/*--------------------------------------------
 Simple demonstration of nullptr in pointers
 Date : 15/06/2025
----------------------------------------------*/

#include <iostream>

int main() {

    int *p = nullptr;
    int num = 123;

    p = &num;

    if(p==nullptr) {
        std::cout << "address was not assigned\n";
        // WARNING: Don't print a pointer which is nullptr! Doing so will result in segmentation fault
    }
    else {
        std::cout << "address was assigned\n";
    }

    return 0;
}
