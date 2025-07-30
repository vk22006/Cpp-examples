/*--------------------------------------------------
Simple random event generator using switch functions
Date: 08/06/2025
----------------------------------------------------*/

#include <iostream>
#include <cstdlib> //for srand() and rand()
#include <ctime> // for time()

int main() {
    using std::cout;
    using std::endl;

    std::srand(std::time(nullptr));
    int n = (std::rand()%5) + 1;

    switch(n) {
        case 1: cout << "Your favorite animal is dinosaur." << endl;
                break;
        case 2: cout << "Your favorite animal is cat." << endl;
                break;
        case 3: cout << "Your favorite animal is dog." << endl;
                break;
        case 4: cout << "Your favorite animal is horse." << endl;
                break;
        case 5: cout << "Your favorite animal is lion." << endl;
                break;
        case 6: cout << "Your favorite animal is wolf." << endl;
                break;
    }

    return 0;
}
