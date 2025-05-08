#include <iostream>
using namespace std;

// Function to count the number of set bits (bits that are equal to 1) in an unsigned integer
int countSetBits(unsigned int n) {
    int count = 0; // Initialize counter for set bits

    // Loop through all bits in the input integer
    while (n!= 0) {
        // Check if the least significant bit is set
        if (n & 1) {
            count++; // Increment counter if set
        }
        n = n >> 1; // Shift integer one bit to the right, effectively dividing by 2 and removing the least significant bit
    }

    return count; // Return the number of set bits
}

int main() {
    unsigned int n; // Declare input variable

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> n; // Read input number

    // Call function to count set bits and store result
    int count = countSetBits(n);

    // Print result to console
    cout << "The number of set bits is: " << count << endl;

    return 0;
}

/*
This is a C++ program that counts the number of set bits (bits that are equal to 1) in an unsigned integer. Here's a breakdown of the code:

The countSetBits function takes an unsigned integer n as input and initializes a counter variable count to 0.
The function then enters a while loop that continues as long as n is not equal to 0.
Inside the loop, the function checks if the least significant bit of n is set (i.e., equal to 1) by performing a bitwise AND operation between n and 1. If the result is non-zero, then the least significant bit is set, and the function increments the count variable.
The function then shifts n one bit to the right using the bitwise right shift operator >>. This effectively divides n by 2 and removes the least significant bit.
The loop continues until all bits of n have been checked and shifted off.
Finally, the function returns the count variable, which contains the number of set bits in the input integer.
The main function prompts the user to enter a number, reads the input using the cin operator, and then calls the countSetBits function to count the number of set bits in the input number. The result is then printed to the console using the cout operator.

Overall, this code provides a simple and efficient way to count the number of set bits in an unsigned integer using bitwise operations and a loop.
*/