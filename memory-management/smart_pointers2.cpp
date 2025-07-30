/*
WEAK POINTERS:
 - Does not own memory
 - Just an reference to a shared pointer
 - Automatically dies if the shared pointer no longer exists
 - Used to check if the shared pointer is alive or not
 - Also used to break the cyclical reference which can cause mem leaks (ex: doubly linked list etc,.)
 */

 #include <iostream>
 #include <memory>


 int main() {
    std::shared_ptr<int> shPtr = std::make_shared<int>(25);
    std::weak_ptr<int> weakPtr = shPtr;                      //weak pointer created to observe shPtr

    //check if the object is still alive
    if(auto lockednum = weakPtr.lock()) {
        std::cout << "Value stored is: " << *lockednum << "\n";
    }
    else {
        std::cout << "Object is gone!\n";
    }

    //reset the shared pointer, no more owners
    shPtr.reset();

    //now weak pointer returns nullptr because it will expire
    if(auto lockednum = weakPtr.lock()) {
        std::cout << "Value stored is: " << *lockednum << "\n";
    }
    else {
        std::cout << "Value expired\n";
    }

    return 0;
 }
