// Count leaf nodes in a binary tree
// A leaf node is a node with no children (left and right are NULL)

#include<iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to count leaf nodes in a binary tree
int countLeafNodes(TreeNode* root) {
    // If the root is NULL, return 0
    if (root == NULL) {
        return 0;
    }
    
    // If the root is a leaf node, return 1
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    
    // Recursively count leaf nodes in the left and right subtrees
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}