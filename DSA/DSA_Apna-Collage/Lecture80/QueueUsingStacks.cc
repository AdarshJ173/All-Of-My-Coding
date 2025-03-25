#include<iostream> // Include the iostream library for input/output operations
#include<stack> // Include the stack library for stack data structure
using namespace std; // Use the standard namespace for convenience

// Define a class named Queue to implement a queue using two stacks
class Queue {
    // Declare two stacks, s1 and s2, to store integers
    stack<int> s1; // Stack 1 to store elements
    stack<int> s2; // Stack 2 to store elements in reverse order

public:
    // Function to push an element onto the queue
    void push(int x) {
        // Push the element onto stack 1
        s1.push(x);
    }

    // Function to pop an element from the queue
    int pop() {
        // Check if both stacks are empty
        if (s1.empty() && s2.empty()) {
            // If both stacks are empty, print a message and return -1
            cout << "Queue is empty" << endl;
            return -1;
        }

        // If stack 2 is empty, transfer elements from stack 1 to stack 2
        if (s2.empty()) {
            // While stack 1 is not empty, pop elements from stack 1 and push onto stack 2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Pop the top element from stack 2 and return it
        int topval = s2.top();
        s2.pop();
        return topval;
    }

    // Function to check if the queue is empty
    bool empty() {
        // Check if both stacks are empty
        if (s1.empty() && s2.empty()) {
            // If both stacks are empty, return true
            return true;
        }
        // If either stack is not empty, return false
        return false;
    }
};

int main() {
    // Create an instance of the Queue class
    Queue q;

    // Push elements onto the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Pop elements from the queue and print them
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}

/*
Time Complexity Analysis:

push(x) function: O(1) because it simply pushes an element onto stack 1.
pop() function:
If both stacks are empty, it returns -1 in O(1) time.
If stack 2 is empty, it transfers elements from stack 1 to stack 2 in O(n) time, where n is the number of elements in stack 1.
If stack 2 is not empty, it pops the top element in O(1) time.
Overall, the average time complexity of pop() is O(1) because the transfer operation is only done when stack 2 is empty, and subsequent pops are O(1).
empty() function: O(1) because it simply checks if both stacks are empty.
Space Complexity Analysis:

The space complexity is O(n), where n is the total number of elements in the queue, because we use two stacks to store the elements.
*/