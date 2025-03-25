//* FUNCTIONS

#include<iostream>
using namespace std;

/*
returnType functionName(parameter1,parameter2,...){
    function body
}
*/

void print(int num){
    cout<<num<<endl;
    return;
}

//* FUNCTIONS TO ADD 2 INTEGERS
int add(int num1 , int num2){
    print(num1);
    print(num2);
    int sum = num1 + num2;
    return sum;
}

// -----------------------------------------------------------------------------------------------
// Explanation of Call Stack in C++

// The call stack is a fundamental concept in C++ and other programming languages.
// It's a data structure that keeps track of function calls and their local variables.

// Let's break it down with an example:

void functionC() {
    int x = 3;
    // At this point, functionC's frame is at the top of the call stack
    // It contains the local variable 'x'
}

void functionB() {
    int y = 2;
    functionC();
    // When functionC is called, a new frame is pushed onto the stack
    // functionB's frame is now below functionC's frame
}

void functionA() {
    int z = 1;
    functionB();
    // When functionB is called, its frame is pushed onto the stack
    // functionA's frame is now at the bottom of these three functions
}

// Call Stack Behavior:
// 1. When a function is called, a new frame is pushed onto the top of the stack.
// 2. This frame contains the function's local variables and return address.
// 3. When a function completes, its frame is popped off the stack.
// 4. The program then returns to the calling function, which is now at the top of the stack.

// In the example above, the call stack would look like this at its deepest point:
// | functionC's frame |  <-- Top of stack(active frame)
// | functionB's frame |
// | functionA's frame |
// | main's frame      |  <-- Bottom of stack

// Key Points:
// - The call stack helps manage function execution order and variable scope.
// - It's a LIFO (Last In, First Out) structure.
// - Stack overflow occurs if the call stack becomes too deep (e.g., infinite recursion).
// - Each thread in a program has its own call stack.

// Understanding the call stack is crucial for debugging, understanding program flow,
// and managing memory efficiently in C++ programs.
                   
int main(){

// calling the function
int a = 2;
int b = 5;
cout<<add(a,b)<<endl;

return 0;

}

