/*-------------------
 Inheritance in C++
 Date : 29/06/2025
---------------------*/

#include <iostream>

class animal {                // parent class
    public:
        void intro() {
            std::cout << "This is an animal\n";
        }

};

class dog : public animal {   // class 'dog' inherits properties from its parent class 'animal'
    public:
        void bark() {
            std::cout << "The dogs goes woof-woof\n";
        }
};


int main() {

    dog d1;
    d1.intro();
    d1.bark();

    return 0;
}
