// https://www.naukri.com/code360/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan

/// Circular linked list
// Circular linked list is a type of linked list where the last node points back to the head, forming a circular structure. This allows for continuous traversal through the list without a definite end. Circular linked lists can be singly linked or doubly linked, depending on whether each node has one or two pointers to other nodes.

// In a circular linked list, the last node's pointer points back to the head node, creating a loop that enables traversal from any point in the list. This circular structure is useful in scenarios where continuous access to elements is required without the need to reach a specific end point.

// Circular linked lists are dynamic data structures that provide flexibility in memory usage and efficient traversal capabilities. They can be implemented using nodes that contain data and pointers to other nodes, forming a circular chain of elements.

// Overall, circular linked lists offer a unique way of organizing data in a looped fashion, allowing for seamless traversal and access to elements from any starting point.

#include<iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

class Node{ // Define a class named Node
    public: // Access specifier for public members
    int data; // Data stored in the node
    Node *next; // Pointer to the next node

    Node(int d){ // Constructor with data parameter
        this->data = d; // Initialize data with the provided value
        this->next = NULL; // Initialize next pointer to NULL
    }

    ~Node(){ // Destructor
        int value = this->data; // Store data value
        if(this->next != NULL){ // Check if next node exists
            delete next; // Recursively delete the next node
            next = NULL; // Set next pointer to NULL
        }
        cout<<"memory si free for node with data: "<<value<<endl; // Display message about freeing memory for the node
    }
};

void insertNode(Node* &tail, int element, int d){ // Function to insert a new node
    if (tail == NULL) // Check if the list is empty
    {
        Node* newNode = new Node(d); // Create a new node with data d
        tail = newNode; // Update tail to the new node
        newNode->next = newNode; // Set new node's next pointer to itself
    }
    else
    {
        Node* curr = tail; // Initialize current pointer to tail
        while(curr->data != element){ // Traverse until finding the element
            curr = curr->next; // Move to the next node
        }
        Node* temp = new Node(d); // Create a new node with data d
        temp->next = curr->next; // Set new node's next pointer
        curr->next = temp; // Insert the new node
    }
}

void print(Node* tail){ // Function to print the linked list
    Node* temp = tail; // Initialize temporary pointer to tail

    if (tail == NULL) // Check if the list is empty
    {
        cout<<"List is empty"<<endl; // Print message indicating empty list
        return; // Exit the function
    }
    
    do
    {
        cout<<temp->data<<" "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    } 
    while (temp != tail); // Continue until reaching the tail again
    cout<<endl; // Print a new line
}

void deleteNode(Node* &tail, int value){ // Function to delete a node with a specific value
    if (tail == NULL) // Check if the list is empty
    {
        cout<<"List is empty"<<endl; // Print message indicating empty list
        return; // Exit the function
    }
    else{
        Node* prev = tail; // Initialize previous pointer to tail
        Node* curr = prev->next; // Initialize current pointer to the next node
        while (curr->data != value){ // Traverse until finding the node with the specified value
            prev = curr; // Update previous pointer
            curr = curr->next; // Move to the next node
        }

        prev->next = curr->next; // Update previous node's next pointer

        if(curr == prev){ // Check if the node to delete is the only node in the list
            tail = NULL; // Update tail to NULL
        }

        else if(tail == curr){ // Check if the node to delete is the tail
            tail = prev; // Update tail to the previous node
        }
        curr -> next = NULL; // Set current node's next pointer to NULL
        delete curr; // Delete the node
    }
}

bool isCircularList(Node* head){

    if(head == NULL){
        return true;
    }

    Node* temp = head->next;
    while (temp!= NULL && temp!= head)
    {
        temp = temp->next;
    }
    
    if (temp == head)
    {
        return true;
    }

    return false;
    
}

int main(){ // Main function

    Node* tail = NULL; // Initialize tail pointer to NULL

    insertNode(tail, 5, 3); // Insert node with data 3 after node with data 5
    print(tail); // Print the linked list

    insertNode(tail, 3, 5); // Insert node with data 5 after node with data 3
    print(tail); // Print the linked list

    /*

    insertNode(tail, 5, 7); // Insert node with data 7 after node with data 5
    print(tail); // Print the linked list

    insertNode(tail, 7, 9); // Insert node with data 9 after node with data 7
    print(tail); // Print the linked list

    insertNode(tail, 5, 6); // Insert node with data 6 after node with data 5
    print(tail); // Print the linked list

    insertNode(tail, 9, 10); // Insert node with data 10 after node with data 9
    print(tail); // Print the linked list

    insertNode(tail, 3, 4); // Insert node with data 4 after node with data 3
    print(tail); // Print the linked list

    // Delete the node with data 3 from the linked list
    deleteNode(tail, 3);
    print(tail); // Print the updated linked list after deletion

    */

   if (isCircularList(tail))
   {
        cout<<"linked list is circular"<<endl;
   }
   else{
       cout<<"linked list is not circular"<<endl;
   }
   

    return 0;
}