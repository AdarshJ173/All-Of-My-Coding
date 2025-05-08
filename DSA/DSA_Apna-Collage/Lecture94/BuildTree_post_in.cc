#include<bits/stdc++.h>
// Including the standard library for input-output operations and other functionalities

using namespace std;
// Using the standard namespace to avoid prefixing standard library elements with std::

struct Node {
    int data;
    // Data member to store the value of the node
    Node* left;
    // Pointer to the left child node
    Node* right;
    // Pointer to the right child node
};

// Function to search for a value in the inOrder array
int search(int inOrder[], int start, int end, int val){
    // Iterate through the inOrder array from start to end
    for(int i = start; i <= end; i++){
        // Check if the current element is equal to the value being searched
        if(inOrder[i] == val ){
            // Return the index of the found value
            return i;
        }
    }
    // Return -1 if the value is not found
    return -1;
}

// Function to build the binary tree from postOrder and inOrder arrays
Node* buildTree(int postOrder[], int inOrder[], int start, int end){
    static int idx = 4;
    // Static variable to keep track of the current index in the postOrder array

    if(start > end){
        // Base case: if the start index is greater than the end index, return NULL
        return NULL;
    }

    if(idx < 0){
        // Base case: if the idx is less than 0, return NULL
        return NULL;
    }

    int val = postOrder[idx];
    // Get the current value from the postOrder array
    idx--;
    // Decrement the index for the next iteration

    Node* curr = new Node();
    // Create a new node
    curr->data = val;
    // Assign the value to the node
    curr->left = NULL;
    // Initialize the left child to NULL
    curr->right = NULL;
    // Initialize the right child to NULL

    if(start == end){
        // If the start and end indices are equal, return the current node
        return curr;
    }

    int pos = search(inOrder, start, end, val);
    // Search for the index of the current value in the inOrder array

    if(pos == -1){
        // If the value is not found, return NULL
        return NULL;
    }

    curr->right = buildTree(postOrder, inOrder, pos + 1, end);
    // Recursively build the right subtree
    curr->left = buildTree(postOrder, inOrder, start, pos - 1);
    // Recursively build the left subtree

    return curr;
    // Return the root node of the constructed subtree
}

// Function to print the inOrder traversal of the binary tree
void inOrderPrint(Node* root){
    if(root == NULL){
        // Base case: if the root is NULL, return
        return;
    }

    inOrderPrint(root->left);
    // Recursively print the left subtree
    cout << root->data << " ";
    // Print the current node's value
    inOrderPrint(root->right);
    // Recursively print the right subtree
}

int main(){
    int postOrder[] = {4, 2, 5, 3, 1};
    // PostOrder array representing the binary tree
    int inOrder[] = {4, 2, 1, 5, 3};
    // InOrder array representing the binary tree

    Node* root = buildTree(postOrder, inOrder, 0, 4);
    // Build the binary tree from the postOrder and inOrder arrays

    inOrderPrint(root);
    // Print the inOrder traversal of the constructed

return 0;
}