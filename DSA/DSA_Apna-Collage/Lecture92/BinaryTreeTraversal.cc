#include<iostream>
using namespace std;

//! PreOrder Traversal

// In PreOrder Traversal, we visit the current node first, then recursively traverse the left subtree, and finally recursively traverse the right subtree.

// The basic idea is to:
// 1. Visit the current node (root)
// 2. Traverse the left subtree (recursively)
// 3. Traverse the right subtree (recursively)

// Here's the implementation:
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to perform PreOrder Traversal
void preOrderTraversal(Node* root) {
    // Base case: if the tree is empty (root is NULL), return
    if (root == NULL) {
        return;
    }

    // 1. Visit the current node (root)
    cout << root->data << " "; // print the data of the current node

    // 2. Traverse the left subtree (recursively)
    preOrderTraversal(root->left);

    // 3. Traverse the right subtree (recursively)
    preOrderTraversal(root->right);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node{1, new Node{2, new Node{4}, new Node{5}}, new Node{3, new Node{6}, new Node{7}}};

    // Perform PreOrder Traversal
    cout << "PreOrder Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    return 0;
}