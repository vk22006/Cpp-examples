#include <iostream>

class Node {
public:
    int value;
    Node* next;
};

//since we are passing address of the head node (which is already a pointer), we will pass argument as double-pointer
void insertFront(Node** head, int val) {
    //Create a new node and assign value
    Node* newnode = new Node();
    newnode->value = val;

    //insert newnode before head
    newnode->next = *head;

    //set newnode as the head pointer
    *head = newnode;
}

void insertEnd(Node** head, int val) {
    Node* newnode = new Node();
    newnode->value = val;
    newnode->next = NULL;                 //since the newnode will be the last, the next pointer should point NULL

    //If new node is empty, newnode will be head node
    if(*head==NULL) {
        *head = newnode;
        return;
    }
    //Find the last node
    Node* last = *head;
    while(last->next!=NULL) {
        last = last->next;
    }
    //Insert new node at next to last node
    last->next = newnode;
}

void insertAfter(Node* previous, int val) {
    if(previous==NULL) {
        std::cout << "Previous node cannot be null!";
        return;
    }

    Node* newnode = new Node();
    newnode->value = val;

    //connect next pointer of new node to the next node of previous
    newnode->next = previous->next;
    //next pointer of previous node should point new node
    previous->next = newnode;

}

void displayList(Node* n) {
    while(n!=NULL) {
        std::cout << n->value << ' ';
        n = n->next;                       //traversal to next node
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

void freeList(Node* n) {                   // used for deleting all the nodes. Useful for freeing space created by functions which can cause memory leaks
    Node* cur = n;
    while(cur!=NULL) {
        Node* nxt = cur->next;
        delete cur;
        cur = nxt;
    }
    std::cout << "\nMemory freed successfully!";
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

    //insertion
    insertFront(&head, 3);
    insertFront(&head, 15);
    insertEnd(&head, 24);
    insertEnd(&head, 13);
    insertAfter(n1, 5);

    displayList(head);
    std::cout << "\nLength of the linked list: " << listLength(head);

    //Freeing memory
    freeList(head);

    return 0;
}

