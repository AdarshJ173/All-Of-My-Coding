#include<iostream>
using namespace std;

// Node class to represent individual elements in the queue
class Node {
    public:
        int data; // data stored in the node
        Node* next; // pointer to the next node in the queue

        // Constructor to initialize a node with a given value
        Node(int val) {
            data = val;
            next = NULL;
        }
};

// Queue class to manage a queue data structure
class Queue {
    private:
        Node* front; // pointer to the front of the queue
        Node* back; // pointer to the back of the queue

    public:
        // Constructor to initialize an empty queue
        Queue() {
            front = NULL;
            back = NULL;
        }

        // Method to add an element to the back of the queue
        void push(int x) {
            // Create a new node with the given value
            Node* n = new Node(x);

            // If the queue is empty, set both front and back to the new node
            if (front == NULL) {
                back = n;
                front = n;
                return;
            }

            // Otherwise, add the new node to the back of the queue
            back->next = n;
            back = n;
        }

        // Method to remove the front element from the queue
        void pop() {
            // Check if the queue is empty
            if (front == NULL) {
                cout << "Queue is underflow" << endl;
                return;
            }

            // Store the node to be deleted
            Node* toDelete = front;

            // Move the front pointer to the next node
            front = front->next;

            // Delete the node
            delete toDelete;
        }

        // Method to return the front element of the queue without removing it
        int peek() {
            // Check if the queue is empty
            if (front == NULL) {
                cout << "No element in queue" << endl;
                return -1;
            }

            // Return the data of the front node
            return front->data;
        }

        // Method to check if the queue is empty
        bool empty() {
            // Check if the front pointer is NULL
            if (front == NULL) {
                return true;
            }
            return false;
        }
};

int main() {
    // Create a queue object
    Queue q;

    // Add elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Print the front element and remove it
    cout << q.peek() << endl;
    q.pop();

    // Print the new front element and remove it
    cout << q.peek() << endl;
    q.pop();

    // Print the new front element and remove it
    cout << q.peek() << endl;
    q.pop();

    // Print the new front element and remove it
    cout << q.peek() << endl;
    q.pop();

    // Check if the queue is empty
    cout << q.empty() << endl;

    return 0;
}

/*
!Complexity Analysis:

*Time complexity:
push operation: O(1) because we only update the back pointer and add a new node to the end of the queue.
pop operation: O(1) because we only update the front pointer and remove the front node from the queue.
peek operation: O(1) because we only return the data of the front node.
empty operation: O(1) because we only check if the front pointer is NULL.

*Space complexity: 
O(n) because we store n nodes in the queue, where n is the number of elements in the queue.
*/