#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    // Calling the add function with integers and printing the result
    std::cout << add(2, 3) << std::endl;     // Calls the function to add integers, prints 5
    // Calling the add function with doubles and printing the result
    std::cout << add(2.5, 3.7) << std::endl; // Calls the function to add doubles, prints 6.2
    return 0;
}