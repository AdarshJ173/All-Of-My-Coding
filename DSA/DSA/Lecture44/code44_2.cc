/// Doubly linked list
/*
A doubly linked list is a data structure that consists of nodes where each node contains a data element and two pointers, one pointing to the previous node and one pointing to the next node. This allows for traversal in both directions, forward and backward, making it easier to navigate the list compared to a singly linked list.

In a doubly linked list, each node has three parts: data, a pointer to the previous node, and a pointer to the next node. The first node's previous pointer and the last node's next pointer point to NULL to indicate the start and end of the list.

Doubly linked lists support operations like insertion and deletion at both the beginning and end of the list, as well as traversal in both directions. This makes them suitable for scenarios where frequent insertions and deletions are required, and when bidirectional traversal is needed.
*/

#include<iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

class Node{ // Define a class named Node
    public: // Access specifier for public members
    int data; // Data stored in the node
    Node* prev; // Pointer to the previous node
    Node* next; // Pointer to the next node

    //constructor
    Node(int d){ // Constructor with data parameter
        this->data = d; // Initialize data with the provided value
        this->prev = NULL; // Initialize prev pointer to NULL
        this->next = NULL; // Initialize next pointer to NULL
    }

    ~Node(){ // Destructor
        int val = this->data; // Store data value before deletion
        if(next != NULL){ // Check if next node exists
            delete next; // Recursively delete the next node
            next = NULL; // Set next pointer to NULL
        }
        cout<<"Deleting node with value: "<<val<<endl; // Display message about deleting the node
    }

};

void print(Node* &head){ // Function to print the linked list starting from head
    Node* temp = head; // Initialize a temporary pointer to head
    while(temp!=NULL){ // Loop until the end of the list
        cout<<temp->data<<" "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    cout<<endl; // Print a new line after printing all nodes
}

int getLength(Node* &head){ // Function to get the length of the linked list starting from head
    int len = 0; // Initialize length counter
    Node* temp = head; // Initialize a temporary pointer to head
    while(temp!=NULL){ // Loop through all nodes
        len++; // Increment the length counter
        temp = temp->next; // Move to the next node
    }
    return len; // Return the total length of the linked list
}

void insertAtHead(Node* &head, Node* &tail, int d){ // Function to insert a new node at the head
    if(head==NULL){ // Check if the list is empty
        Node* temp = new Node(d); // Create a new node with the provided data
        head = temp; // Update head to the new node
        tail = temp; // Update tail to the new node
        return; // Exit the function
    }
    else{ // If the list is not empty
        Node* temp = new Node(d); // Create a new node with the provided data
        temp->next = head; // Set the new node's next pointer to the current head
        head->prev = temp; // Set the current head's previous pointer to the new node
        head = temp; // Update head to the new node
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){ // Function to insert a new node at the tail
    if(tail==NULL){ // Check if the list is empty
        Node* temp = new Node(d); // Create a new node with the provided data
        tail = temp; // Update tail to the new node
        head = temp; // Update head to the new node
        return; // Exit the function
    }
    else{ // If the list is not empty
        Node* temp = new Node(d); // Create a new node with the provided data
        temp->prev = tail; // Set the new node's previous pointer to the current tail
        tail->next = temp; // Set the current tail's next pointer to the new node
        tail = temp; // Update tail to the new node
    }
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){ // Function to insert a new node at a specific position
    if(position==1){ // Check if the position is the head
        insertAtHead(head, tail, d); // Call insertAtHead function
        return; // Exit the function
    }
    
    Node* temp = head; // Initialize a temporary pointer to head
    int cnt = 1; // Initialize a counter

    while (cnt<position-1 && temp!=NULL) // Loop until reaching the position-1 or end of list
    {
        temp = temp->next; // Move to the next node
        cnt++; // Increment the counter
    }

    if (temp==NULL) // Check if the position is beyond the end of the list
    {
        insertAtTail(head, tail, d); // Call insertAtTail function
        return; // Exit the function
    }
    
    Node* nodeToInsert = new Node(d); // Create a new node with the provided data
    nodeToInsert->next = temp->next; // Set the new node's next pointer
    if(temp->next != NULL){ // Check if the next node exists
        temp->next->prev = nodeToInsert; // Set the next node's previous pointer to the new node
    }
    temp->next = nodeToInsert; // Insert the new node at the specified position
    nodeToInsert->prev = temp; // Set the new node's previous pointer
}

void deleteNode(Node* &head, int position){ // Function to delete a node at a specific position
    if(position == 1){ // Check if the node to delete is the head
        Node* temp = head; // Store head in temp
        temp->next->prev = NULL; // Set the next node's previous pointer to NULL
        head = temp->next; // Update head to the next node
        temp->next = NULL; // Set temp's next pointer to NULL
        delete temp; // Delete the node
        return; // Exit the function
    }
    else{ // If the node to delete is not the head
        Node* curr = head; // Initialize current pointer to head
        Node* prev = NULL; // Initialize previous pointer to NULL

        int cnt = 1; // Initialize counter
        while(cnt < position && curr != NULL){ // Loop until reaching the position or end of list
            prev = curr; // Update previous pointer
            curr = curr->next; // Move to next node
            cnt++; // Increment counter
        }
        
        curr->prev = NULL; // Set current node's previous pointer to NULL
        prev->next = curr->next; // Update previous node's next pointer
        curr->next = NULL; // Set current node's next pointer to NULL

        delete curr; // Delete the node
    }
};

int main(){ // Main function
    Node* head = NULL; // Initialize head pointer to NULL
    Node* tail = NULL; // Initialize tail pointer to NULL

    insertAtHead(head, tail, 11); // Insert node with data 11 at the head
    print(head); // Print the linked list
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    insertAtHead(head, tail, 13); // Insert node with data 13 at the head
    print(head); // Print the linked list
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node

    insertAtHead(head, tail, 8); // Insert node with data 8 at the head
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    print(head); // Print the linked list

    insertAtTail(head, tail, 25); // Insert node with data 25 at the tail
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    print(head); // Print the linked list

    insertAtPosition(head, tail, 2, 100); // Insert node with data 100 at position 2
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    print(head); // Print the linked list

    insertAtPosition(head, tail, 1, 101); // Insert node with data 101 at position 1
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    print(head); // Print the linked list

    insertAtPosition(head, tail, 8, 101); // Insert node with data 101 at position 8
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node
    print(head); // Print the linked list

    deleteNode(head, 1); // Delete node at position 1
    print(head); // Print the linked list
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node

    cout<<"Length: "<<getLength(head)<<endl; // Print the length of the linked list

    return 0; // Return 0 to indicate successful execution
}
