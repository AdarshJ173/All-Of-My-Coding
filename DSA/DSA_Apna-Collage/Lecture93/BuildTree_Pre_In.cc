// Include the necessary header files for input/output and standard library functions
#include<bits/stdc++.h>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Define a struct to represent a node in the binary tree
struct TreeNode {
    // The data stored in the node
    int data;
    // Pointers to the left and right child nodes
    TreeNode *left;
    TreeNode *right;
};

// Function to search for a value in the in-order traversal array
// Returns the index of the value if found, -1 otherwise
int searchInOrder(int inOrder[], int start, int end, int currentValue) {
    // Iterate through the in-order traversal array from start to end
    for (int i = start; i <= end; i++) {
        // Check if the current value matches the value at the current index
        if (inOrder[i] == currentValue) {
            // Return the index of the value
            return i;
        }
    }
    // Return -1 if the value is not found
    return -1;
}

// Function to build the binary tree from pre-order and in-order traversal arrays
// Returns the root node of the constructed tree
TreeNode* buildTree(int preOrder[], int inOrder[], int start, int end) {
    // Static variable to keep track of the current index in the pre-order traversal array
    static int index = 0;

    // Base case: if the start index is greater than the end index, return NULL
    if (start > end) {
        return NULL;
    }

    // Get the current value from the pre-order traversal array
    int currentValue = preOrder[index];
    // Increment the index for the next iteration
    index++;

    // Create a new node with the current value
    TreeNode* node = new TreeNode();
    node->data = currentValue;

    // Base case: if the start index is equal to the end index, return the node
    if (start == end) {
        return node;
    }

    // Find the index of the current value in the in-order traversal array
    int position = searchInOrder(inOrder, start, end, currentValue);

    // Recursively build the left subtree
    node->left = buildTree(preOrder, inOrder, start, position - 1);
    // Recursively build the right subtree
    node->right = buildTree(preOrder, inOrder, position + 1, end);

    // Return the constructed node
    return node;
}

// Function to print the in-order traversal of the binary tree
void printInOrder(TreeNode* root) {
    // Base case: if the root is NULL, return
    if (root == NULL) {
        return;
    }

    // Recursively print the left subtree
    printInOrder(root->left);
    // Print the value of the current node
    cout << root->data << " ";
    // Recursively print the right subtree
    printInOrder(root->right);
}

int main() {
    // Define the pre-order and in-order traversal arrays
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    // Build the binary tree from the pre-order and in-order traversal arrays
    TreeNode* root = buildTree(preOrder, inOrder, 0, 4);

    // Print the in-order traversal of the constructed tree
    printInOrder(root);
    cout << endl;

    return 0;
}

// Time complexity analysis:
// The time complexity of the buildTree function is O(n^2) due to the nested loops in the searchInOrder function.
// The time complexity of the printInOrder function is O(n) since it visits each node once.
// The overall time complexity of the program is O(n^2) due to the buildTree function.

// Space complexity analysis:
// The space complexity of the buildTree function is O(n) since it creates a new node for each value in the pre-order traversal array.
// The space complexity of the printInOrder function is O(1) since it only uses a constant amount of space to store the current node.
// The overall space complexity of the program is O(n) due to the buildTree function.