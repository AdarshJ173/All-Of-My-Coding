#include <iostream>
using namespace std;

//! Function: reverse
// -----------------
//* given a signed 32-bit integer , return x with its digits reversed. if reversing x causes the value to go outside the signed 32-bit integer range [ -2^31 , 2^31 -1] , then return 0.

int reverse(int x) {

    // Initialize reversed and prev_reversed to 0.
    // reversed will hold the reversed integer, and prev_reversed is used to check
    // for overflow or underflow.
    int reversed = 0;
    int prev_reversed = 0;

    // Continue looping until x is 0.
    while (x!= 0) {

        // Extract the least significant digit of x using the modulo operator %.
        int digit = x % 10;

        // Calculate the new value of reversed by multiplying the current value of
        // reversed by 10 and adding the extracted digit.
        reversed = (reversed * 10) + digit;

        // Check for overflow or underflow by comparing the difference between the
        // new and old values of reversed with 10 * prev_reversed. If the difference
        // is not equal to 10 * prev_reversed, then the function has overflowed or
        // underflowed, and it returns 0.
        if ((reversed - digit) / 10!= prev_reversed) {
            return 0;
        }

        // Update prev_reversed to the new value of reversed.
        prev_reversed = reversed;

        // Remove the least significant digit of x by dividing it by 10.
        x /= 10;
    }

    // Return the reversed integer.
    return reversed;
}

int main() {

    // Initialize x to -123.
    int x = -123;

    // Call the reverse function and print the result.
    cout << "Reversed: " << reverse(x) << endl;

    return 0;
}

/*
This code is written in C++ and defines a function reverse that takes a signed 32-bit integer x as input and returns the integer with its digits reversed. If reversing the digits of x would cause the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then the function returns 0.

Here's a breakdown of the code:

The reverse function initializes two variables, reversed and prev_reversed, to 0. reversed will hold the reversed integer, and prev_reversed is used to check for overflow or underflow.
The function then enters a loop that continues until x is 0. In each iteration of the loop, the function performs the following steps:
It extracts the least significant digit of x using the modulo operator %.
It calculates the new value of reversed by multiplying the current value of reversed by 10 and adding the extracted digit.
It checks for overflow or underflow by comparing the difference between the new and old values of reversed with 10 * prev_reversed. If the difference is not equal to 10 * prev_reversed, then the function has overflowed or underflowed, and it returns 0.
It updates prev_reversed to the new value of reversed.
It removes the least significant digit of x by dividing it by 10.
After the loop finishes, the function returns the reversed integer.
The main function simply calls the reverse function with the input -123 and prints the result.
*/