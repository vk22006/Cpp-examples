/*--------------------------------------------
 Swapping two values using pass by reference
 Date : 15/06/2025
----------------------------------------------*/

#include <iostream>

void swap_val(int &a, int &b);

int main() {
    int a = 10;
    int b = 20;

    swap_val(a,b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}

void swap_val(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
