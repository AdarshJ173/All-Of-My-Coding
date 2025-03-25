#include <queue> // Include the queue library for queue operations
#include <iostream> // Include the iostream library for input/output operations

using namespace std; // Use the standard namespace for convenience

// Define a Stack class to implement a stack using two queues
class Stack {
private:
    int elementCount; // Store the number of elements in the stack
    queue<int> primaryQueue; // Primary queue to store elements
    queue<int> secondaryQueue; // Secondary queue to assist in stack operations

public:
    // Constructor to initialize the stack
    Stack() {
        elementCount = 0; // Initialize the element count to 0
    }

    // Pop an element from the stack
    void pop() {
        // Check if the primary queue is empty
        if (primaryQueue.empty()) {
            return; // If empty, do nothing
        }

        // Move all elements except the last one from primary queue to secondary queue
        while (primaryQueue.size() != 1) {
            secondaryQueue.push(primaryQueue.front()); // Move the front element to secondary queue
            primaryQueue.pop(); // Remove the front element from primary queue
        }

        primaryQueue.pop(); // Remove the last element from primary queue
        elementCount--; // Decrement the element count

        // Swap the primary and secondary queues
        queue<int> temp = primaryQueue;
        primaryQueue = secondaryQueue;
        secondaryQueue = temp;
    }

    // Push an element onto the stack
    void push(int value) {
        primaryQueue.push(value); // Add the element to the primary queue
        elementCount++; // Increment the element count
    }

    // Get the top element of the stack
    int top() {
        // Check if the primary queue is empty
        if (primaryQueue.empty()) {
            return -1; // If empty, return -1
        }

        // Move all elements except the last one from primary queue to secondary queue
        while (primaryQueue.size() != 1) {
            secondaryQueue.push(primaryQueue.front()); // Move the front element to secondary queue
            primaryQueue.pop(); // Remove the front element from primary queue
        }

        int topElement = primaryQueue.front(); // Get the last element from primary queue

        secondaryQueue.push(topElement); // Add the last element to secondary queue

        // Swap the primary and secondary queues
        queue<int> temp = primaryQueue;
        primaryQueue = secondaryQueue;
        secondaryQueue = temp;

        return topElement; // Return the top element
    }

    // Get the size of the stack
    int size() {
        return elementCount; // Return the element count
    }
};

int main() {
    Stack stack; // Create a stack object

    stack.push(1); // Push elements onto the stack
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << stack.top() << endl; // Print the top element

    stack.pop(); // Pop an element from the stack

    cout << stack.top() << endl; // Print the new top element
    cout << stack.size() << endl; // Print the stack size

    return 0;
}

/*
Time Complexity Analysis:

push(int value): O(1) - Adding an element to the primary queue takes constant time.
pop(): O(n) - Moving all elements except the last one from primary queue to secondary queue takes linear time, where n is the number of elements in the primary queue.
top(): O(n) - Moving all elements except the last one from primary queue to secondary queue takes linear time, where n is the number of elements in the primary queue.
size(): O(1) - Returning the element count takes constant time.
Space Complexity Analysis:

The stack uses two queues to store elements, which requires O(n) space, where n is the number of elements in the stack.
*/