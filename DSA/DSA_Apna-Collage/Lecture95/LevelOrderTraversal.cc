#include<bits/stdc++.h>
// Including the standard library for input-output operations and other functionalities

using namespace std;
// Bringing the standard namespace into scope to avoid having to prefix standard library elements with std::

struct Node {
    // Defining a struct to represent a node in a binary tree
    int data;
    // Data stored in the node
    Node* left;
    // Pointer to the left child node
    Node* right;
    // Pointer to the right child node

    Node(int val) {
        // Constructor to initialize a node with a given value
        data = val;
        left = NULL;
        // Initializing the left child pointer to NULL
        right = NULL;
        // Initializing the right child pointer to NULL
    }
};

void printLevelOrder(Node* root) {
    // Function to print the nodes of a binary tree in level order
    if (root == NULL) {
        // Base case: if the tree is empty, return immediately
        return;
    }

    queue<Node*> q;
    // Creating a queue to store nodes to be processed
    q.push(root);
    // Enqueuing the root node
    q.push(NULL);
    // Enqueuing a NULL node to mark the end of the current level

    while (!q.empty()) {
        // Loop until all nodes have been processed
        Node* node = q.front();
        // Dequeuing the next node to be processed
        q.pop();

        if (node != NULL) {
            // If the node is not NULL, process it
            cout << node->data << " ";
            // Printing the node's data
            if (node->left) {
                q.push(node->left);
                // Enqueuing the left child node if it exists
            }
            if (node->right) {
                q.push(node->right);
                // Enqueuing the right child node if it exists
            }
        } else if (!q.empty()) {
            // If the node is NULL, it marks the end of the current level
            q.push(NULL);
            // Enqueuing another NULL node to mark the end of the next level
        }
    }
}

int main() {
    // Main function to test the printLevelOrder function
    Node* root = new Node(1);
    // Creating the root node with value 1
    root->left = new Node(2);
    // Creating the left child node with value 2
    root->right = new Node(3);
    // Creating the right child node with value 3

    root->left->left = new Node(4);
    // Creating the left-left grandchild node with value 4
    root->left->right = new Node(5);
    // Creating the left-right grandchild node with value 5
    root->right->left = new Node(6);
    // Creating the right-left grandchild node with value 6
    root->right->right = new Node(7);
    // Creating the right-right grandchild node with value 7

    printLevelOrder(root);
    // Calling the printLevelOrder function to print the tree nodes in level order

    return 0;
}

/* Complexity Analysis:
 * Time complexity: O(n), where n is the number of nodes in the tree.
 * This is because each node is processed exactly once in the level order traversal.
 * Space complexity: O(m), where m is the maximum number of nodes at any level in the tree.
 * This is because the queue stores at most m nodes at any time during the traversal.
 */