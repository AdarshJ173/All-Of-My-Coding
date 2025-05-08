#include<iostream>
// Include the iostream header file to enable input-output operations
using namespace std;
// Use the standard namespace to avoid having to prefix standard library elements with std::

#define n 100
// Define a constant n with a value of 100, which will be used as the size of the stack

class stack{
    // Define a class named stack to implement a stack data structure
    int *arr;
    // Declare a pointer to an integer array to store the elements of the stack
    int top;
    // Declare an integer variable top to keep track of the top element of the stack

public:
    stack(){
        // Define a constructor for the stack class
        arr = new int[n];
        // Dynamically allocate an array of integers with a size of n
        top = -1;
        // Initialize the top variable to -1, indicating an empty stack
    }

    void push(int x){
        // Define a method push to add an element to the stack
        if (top == n-1)
        {
            // Check if the stack is full (i.e., top is at the last index of the array)
            cout<<"stack overflow"<<endl;
            // Print an error message if the stack is full
            return;
            // Exit the method without adding the element
        }

        top++;
        // Increment the top variable to point to the next available index
        arr[top] = x;
        // Assign the value x to the top element of the stack
    }

    void pop(){
        // Define a method pop to remove an element from the stack
        if (top == -1)
        {
            // Check if the stack is empty (i.e., top is -1)
            cout<<"no element to pop"<<endl;
            // Print an error message if the stack is empty
            return;
            // Exit the method without removing an element
        }
        top--;
        // Decrement the top variable to point to the previous element
    }

    int Top(){
        // Define a method Top to return the top element of the stack
        if (top == -1)
        {
            // Check if the stack is empty (i.e., top is -1)
            cout<<"No element in stack"<<endl;
            // Print an error message if the stack is empty
            return -1;
            // Return a sentinel value -1 to indicate an empty stack
        }
        
        return arr[top];
        // Return the value of the top element of the stack
    }

    bool empty(){
        // Define a method empty to check if the stack is empty
        return top == -1;
        // Return true if the stack is empty (i.e., top is -1), false otherwise
    }
};

int main(){
    // Define the main function as the entry point of the program
    stack st;
    // Create an instance of the stack class named st

    st.push(1);
    // Push the value 1 onto the stack
    st.push(2);
    // Push the value 2 onto the stack
    st.push(3);
    // Push the value 3 onto the stack

    cout<<st.Top()<<endl;
    // Print the top element of the stack (should be 3)

    st.pop();
    // Pop an element from the stack (removes the top element, which is 3)

    cout<<st.Top()<<endl;
    // Print the new top element of the stack (should be 2)

    st.pop();
    st.pop();
    st.pop();
    // Pop three more elements from the stack (removes the remaining elements)

    cout<<st.empty()<<endl;
    // Print whether the stack is empty (should be true)

    return 0;
    // Return an exit status of 0 to indicate successful execution
}
/*
!Complexity Analysis:

*Time Complexity:

The push operation takes O(1) time, as it only increments the top variable and assigns a value to the top element.
The pop operation takes O(1) time, as it only decrements the top variable.
The Top operation takes O(1) time, as it only returns the value of the top element.
The empty operation takes O(1) time, as it only checks the value of the top variable.
The overall time complexity of the program is O(1), as the operations are performed in constant time.

*Space Complexity:

The stack class dynamically allocates an array of integers with a size of n, which takes O(n) space.
The top variable takes O(1) space.
The overall space complexity of the program is O(n), as the stack size is fixed and does not grow dynamically.
*/