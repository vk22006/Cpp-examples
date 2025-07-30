#include <iostream>
#include <stack>

using std::stack;

void printStackElements(stack<int> s) {
    while(!s.empty()) {
        std::cout << s.top() << '\n';
        s.pop();
    }

}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.empty()==true ? std::cout << "Stack is empty\n" : std::cout << "Stack is not empty\n";
    std::cout << "Size: " << s.size() << "\n";

    printStackElements(s);


    return 0;
}
