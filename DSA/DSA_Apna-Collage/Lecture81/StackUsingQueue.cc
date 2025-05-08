#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// Define a class StackImplementation to implement a stack using two queues
class StackImplementation {
    // Private member variables
    int elementCount; // Number of elements in the stack
    queue<int> primaryQueue; // Primary queue to store elements
    queue<int> temporaryQueue; // Temporary queue to hold elements during push operation

public:
    // Constructor to initialize the stack
    StackImplementation() {
        elementCount = 0; // Initialize the number of elements to 0
    }

    // Push an element onto the stack
    void pushElement(int value) {
        // Add the new element to the temporary queue
        temporaryQueue.push(value);

        // Increment the number of elements
        elementCount++;

        // Move all elements from the primary queue to the temporary queue to maintain the correct order
        while (!primaryQueue.empty()) {
            temporaryQueue.push(primaryQueue.front());
            primaryQueue.pop();
        }
        
        // Swap the primary and temporary queues to update the queues
        queue<int> temp = primaryQueue;
        primaryQueue = temporaryQueue;
        temporaryQueue = temp;
    }

    // Remove the top element from the stack
    void popElement() {
        // Check if the stack is empty
        if (elementCount == 0) {
            throw runtime_error("Stack is empty");
        }

        // Remove the front element from the primary queue
        primaryQueue.pop();
        elementCount--; // Decrement the number of elements
    }

    // Return the top element of the stack
    int getTopElement() {
        // Check if the stack is empty
        if (elementCount == 0) {
            throw runtime_error("Stack is empty");
        }

        // Return the front element of the primary queue
        return primaryQueue.front();
    }

    // Return the size of the stack
    int getStackSize() {
        return elementCount; // Return the number of elements
    }
};

int main() {
    // Create an instance of the StackImplementation class
    StackImplementation stack;

    // Push elements onto the stack
    stack.pushElement(1);
    stack.pushElement(2);
    stack.pushElement(3);
    stack.pushElement(4);

    // Print the top element
    cout << stack.getTopElement() << endl; // Output: 4

    // Remove the top element
    stack.popElement();

    // Print the new top element
    cout << stack.getTopElement() << endl; // Output: 3
    stack.popElement();

    // Print the new top element
    cout << stack.getTopElement() << endl; // Output: 2
    stack.popElement();

    // Print the new top element
    cout << stack.getTopElement() << endl; // Output: 1
    stack.popElement();

    // Try to print the top element (should throw an exception)
    try {
        cout << stack.getTopElement() << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    // Print the size of the stack
    cout << stack.getStackSize() << endl; // Output: 0

    return 0;
}

/*
Complexity Analysis:

Time Complexity:
- pushElement operation: O(N), where N is the number of elements in the stack. This is because we need to move all elements from the primary queue to the temporary queue to maintain the correct order.
- popElement operation: O(1), as we simply remove the front element from the primary queue.
- getTopElement operation: O(1), as we simply return the front element of the primary queue.
- getStackSize operation: O(1), as we simply return the number of elements.

Space Complexity: O(N), where N is the number of elements in the stack. We use two queues, primaryQueue and temporaryQueue, to store the elements, and the total space used is proportional to the number of elements.
*/