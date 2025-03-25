// Include the necessary header files for input-output operations
#include<bits/stdc++.h>

// Use the standard namespace for convenience
using namespace std;

/*
 * Node structure to represent a tree node
 */
struct TreeNode {

    // Data stored in the node
    int data;

    // Pointers to the left and right child nodes
    TreeNode* left;
    TreeNode* right;

    /*
     * Constructor to initialize a new node with the given value
     */
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

};

/*
 * Function to calculate the height of the tree
 */
int calculateTreeHeight(TreeNode* root) {

    // Base case: If the tree is empty (i.e., root is NULL), return 0
    if (root == NULL) {
        return 0;
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = calculateTreeHeight(root->left);
    int rightHeight = calculateTreeHeight(root->right);

    // Return the maximum height of the left and right subtrees plus 1 (for the current node)
    return max(leftHeight, rightHeight) + 1;

}

int main() {

    // Create the root node with value 1
    TreeNode* root = new TreeNode(1);

    // Create the left child node with value 2
    root->left = new TreeNode(2);

    // Create the right child node with value 3
    root->right = new TreeNode(3);

    // Create the left-left grandchild node with value 4
    root->left->left = new TreeNode(4);

    // Create the left-right grandchild node with value 4
    root->left->right = new TreeNode(4);

    // Create the right-left grandchild node with value 4
    root->right->left = new TreeNode(4);

    // Create the right-right grandchild node with value 4
    root->right->right = new TreeNode(4);

    // Calculate and print the height of the tree
    cout << "Tree Height: " << calculateTreeHeight(root) << endl;

    return 0;
}

/*
 * Complexity Analysis:
 *
 * Time Complexity: O(n), where n is the number of nodes in the tree.
 * The calculateTreeHeight function recursively traverses the tree, visiting each node once.
 *
 * Space Complexity: O(h), where h is the height of the tree.
 * The maximum depth of the recursion call stack is equal to the height of the tree.
 */