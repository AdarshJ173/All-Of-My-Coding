#include<iostream>
#include<stack>
using namespace std;

// Define a class to implement a queue using two stacks
class Queue {
    stack<int> s1; // Stack 1 to store elements

    public:
    // Function to add an element to the queue
    void enqueue(int x) {
        // Simply push the element to stack 1
        s1.push(x);
    }

    // Function to remove an element from the queue
    int dequeue() {
        // If stack 1 is empty, print an error message and return -1
        if (s1.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        // Store the top element of stack 1 in a variable
        int x = s1.top();
        s1.pop();

        // If stack 1 is empty after popping, return the element
        if (s1.empty()) {
            return x;
        }

        // Recursively call dequeue to pop all elements from stack 1
        int item = dequeue();
        s1.push(x); // Push the original top element back to stack 1

        return item;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        // Simply check if stack 1 is empty
        if (s1.empty()) {
            return true;
        }
        return false;
    }
};

int main() {

    /*
    Using Function Call Stack

    enQueue(x):
        push x to stack 1.

    deQueue(x):
        1.if stack1 is empty then print error.
        2.if stack1 has only one element then return it.
        3.recursively pop everything from the stack1, store the popped item in a variable res, push the res back to stack 1 and returns res
    
    */

    // Create an instance of the Queue class
    Queue q;

    // Add elements to the queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    // Remove elements from the queue
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;
}
