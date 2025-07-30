#include <iostream>

class Node {
public:
    int value;
    Node* prev;
    Node* next;
};

void displayList(Node* n) {
    while(n!=nullptr) {
        std::cout << n->value << ' ';
        n = n->next;
    }
    std::cout << '\n';
}

void displayReverse(Node* n) {
    while(n!=nullptr) {
        std::cout << n->value << ' ';
        n = n->prev;
    }
    std::cout << '\n';
}

void freeList(Node* n) {
    Node* cur = n;
    while(cur!=nullptr) {
        Node* nxt = cur->next;
        delete cur;
        cur = nxt;
    }
    std::cout << "\nMemory freed successfully!\n";
}

int listLength(Node* n) {
    int len = 0;
    while(n!=nullptr) {
        len += 1;
        n = n->next;
    }
    return len;
}

int main() {
    Node* head = new Node();
    Node* n1 = new Node();
    Node* n2 = new Node();

    head->prev = nullptr;
    n1->prev = head;
    n2->prev = n1;

    head->next = n1;
    n1->next = n2;
    n2->next = nullptr;

    head->value = 1;
    n1->value = 2;
    n2->value = 3;

    displayList(head);
    displayReverse(n2);

    std::cout << "\nLength of (doubly) linked-list is: " << listLength(head);

    freeList(head);

    return 0;
}
