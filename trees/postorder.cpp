#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void postorderTraversal(Node* root) {
    if (root == nullptr) return;

    postorderTraversal(root->left);   
    postorderTraversal(root->right); 
    cout << root->data << " ";        
}

int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Postorder Traversal: ";
    postorderTraversal(root);  
    return 0;
}
