#include<iostream>
using namespace std;

//! PostOrder Traversal

// In PostOrder Traversal, we recursively traverse the left subtree, recursively traverse the right subtree, and then visit the current node.

// The basic idea is to:
// 1. Traverse the left subtree (recursively)
// 2. Traverse the right subtree (recursively)
// 3. Visit the current node (root)

// Here's the implementation:
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to perform PostOrder Traversal
void postOrderTraversal(Node* root) {
    // Base case: if the tree is empty (root is NULL), return
    if (root == NULL) {
        return;
    }

    // 1. Traverse the left subtree (recursively)
    postOrderTraversal(root->left);

    // 2. Traverse the right subtree (recursively)
    postOrderTraversal(root->right);

    // 3. Visit the current node (root)
    cout << root->data << " "; // print the data of the current node
}

int main() {
    // Create a sample binary tree
    Node* root = new Node{1, new Node{2, new Node{4}, new Node{5}}, new Node{3, new Node{6}, new Node{7}}};

    // Perform PostOrder Traversal
    cout << "PostOrder Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}