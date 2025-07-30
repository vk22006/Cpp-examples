#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    /*
    1. Using if-else statement

    if(num%2 == 0) {
        std::cout << num << " is even";
    }
    else {
        std::cout << num << " is odd";
    }
    */

    //2. Using ternary operator
    num%2 == 0 ? std::cout << num << " is even" : std::cout << num << " is odd";


}
