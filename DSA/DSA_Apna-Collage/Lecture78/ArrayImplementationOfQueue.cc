#include<iostream>
#include<queue>
using namespace std;

// Define a constant for the maximum size of the queue
#define MAX_QUEUE_SIZE 20

// Define a class for a queue data structure
class Queue {
    // Array to store the queue elements
    int *elements;
    // Index of the front element in the queue
    int frontIndex;
    // Index of the back element in the queue
    int backIndex;

public:
    // Constructor to initialize the queue
    Queue() {
        // Allocate memory for the queue array
        elements = new int[MAX_QUEUE_SIZE];
        // Initialize front and back indices to -1
        frontIndex = -1;
        backIndex = -1;
    }

    // Method to add an element to the queue
    void enqueue(int element) {
        // Check if the queue is full
        if (backIndex == MAX_QUEUE_SIZE - 1) {
            // Print an error message if the queue is full
            cout << "Queue overflow" << endl;
            return;
        }
        // Increment the back index
        backIndex++;
        // Add the element to the queue
        elements[backIndex] = element;
        // If the front index is -1, increment it to 0
        if (frontIndex == -1) {
            frontIndex++;
        }
    }

    // Method to remove an element from the queue
    void dequeue() {
        // Check if the queue is empty
        if (frontIndex == -1 || frontIndex > backIndex) {
            // Print an error message if the queue is empty
            cout << "No elements in queue" << endl;
            return;
        }
        // Increment the front index
        frontIndex++;
    }

    // Method to get the front element of the queue
    int peek() {
        // Check if the queue is empty
        if (frontIndex == -1 || frontIndex > backIndex) {
            // Print an error message if the queue is empty
            cout << "No elements in queue" << endl;
            return -1;
        }
        // Return the front element
        return elements[frontIndex];
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        // Check if the front index is -1 or greater than the back index
        if (frontIndex == -1 || frontIndex > backIndex) {
            // Return true if the queue is empty
            return true;
        }
        // Return false if the queue is not empty
        return false;
    }
};

int main() {
    // Create a queue object
    Queue queue;
    // Add elements to the queue
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    // Print the front element
    cout << queue.peek() << endl;
    // Remove an element from the queue
    queue.dequeue();

    // Print the front element
    cout << queue.peek() << endl;
    // Remove an element from the queue
    queue.dequeue();

    // Print the front element
    cout << queue.peek() << endl;
    // Remove an element from the queue
    queue.dequeue();

    // Print the front element
    cout << queue.peek() << endl;
    // Remove an element from the queue
    queue.dequeue();

    // Check if the queue is empty
    cout << queue.isEmpty() << endl;

    return 0;
}

/*
*Complexity Analysis:

*Time Complexity:
enqueue: O(1) because it only increments the back index and adds an element to the queue.
dequeue: O(1) because it only increments the front index.
peek: O(1) because it only returns the front element.
isEmpty: O(1) because it only checks the front and back indices.

*Space Complexity: 
O(MAX_QUEUE_SIZE) because the queue array has a fixed size of MAX_QUEUE_SIZE.

!Note: The time complexity of the enqueue and dequeue methods is O(1) because they only involve incrementing indices and accessing elements in the queue array. The space complexity is O(MAX_QUEUE_SIZE) because the queue array has a fixed size, and the amount of memory used does not change with the number of elements in the queue.

*/