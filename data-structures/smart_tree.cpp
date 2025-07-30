/*---------------------------------------------
 TREE IMPLEMENTATION USING SMART POINTERS
 DATE : 20/07/2025
-----------------------------------------------*/

#include <iostream>
#include <memory>

struct Node {
    int data;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

std::unique_ptr<Node> CreateTreeNode(int data) {
    std::unique_ptr<Node> newnode = std::make_unique<Node>(data);
    return newnode;
}

void PreOrderTraversal(Node* root) {
    if(root==nullptr) return;

    std::cout << root->data << ' ';
    PreOrderTraversal(root->left.get());
    PreOrderTraversal(root->right.get());
}

void InOrderTraversal(Node* root) {
    if(root==nullptr) return;

    InOrderTraversal(root->left.get());
    std::cout << root->data << ' ';
    InOrderTraversal(root->right.get());
}

void PostOrderTraversal(Node* root) {
    if(root==nullptr) return;

    PostOrderTraversal(root->left.get());
    PostOrderTraversal(root->right.get());
    std::cout << root->data << ' ';
}

int main() {

    auto root = CreateTreeNode(2);
    root->left = CreateTreeNode(3);
    root->right = CreateTreeNode(6);
    root->right->left = CreateTreeNode(7);
    root->right->right = CreateTreeNode(9);

    std::cout << "Pre-order traversal: \n";
    PreOrderTraversal(root.get());
    std::cout << "\nIn-order traversal: \n";
    InOrderTraversal(root.get());
    std::cout << "\nPost-order traversal: \n";
    PostOrderTraversal(root.get());

    return 0;
}
