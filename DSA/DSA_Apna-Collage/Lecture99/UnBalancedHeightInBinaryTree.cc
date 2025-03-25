#include<bits/stdc++.h>
using namespace std;

// Structure to represent a node in the binary tree
struct Node {
    int data; // Data stored in the node
    Node* left; // Pointer to the left child node
    Node* right; // Pointer to the right child node

    // Constructor to initialize the node with a value
    Node(int val) {
        data = val; // Initialize data with the given value
        left = NULL; // Initialize left child pointer to NULL
        right = NULL; // Initialize right child pointer to NULL
    }
};

// Function to calculate the height of the binary tree
int calculateHeight(Node* root) {
    // Base case: if the tree is empty, its height is 0
    if (root == NULL) {
        return 0; // Return 0 for an empty tree
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = calculateHeight(root->left); // Calculate height of left subtree
    int rightHeight = calculateHeight(root->right); // Calculate height of right subtree

    // The height of the tree is the maximum height of its subtrees plus 1
    return max(leftHeight, rightHeight) + 1; // Return the maximum height plus 1
}

// Function to check if the binary tree is balanced
bool isBalancedTree(Node* root) {
    // Base case: an empty tree is balanced
    if (root == NULL) {
        return true; // Return true for an empty tree
    }

    // Recursively check if the left and right subtrees are balanced
    if (!isBalancedTree(root->left)) {
        return false; // If left subtree is not balanced, return false
    }
    if (!isBalancedTree(root->right)) {
        return false; // If right subtree is not balanced, return false
    }

    // Calculate the height of the left and right subtrees
    int leftHeight = calculateHeight(root->left); // Calculate height of left subtree
    int rightHeight = calculateHeight(root->right); // Calculate height of right subtree

    // A tree is balanced if the difference between the heights of its subtrees is at most 1
    if (abs(leftHeight - rightHeight) <= 1) {
        return true; // Return true if the tree is balanced
    } else {
        return false; // Return false if the tree is not balanced
    }
}

int main() {
    // Create an unbalanced binary tree
    Node* root = new Node(1); // Create root node with value 1
    root->left = new Node(2); // Create left child node with value 2
    root->left->left = new Node(3); // Create left-left grandchild node with value 3
    root->left->left->left = new Node(4); // Create left-left-left great-grandchild node with value 4
    root->left->left->left->left = new Node(5); // Create left-left-left-left great-great-grandchild node with value 5

    // Check if the tree is balanced
    if (isBalancedTree(root)) {
        cout << "Balanced Tree" << endl; // Print "Balanced Tree" if the tree is balanced
    } else {
        cout << "Unbalanced tree" << endl; // Print "Unbalanced tree" if the tree is not balanced
    }

    return 0;
}

/* 
Time Complexity Analysis:
// The time complexity of the calculateHeight function is O(n), where n is the number of nodes in the tree. 
// This is because the function recursively traverses the tree, visiting each node once.

// The time complexity of the isBalancedTree function is O(n), where n is the number of nodes in the tree. 
// This is because the function recursively traverses the tree, visiting each node once.

// The overall time complexity of the program is O(n), where n is the number of nodes in the tree.

Space Complexity Analysis:
// The space complexity of the program is O(h), where h is the height of the tree. 
// This is because the maximum depth of the recursive call stack is equal to the height of the tree.

// In the worst case, the tree is completely unbalanced, and the height of the tree is equal to the number of nodes (n). 
// Therefore, the space complexity is O(n) in the worst case.
*/