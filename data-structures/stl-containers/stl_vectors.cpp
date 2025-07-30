/*
VECTORS:
 - They store elements dynamically like container data structures (ie.linked list,etc).
 - Stores elements in contiguous memory order like static arrays.
 - Because of that, accessing/manipulaion becomes more easy and efficient than any other type.
 - Instead of using linked list and static C-style arrays, we can use vectors for better optimization
 - Can manage memory by itself, so its safe since it prevent memory leaks
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {

    vector<int> arr;

    for(int i=1; i<=10; i++) {
        arr.push_back(i);
    }

    arr.insert(arr.begin()+5, 45);                   //insert element at specific position; places the element at index 5
    arr.erase(arr.begin()+6);                        //deletes element at specific pos; deletes element at index 6

    for(int element : arr) {
        cout << element << '\n';
    }

    /* Display using iterator
    for(auto it=arr.begin() ; it!=arr.end() ; it++) {
        cout << *it << '\n';
    }

    Using constant iterator (we cannot modify the array inside loop)
    for(auto it=arr.cbegin() ; it!=arr.cend() ; it++) {
        *it = 10; -> will get an error
        cout << *it << '\n';
    }
    */

    cout << "Details of vector:\n";
    cout << "Size: " << arr.size() << "\n";
    cout << "Max size: " << arr.max_size() << "\n";   //describes max no. of elements it can store
    cout << "Capacity: " << arr.capacity() << "\n";   //describes how many elements you can add before resizing
    arr.resize(5);                                    //resizes the vector. Now, there are only 5 elements in vector arr
    if(arr.empty()) {
        cout << "Vector is empty\n";
    }
    else {
        cout << "Vector is not empty\n";
    }
    cout << "Front: " << arr.front() << "\n";
    cout << "Back: " << arr.back() << "\n";
    arr.clear();                                      //clears all the elements
    cout << "Size: " << arr.size() << "\n";


    return 0;
}
