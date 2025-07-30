/*----------------------------------------------------------
 Dynamic Memory Allocation for multiple values in an Array
 Date : 20/06/2025
------------------------------------------------------------*/

#include <iostream>

int main() {
    int *parr = NULL;                                             // Initializing pointer to NULL
    int asize;

    std::cout << "Enter the no. of elements you want to add: ";
    std::cin >> asize;                                            // Asking size from the user

    parr = new int[asize];                                        // Memory allocated to array based on user specified size

    for(int i=0; i<asize; i++) {
        std::cout << "Element [" << i << "] = ";
        std::cin >> parr[i];                                      // Input elements from user
    }

    std::cout << "The array elements are: \n";
    for(int i=0; i<asize; i++) {
        std::cout << parr[i] << " ";                              // Display array elements
    }

    delete parr;                                                  // Freeing up allocated space (IMPORTANT)

    return 0;
}
