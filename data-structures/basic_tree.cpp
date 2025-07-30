#include <iostream>

class Node {
public:
    int value;
    Node* left;
    Node* right;
};

Node* CreateNode(int value) {
    Node* newnode = new Node();
    newnode->value = value;
    newnode->left = newnode->right = nullptr;
    return newnode;
}

void PreOrderTraversal(Node* root) {
    if(root==nullptr) return;

    std::cout << root->value << ' ';
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node* root) {
    if(root==nullptr) return;

    InOrderTraversal(root->left);
    std::cout << root->value << ' ';
    InOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root) {
    if(root==nullptr) return;

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    std::cout << root->value << ' ';
}

int main() {
    Node* head = CreateNode(2);
    head->left = CreateNode(3);
    head->right = CreateNode(6);
    head->right->left = CreateNode(7);
    head->right->right = CreateNode(9);

    std::cout << "Pre-order traversal: \n";
    PreOrderTraversal(head);

    std::cout << "\nIn-order traversal: \n";
    InOrderTraversal(head);

    std::cout << "\nPost-order traversal: \n";
    PostOrderTraversal(head);

    delete head;

    return 0;
}
