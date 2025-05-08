#include<bits/stdc++.h>
// Include the necessary header files for input/output and other standard library functions

using namespace std;
// Use the standard namespace to avoid having to prefix standard library functions with std::

/*
Diameter: Number of nodes in the longest path between any 2 leaves
*/
// This comment explains the concept of diameter in a tree, which is the longest path between any two leaf nodes

struct Node{
    int data;
    // Each node in the tree has an integer data value
    Node* left;
    // Each node has a pointer to its left child node
    Node* right;
    // Each node has a pointer to its right child node

    Node(int val){
        data = val;
        // Initialize the node's data value
        left = NULL;
        // Initialize the left child pointer to NULL
        right = NULL;
        // Initialize the right child pointer to NULL
    }
};
// This struct represents a node in the binary tree

int calculateHeight(Node* root){
    // This function calculates the height of the tree rooted at the given node
    if(root == NULL){
        // If the root node is NULL, the height is 0
        return 0;
    }

    // Calculate the height of the left and right subtrees
    return max(calculateHeight(root->left), calculateHeight(root->right)) + 1;
    // The height of the tree is the maximum height of its subtrees plus 1
}

int calculateDiameter(Node* root){
    // This function calculates the diameter of the tree rooted at the given node
    if(root == NULL){
        // If the root node is NULL, the diameter is 0
        return 0;
    }

    // Calculate the heights of the left and right subtrees
    int lHeight = calculateHeight(root->left);
    int rHeight = calculateHeight(root->right);

    // Calculate the current diameter, which is the sum of the heights of the left and right subtrees plus 1
    int currDiameter = lHeight + rHeight + 1;

    // Calculate the diameters of the left and right subtrees
    int lDiameter = calculateDiameter(root->left);
    int rDiameter = calculateDiameter(root->right);

    // Return the maximum of the current diameter and the diameters of the left and right subtrees
    return max(currDiameter, max(lDiameter, rDiameter));
}

int main(){
    // This is the main function where the program starts execution

    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Calculate and print the diameter of the tree
    cout << calculateDiameter(root) << endl;

    return 0;
}
// The main function returns 0 to indicate successful execution

/*
Time Complexity Analysis:

The calculateHeight function has a time complexity of O(n), where n is the number of nodes in the tree, because it recursively visits each node once.

The calculateDiameter function has a time complexity of O(n^2), because it calls the calculateHeight function for each node, resulting in a quadratic number of recursive calls.

The space complexity is O(h), where h is the height of the tree, because of the recursive function call stack.

Overall, the time complexity of the program is O(n^2) and the space complexity is O(h).
*/