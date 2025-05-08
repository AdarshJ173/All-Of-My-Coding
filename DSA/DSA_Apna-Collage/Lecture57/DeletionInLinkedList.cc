#include<iostream>
using namespace std;

// Define a class to represent a node in the linked list
class LinkedListNode {
public:
    int data; // Store the value of the node
    LinkedListNode* next; // Pointer to the next node in the list

    // Constructor to initialize the node with a given value
    LinkedListNode(int value) {
        data = value;
        next = NULL; // Initialize next pointer to NULL
    }
};

// Function to insert a new node at the head of the linked list
void insertAtHead(LinkedListNode* &head, int value) {
    // Create a new node with the given value
    LinkedListNode* newNode = new LinkedListNode(value);
    // Set the next pointer of the new node to the current head
    newNode->next = head;
    // Update the head pointer to point to the new node
    head = newNode;
}

// Function to insert a new node at the tail of the linked list
void insertAtTail(LinkedListNode* &head, int value) {
    // Create a new node with the given value
    LinkedListNode* newNode = new LinkedListNode(value);

    // If the list is empty, set the head to the new node
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    LinkedListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Set the next pointer of the last node to the new node
    temp->next = newNode;
}

// Function to display the linked list
void display(LinkedListNode* head) {
    // Traverse the list and print the values of each node
    LinkedListNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to search for a value in the linked list
bool search(LinkedListNode* head, int key) {
    // Traverse the list and check if the value is found
    LinkedListNode* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Function to delete the head node of the linked list
void deleteAtHead(LinkedListNode* &head) {
    // Store the head node in a temporary variable
    LinkedListNode* toDelete = head;
    // Update the head pointer to point to the next node
    head = head->next;
    // Delete the head node
    delete toDelete;
}

// Function to delete a node with a given value from the linked list
void deletion(LinkedListNode* &head, int value) {
    // If the list is empty, return
    if (head == NULL) {
        return;
    }
    // If the head node has the value to be deleted, delete it
    if (head->data == value) {
        deleteAtHead(head);
        return;
    }
    // Traverse the list to find the node with the value to be deleted
    LinkedListNode* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    // If the node is found, delete it
    if (temp->next != NULL) {
        LinkedListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

int main() {
    // Create an empty linked list
    LinkedListNode* head = NULL;

    // Insert nodes at the tail of the list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    // Display the list
    display(head);

    // Insert a node at the head of the list
    insertAtHead(head, 4);
    display(head);

    // Search for a value in the list
    cout << search(head, 5) << endl;
    cout << search(head, 3) << endl;

    // Delete the head node
    deleteAtHead(head);
    display(head);

    return 0;
}