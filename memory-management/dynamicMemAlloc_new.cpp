/*---------------------------------------------
 Dynamic Memory Allocation for a single value
 Date : 20/06/2025
-----------------------------------------------*/

#include <iostream>

int main() {

    int *pNum = NULL;      // Initializing pointer to NULL
    pNum = new int;        // Allocating memory for a single integer value
    *pNum = 22;            // Assigning value to the allocated memory address

    std::cout << *pNum;

    delete pNum;           // Freeing memory to prevent memory leak (IMPORTANT)

    return 0;
}
