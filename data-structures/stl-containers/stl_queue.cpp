#include <iostream>
#include <queue>

using std::queue;

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    for(auto it=q.front() ; it!=q.back()+1 ; it++) {
        std::cout << it << '\n';
    }

    q.pop();
    std::cout << '\n';

    for(auto it=q.front() ; it!=q.back()+1 ; it++) {
        std::cout << it << '\n';
    }

    std::cout << "Front: " << q.front() << "\n";
    std::cout << "Back: " << q.back() << "\n";

    return 0;
}
