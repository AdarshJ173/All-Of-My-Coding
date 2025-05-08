#include<bits/stdc++.h>  // Including the standard library header file, which includes all standard C++ libraries.
using namespace std;    // Using the standard namespace to avoid prefixing 'std::' before standard functions.

class Node {    // Class representing a node in the linked list.
public:
    int data;  // Variable to store the data value of the node.
    Node* next;  // Pointer to the next node in the linked list.

    // Constructor that initializes the node with a value and sets the next pointer to NULL.
    Node(int value) {
        data = value;   // Assigning the input value to the data member.
        next = NULL;    // Initializing the next pointer to NULL, indicating the end of the list.
    }
};

// Function to insert a new node at the head (beginning) of the linked list.
void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node(value);  // Create a new node with the given value.
    newNode->next = head;  // Link the new node to the current head.
    head = newNode;   // Update the head to be the new node.
}

// Function to insert a new node at the tail (end) of the linked list.
void insertAtTail(Node* &head, int value) {
    Node* newNode = new Node(value);  // Create a new node with the given value.

    if (head == NULL) {  // If the list is empty, the new node becomes the head.
        head = newNode;  // Assign the new node as the head of the list.
        return;  // Exit the function since insertion is complete.
    }

    Node* temp = head;  // Temporary pointer to traverse the list.
    while (temp->next != NULL) {  // Traverse the list until the last node.
        temp = temp->next;  // Move to the next node in the list.
    }
    temp->next = newNode;  // Link the last node to the new node, adding it at the end.
}

// Function to display the linked list elements.
void display(Node* head) {
    Node* temp = head;  // Temporary pointer to traverse the list.
    while (temp != NULL) {  // Traverse the list until the end (NULL).
        cout << temp->data << "->";  // Print the data of each node followed by an arrow.
        temp = temp->next;  // Move to the next node in the list.
    }
    cout << "NULL" << endl;  // Print NULL to signify the end of the list.
}

// Function to search for a key in the linked list.
bool search(Node* head, int key) {
    Node* temp = head;  // Temporary pointer to traverse the list.
    while (temp != NULL) {  // Traverse the list until the end.
        if (temp->data == key) {  // If the current node's data matches the key, return true.
            return true;
        }
        temp = temp->next;  // Move to the next node in the list.
    }
    return false;  // If the key is not found, return false.
}

int main() {
    // The following block comments explain the limitations of arrays and the advantages of linked lists.
    /*
    Limitations of arrays:
    - Fixed size: Arrays have a pre-defined size.
    - Contiguous block of memory: Memory is allocated in a continuous block.
    - Insertion or deletion is costly: Operations like insertion and deletion require shifting elements, making them costly.

    Properties of Linked List:
    - Dynamic size: The size of a linked list can grow or shrink dynamically.
    - Non-contiguous memory: Memory is not allocated contiguously, each node points to the next.
    - Easier insertion and deletion: Inserting or deleting nodes in a linked list is easier and faster, especially at the beginning or end.

    Structure of a Node in Linked List:
    - | Data | Next | : Data stores the value, Next stores the pointer to the next node.
    - Head pointer stores the address of the first node.
    - The last node's next pointer is NULL, indicating the end of the list.
    */

    Node* head = NULL;  // Initialize the head pointer to NULL, indicating an empty list.

    // Insert elements at the tail of the linked list.
    insertAtTail(head, 1);  // List: 1
    insertAtTail(head, 2);  // List: 1 -> 2
    insertAtTail(head, 3);  // List: 1 -> 2 -> 3

    // Display the current state of the list.
    display(head);  // Output: 1->2->3->NULL

    // Insert an element at the head of the linked list.
    insertAtHead(head, 4);  // List: 4 -> 1 -> 2 -> 3
    display(head);  // Output: 4->1->2->3->NULL

    // Search for elements in the list.
    cout << search(head, 5) << endl;  // Output: 0 (false) - 5 is not in the list.
    cout << search(head, 3) << endl;  // Output: 1 (true) - 3 is in the list.

    return 0;  // End of the program.
}
