// Include the bits/stdc++.h header file, which includes all standard library headers
#include<bits/stdc++.h>

// Use the standard namespace to avoid having to prefix standard library elements with std::
using namespace std;

/*
Properties of Binary Tree
1. Maximum nodes at level L = 2^L
2. Maximum nodes in a tree of height H is 2^H-1
3. For N nodes, minimum possible height or minimum number of level are log2(N+1)
4. A binary tree with L leaves has at least log2(N+1)+1 number of levels
*/

// Define a struct to represent a node in the binary tree
struct Node {
    // Data stored in the node
    int data;

    // Pointers to the left and right child nodes
    struct Node* left;
    struct Node* right;

    // Constructor to initialize a node with a given value
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main() {
    // Create the root node with value 1
    struct Node* root = new Node(1);

    // Create the left child node of the root with value 2
    root->left = new Node(2);

    // Create the right child node of the root with value 3
    root->right = new Node(3);

    // Create the left grandchild node of the root with value 4
    root->left->left = new Node(4);

    // Create the right grandchild node of the root with value 5
    root->left->right = new Node(5);

    // Time complexity analysis:
    // The time complexity of this code is O(1), as it only performs a constant number of operations
    // Space complexity analysis:
    // The space complexity of this code is O(1), as it only uses a constant amount of memory to store the nodes
    // The total number of nodes created is 5, which is a constant
    // The maximum depth of the tree is 2, which is also a constant
}