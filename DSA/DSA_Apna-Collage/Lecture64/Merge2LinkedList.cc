// Enhanced Doubly Linked List Implementation

#include <iostream>
using namespace std;

// Node class to represent a node in the doubly linked list
class Node {
public:
    int data;           // The value stored in the node
    Node* nextNode;     // Pointer to the next node in the list
    Node* previousNode; // Pointer to the previous node in the list

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        nextNode = nullptr;     // Initially, there is no next node
        previousNode = nullptr; // Initially, there is no previous node
    }
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node with the given value
    newNode->nextNode = head;        // Set the new node's next to the current head
    if (head != nullptr) {
        head->previousNode = newNode; // Set the current head's previous to the new node
    }
    head = newNode; // Update the head to be the new node
}

// Function to insert a new node at the end of the list
void insertAtEnd(Node*& head, int value) {
    if (head == nullptr) {
        insertAtBeginning(head, value); // If the list is empty, insert at the beginning
        return;
    }
    Node* newNode = new Node(value); // Create a new node with the given value
    Node* currentNode = head;
    while (currentNode->nextNode != nullptr) {
        currentNode = currentNode->nextNode; // Traverse to the last node
    }
    currentNode->nextNode = newNode;     // Set the last node's next to the new node
    newNode->previousNode = currentNode; // Set the new node's previous to the last node
}

// Function to display the contents of the list
void displayList(Node* head) {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        cout << currentNode->data << " "; // Print the data of each node
        currentNode = currentNode->nextNode;
    }
    cout << endl;
}

// Function to delete the first node of the list
void deleteFirstNode(Node*& head) {
    if (head == nullptr) return; // If the list is empty, do nothing
    Node* nodeToDelete = head;
    head = head->nextNode; // Update the head to the second node
    if (head != nullptr) {
        head->previousNode = nullptr; // Set the new head's previous to null
    }
    delete nodeToDelete; // Free the memory of the deleted node
}

// Function to delete a node at a specific position
void deleteNodeAtPosition(Node*& head, int position) {
    if (head == nullptr) return; // If the list is empty, do nothing
    if (position == 1) {
        deleteFirstNode(head); // If position is 1, delete the first node
        return;
    }
    Node* currentNode = head;
    int currentPosition = 1;
    while (currentNode != nullptr && currentPosition != position) {
        currentNode = currentNode->nextNode;
        currentPosition++;
    }
    if (currentNode == nullptr) return; // If position is out of bounds, do nothing
    currentNode->previousNode->nextNode = currentNode->nextNode; // Update the previous node's next
    if (currentNode->nextNode != nullptr) {
        currentNode->nextNode->previousNode = currentNode->previousNode; // Update the next node's previous
    }
    delete currentNode; // Free the memory of the deleted node
}

// Function to calculate the length of the list
int calculateListLength(Node* head) {
    int length = 0;
    Node* currentNode = head;
    while (currentNode != nullptr) {
        length++;
        currentNode = currentNode->nextNode;
    }
    return length;
}

// Function to append the last k nodes to the beginning of the list
Node* appendLastKNodesToBeginning(Node*& head, int k) {
    if (head == nullptr || k == 0) return head;
    int listLength = calculateListLength(head);
    k = k % listLength; // Ensure k is within the list length
    if (k == 0) return head;
    Node* newHead;
    Node* newTail;
    Node* tail = head;
    int currentPosition = 1;
    while (tail->nextNode != nullptr) {
        if (currentPosition == listLength - k) {
            newTail = tail;
        }
        if (currentPosition == listLength - k + 1) {
            newHead = tail;
        }
        tail = tail->nextNode;
        currentPosition++;
    }
    newTail->nextNode = nullptr;    // Set the new tail's next to null
    tail->nextNode = head;          // Connect the old tail to the old head
    head->previousNode = tail;      // Connect the old head's previous to the old tail
    newHead->previousNode = nullptr; // Set the new head's previous to null
    return newHead;
}

// Function to find the intersection point of two lists
int findIntersectionPoint(Node* &head1, Node* &head2) {
    int length1 = calculateListLength(head1);
    int length2 = calculateListLength(head2);

    int lengthDifference = 0;
    Node* pointerLongerList;
    Node* pointerShorterList;

    if (length1 > length2) {
        lengthDifference = length1 - length2;
        pointerLongerList = head1;
        pointerShorterList = head2;
    } else {
        lengthDifference = length2 - length1;
        pointerLongerList = head2;
        pointerShorterList = head1;
    }

    // Move the pointer of the longer list by the difference in length
    while (lengthDifference) {
        pointerLongerList = pointerLongerList->nextNode;
        if (pointerLongerList == nullptr)
            return -1; // No intersection
        lengthDifference--;
    }

    // Move both pointers until they meet
    while (pointerLongerList != nullptr && pointerShorterList != nullptr) {
        if (pointerLongerList == pointerShorterList)
            return pointerLongerList->data; // Found intersection
        pointerLongerList = pointerLongerList->nextNode;
        pointerShorterList = pointerShorterList->nextNode;
    }

    return -1; // No intersection
}

// Function to create an intersection between two lists
void createIntersection(Node* &head1, Node* &head2, int position) {
    Node* temp1 = head1;
    position--; // Adjust position to 0-based index
    while (position-- && temp1 != nullptr) {
        temp1 = temp1->nextNode; // Move to the intersection point in list1
    }
    if (temp1 == nullptr) return; // If position is out of bounds, do nothing
    Node* temp2 = head2;
    while (temp2->nextNode != nullptr) {
        temp2 = temp2->nextNode; // Move to the last node of list2
    }
    temp2->nextNode = temp1; // Connect the last node of list2 to the intersection point in list1
}

// Function to merge two sorted lists
Node* mergeSortedLists(Node* &head1, Node* &head2) {
    Node* pointer1 = head1;
    Node* pointer2 = head2;
    Node* dummyNode = new Node(-1); // Dummy node to simplify the merging process
    Node* mergedPointer = dummyNode;

    while (pointer1 != nullptr && pointer2 != nullptr) {
        if (pointer1->data < pointer2->data) {
            mergedPointer->nextNode = pointer1;
            pointer1->previousNode = mergedPointer;
            pointer1 = pointer1->nextNode;
        } else {
            mergedPointer->nextNode = pointer2;
            pointer2->previousNode = mergedPointer;
            pointer2 = pointer2->nextNode;
        }
        mergedPointer = mergedPointer->nextNode;
    }
    
    // Append remaining nodes from list1, if any
    while (pointer1 != nullptr) {
        mergedPointer->nextNode = pointer1;
        pointer1->previousNode = mergedPointer;
        pointer1 = pointer1->nextNode;
        mergedPointer = mergedPointer->nextNode;
    }

    // Append remaining nodes from list2, if any
    while (pointer2 != nullptr) {
        mergedPointer->nextNode = pointer2;
        pointer2->previousNode = mergedPointer;
        pointer2 = pointer2->nextNode;
        mergedPointer = mergedPointer->nextNode;
    }

    Node* mergedHead = dummyNode->nextNode;
    mergedHead->previousNode = nullptr; // Ensure the head node's previous pointer is null
    delete dummyNode; // Clean up the dummy node
    return mergedHead; // Return the head of the merged list
}

Node* mergeRecursive(Node* &head1 , Node* &head2){

    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    
    

    Node* result;
    if (head1->data<head2->data)
    {
        result = head1;
        result->nextNode = mergeRecursive(head1->nextNode,head2);
    }
    else{
        result = head2;
        result->nextNode = mergeRecursive(head1,head2->nextNode);
    }

    return result;

}

int main() {
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};

    // Populate list1
    for (int i = 0; i < 4; i++) {
        insertAtEnd(head1, arr1[i]);
    }

    // Populate list2
    for (int i = 0; i < 3; i++) {
        insertAtEnd(head2, arr2[i]); // Changed from insertAtBeginning to insertAtEnd
    }

    cout << "List 1: ";
    displayList(head1);
    cout << "List 2: ";
    displayList(head2);

    // Node* mergedHead = mergeSortedLists(head1, head2);

    // cout << "Merged List: ";
    // displayList(mergedHead);

    Node* newhead = mergeRecursive(head1,head2);
    displayList(newhead);

    return 0;
}