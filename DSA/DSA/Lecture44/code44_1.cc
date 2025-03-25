#include<iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

// Node class to represent individual nodes in the linked list
class Node{
    public:
    int data; // Data stored in the node
    Node* next; // Pointer to the next node

    // Constructor to initialize data and next pointer
    Node(int data){ // Constructor with data parameter
        this->data = data; // Initialize data
        this->next = NULL; // Initialize next pointer to NULL
    }

    // Destructor to free memory and display a message
    ~Node(){ // Destructor
        int value = this->data; // Store data value
        if (this->next != NULL) // Check if next pointer is not NULL
        {
            delete next; // Recursively delete next node
            this->next = NULL; // Set next pointer to NULL
        }
        cout<<"Memory is freed for node with data "<<value<<endl; // Display message
    }

};

// Function to insert a new node at the head of the linked list
void InsertAtHead(Node* &head, int data){ // Function to insert at the head with head pointer and data
    Node* newNode = new Node(data); // Create a new node with data
    newNode->next = head; // Set new node's next pointer to current head
    head = newNode; // Update head to new node
};

// Function to insert a new node at the tail of the linked list
void InsertAtTail(Node* &tail, int data){ // Function to insert at the tail with tail pointer and data
    Node* temp = new Node(data); // Create a new node with data
    tail->next = temp; // Set current tail's next pointer to new node
    tail = temp; // Update tail to new node
};

// Function to print the elements of the linked list
void print(Node* &head){ // Function to print with head pointer
    Node* temp = head; // Initialize temp pointer to head
    while(temp != NULL){ // Loop until temp reaches end of list
        cout << temp->data << " "; // Print data of current node
        temp = temp->next; // Move to next node
    }
    cout<<endl; // Print new line
};

// Function to insert a new node at a specific position in the linked list
void InsertAtPosition(Node* &tail, Node* &head, int position, int d){ // Function to insert at a specific position with tail, head, position, and data
    if (position == 1) // Check if position is 1
    {
        InsertAtHead(head, d); // Call InsertAtHead function
        return; // Exit function
    }
    
    Node* temp = head; // Initialize temp pointer to head
    int cnt = 1; // Initialize counter

    while(cnt < position-1 && temp != NULL){ // Loop until reaching the position-1 or end of list
        temp = temp->next; // Move to next node
        cnt++; // Increment counter
    }

    if (temp == NULL) // Check if temp reached end of list
    {
        InsertAtTail(tail, d); // Call InsertAtTail function
        return; // Exit function
    }
    
    Node* nodeToInsert = new Node(d); // Create a new node with data
    nodeToInsert->next = temp->next; // Set new node's next pointer
    temp->next = nodeToInsert; // Insert new node at the specified position

};

// Function to delete a node at a specific position in the linked list
void deleteNode(Node* &head, int position){ // Function to delete a node at a specific position with head pointer and position
    if(position == 1){ // Check if position is 1
        Node* temp = head; // Store head in temp
        head = head->next; // Update head to next node
        temp->next = NULL; // Set temp's next pointer to NULL
        delete temp; // Delete the node
        return; // Exit function
    }
    else{
        Node* curr = head; // Initialize current pointer to head
        Node* prev = NULL; // Initialize previous pointer to NULL

        int cnt = 1; // Initialize counter
        while(cnt < position && curr != NULL){ // Loop until reaching the position or end of list
            prev = curr; // Update previous pointer
            curr = curr->next; // Move to next node
            cnt++; // Increment counter
        }
        if(curr != NULL){ // Check if current node exists
            prev->next = curr->next; // Update previous node's next pointer
            curr->next = NULL; // Set current node's next pointer to NULL
            delete curr; // Delete the node
        }
    }

};

int main(){

    // Creating the first node with data 10
    Node *node1 = new Node(10); // Create the first node with data 10

    Node* head = node1; // Initialize head to the first node
    Node* tail = node1; // Initialize tail to the first node
    print(head); // Print the linked list

    // Inserting nodes at the tail of the linked list
    InsertAtTail(head, 12); // Insert node with data 12 at the tail

    // Inserting nodes at the head of the linked list
    InsertAtHead(head, 12); // Insert node with data 12 at the head
    print(head); // Print the linked list

    InsertAtTail(head, 15); // Insert node with data 15 at the tail
    print(head); // Print the linked list

    // Inserting a node at a specific position in the linked list
    InsertAtPosition(tail, head, 1, 22); // Insert node with data 22 at position 1
    print(head); // Print the linked list

    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node

    // Deleting a node at a specific position in the linked list
    deleteNode(head, 1); // Delete node at position 1
    print(head); // Print the linked list
    
    cout<<"Head: "<<head->data<<endl; // Print the data of the head node
    cout<<"Tail: "<<tail->data<<endl; // Print the data of the tail node

    return 0; // Return 0 to indicate successful execution
}