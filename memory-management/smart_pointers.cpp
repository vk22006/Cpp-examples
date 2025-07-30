/*
SMART POINTERS:
 - Pointers which deallocate memory automatically
 - Prevents memory leaks because of that
 - Much more safer than raw pointers
 - Three types:
   - unique_ptr = You cannot share/create duplicate of that pointer, you can change ownership of the pointer
   - shared_ptr = You can share/create duplicate of that pointer
   - weak_ptr = Almost same as shared_ptr, but does not own anything
*/

#include <iostream>
#include <memory>

using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor called.\n";
    }
    ~Sample() {
        cout << "Destructor called.\n";
    }
};

int main() {

    unique_ptr<int> uPtr1 = make_unique<int>(25);            //In raw pointer, it will look like : int *uPtr1 = new int(25);
    unique_ptr<int> uPtr2 = move(uPtr1);                     //Changes its ownership to uPtr2
    cout << *uPtr2 << '\n';
    // cout << *uPtr1;                                       will result in an error since ownership has changed

    {
        unique_ptr<Sample> clsPtr = make_unique<Sample>();   //Smart pointer deallocates only after end of the scope
    }

    shared_ptr<int> shPtr1 = make_shared<int>(30);
    cout << "Shared count: " << shPtr1.use_count() << '\n';  //Displays the number of owners shared the address of the value
    {
        shared_ptr<int> shPtr2 = shPtr1;                      //Sharing the pointer to another one
        cout << "Shared count: " << shPtr1.use_count() << '\n';
    }
    cout << "Shared count: " << shPtr1.use_count() << '\n';




    return 0;
}
