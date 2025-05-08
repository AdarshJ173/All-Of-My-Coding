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
    if(root == NULL){
        return true; // An empty tree is considered balanced
    }

    int leftHeight = calculateHeight(root->left); // Calculate height of left subtree
    int rightHeight = calculateHeight(root->right); // Calculate height of right subtree

    // Check if the absolute difference between left and right subtree heights is greater than 1
    if(abs(leftHeight - rightHeight) > 1){
        return false; // If the difference is greater than 1, the tree is unbalanced
    }

    // Recursively check if the left and right subtrees are balanced
    return isBalancedTree(root->left) && isBalancedTree(root->right);
}

int main() {
    // Create an unbalanced binary tree
    Node* root = new Node(1); // Create root node with value 1
    root->left = new Node(2); // Create left child node with value 2
    root->left->left = new Node(3); // Create left-left grandchild node with value 3
    root->left->left->left = new Node(4); // Create left-left-left great-grandchild node with value 4
    root->left->left->left->left = new Node(5); // Create left-left-left-left great-great-grandchild node with value 5

    // Create a balanced binary tree
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    // Check if the tree is balanced
    if(isBalancedTree(root2) == true){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }

    return 0;
}

/* 
Time Complexity Analysis:
The calculateHeight function has a time complexity of O(n), where n is the number of nodes in the tree, 
because it recursively visits each node in the tree.

The isBalancedTree function has a time complexity of O(n^2) in the worst case, 
because it calls calculateHeight for each node, resulting in multiple recursive calls.

Space Complexity Analysis:
The space complexity of the code is O(h), where h is the height of the tree, 
because of the recursive call stack. In the worst case, the tree is skewed, and h = n, resulting in O(n) space complexity.
*/