#include<iostream>
using namespace std;

//! InOrder Traversal

// In InOrder Traversal, we recursively traverse the left subtree, visit the current node, and then recursively traverse the right subtree.

// The basic idea is to:
// 1. Traverse the left subtree (recursively)
// 2. Visit the current node (root)
// 3. Traverse the right subtree (recursively)

// Here's the implementation:
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to perform InOrder Traversal
void inOrderTraversal(Node* root) {
    // Base case: if the tree is empty (root is NULL), return
    if (root == NULL) {
        return;
    }

    // 1. Traverse the left subtree (recursively)
    inOrderTraversal(root->left);

    // 2. Visit the current node (root)
    cout << root->data << " "; // print the data of the current node

    // 3. Traverse the right subtree (recursively)
    inOrderTraversal(root->right);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node{1, new Node{2, new Node{4}, new Node{5}}, new Node{3, new Node{6}, new Node{7}}};

    // Perform InOrder Traversal
    cout << "InOrder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}