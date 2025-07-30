#include <iostream>

class Node {
public:
    int value;
    Node* next;
};

void displayList(Node* n) {
    while(n!=NULL) {
        std::cout << n->value << ' ';
        n = n->next;                  //traversal to next node
    }
}

int listLength(Node* n) {
    int len = 0;
    while(n!=NULL) {
        len += 1;
        n = n->next;
    }
    return len;
}

int main() {
    Node* head = new Node(); // creation of head node
    Node* n1 = new Node();   // manual creation of list nodes
    Node* n2 = new Node();

    //Connecting each nodes to form linked list
    head->next = n1;
    n1->next = n2;
    n2->next = NULL;

    //Assigning values to each node
    head->value = 1;
    n1->value = 4;
    n2->value = 7;

    displayList(head);
    std::cout << "\nLength of the linked list: " << listLength(head);

    //Freeing memory
    delete head;
    delete n1;
    delete n2;

    return 0;
}
