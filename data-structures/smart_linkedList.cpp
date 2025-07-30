#include <iostream>
#include <memory>

using std::unique_ptr;
using std::make_unique;

class Node {
public:
    int value;
    std::unique_ptr<Node> next;
    Node(int value) : value(value), next(nullptr) {}
};

void displayList(const Node* n) {
    while (n) {
        std::cout << n->value << ' ';
        n = n->next.get();
    }
    std::cout << '\n';
}

int listLength(const Node* n) {
    int Ncount = 0;
    while (n) {
        Ncount += 1;
        n = n->next.get();
    }
    return Ncount;
}

int main() {
    auto head              = make_unique<Node>(1);
    head->next             = make_unique<Node>(2);
    head->next->next       = make_unique<Node>(3);
    head->next->next->next = make_unique<Node>(4);

    displayList(head.get());
    std::cout << "Length of the list is: " << listLength(head.get());  //IMPORTANT : .get() is used to convert smart pointer to raw pointer (Node* in this case)

    return 0;
}
