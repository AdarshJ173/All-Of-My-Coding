// Function Overloading Example
#include <iostream>
#include <string>

using namespace std;

// Function to print a message
void printMessage(const string& msg) {
    cout << msg << endl;
}

// Function to print a number
void printMessage(int num) {
    cout << "The number is: " << num << endl;
}

int main() {
    printMessage("Hello, Instagram!");  // Calls the function to print a message
    printMessage(42);  // Calls the function to print a number
    
    return 0;
}