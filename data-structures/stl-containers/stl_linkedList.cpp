#include <iostream>
#include <list>

using std::list;

int main() {

    list<int> myList;
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(40);
    myList.erase(myList.begin());

    //to traverse through list, we use iterators (pointers which point to specific element)
    for(list<int>::iterator it=myList.begin() ; it!=myList.end(); it++) {
        std::cout << *it << '\n';
    }

    return 0;
}
