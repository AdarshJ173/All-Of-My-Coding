/*

1.What is the difference between a variable and a constant in C++?
A variable is a named storage location that can hold a value. It can be modified during the execution of a program. A constant, on the other hand, is a named storage location that cannot be modified after it has been initialized. In C++, constants are typically declared using the const keyword.

2.What is the purpose of the main() function in a C++ program?
The main() function is the entry point of a C++ program. It is where the program starts executing. The main() function is responsible for setting up the program, calling other functions, and cleaning up any resources used by the program.

3.What is the difference between an array and a vector in C++?
An array is a fixed-size collection of elements of the same type. It is declared using square brackets [] and the size of the array must be known at compile time. A vector, on the other hand, is a dynamic-size collection of elements of the same type. It is part of the C++ Standard Template Library (STL) and can be resized dynamically during the execution of a program.

4.What is the purpose of the if statement in C++?
The if statement is used to conditionally execute a block of code based on a boolean condition. If the condition is true, the code inside the if statement is executed. If the condition is false, the code inside the if statement is skipped.

5.What is the difference between a pointer and a reference in C++?
A pointer is a variable that holds the memory address of another variable. It allows you to indirectly access and modify the value of another variable. A reference is an alias for another variable. It behaves like a variable, but it does not have its own memory address. Instead, it refers to the memory address of another variable.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1
    int myVariable = 42; // Variable
    const int myConstant = 42; // Constant
    
    myVariable = 100; // Modifying the value of a variable
    // myConstant = 100; // Error: cannot modify the value of a constant

    // 2
    // int main() {
        // Code to set up the program
        // Call other functions
        // Clean up resources
        return 0; // Exit the program
    // }

    // 3
    int myArray[5] = {1, 2, 3, 4, 5}; // Array
    std::vector<int> myVector = {1, 2, 3, 4, 5}; // Vector
    
    myArray[0] = 100; // Modifying an element of an array
    myVector[0] = 100; // Modifying an element of a vector
    
    myVector.push_back(6); // Adding an element to a vector

    // 4
    int myVariable = 42;
    
    if (myVariable > 0) { // Condition
        // Code to execute if the condition is true
        std::cout << "myVariable is positive" << std::endl;
    } else {
        // Code to execute if the condition is false
        std::cout << "myVariable is non-positive" << std::endl;
    }

    // 5
    int myVariable = 42;
    int* myPointer = &myVariable; // Pointer
    int& myReference = myVariable; // Reference
    
    *myPointer = 100; // Modifying the value of myVariable through myPointer
    myReference = 100; // Modifying the value of myVariable through myReference




}