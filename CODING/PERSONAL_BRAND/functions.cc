// Including necessary header files for input-output operations and string manipulations
#include <iostream>
#include <string>

// Using the standard namespace to avoid prefixing std:: before standard library names
using namespace std;

// Function Overloading Example
// This function takes a constant reference to a string and prints it to the console
// The 'const' keyword ensures that the string passed to the function is not modified
void printMessage(const string& msg) {
    cout << msg << endl; // Output the message followed by a newline character
}

// This function is an overloaded version of printMessage that takes an integer as an argument
// Function overloading allows us to define multiple functions with the same name but different parameter lists
void printMessage(int num) {
    cout << "The number is: " << num << endl; // Output a message indicating the number followed by a newline character
}