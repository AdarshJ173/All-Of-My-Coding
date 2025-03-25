#include <iostream>
using namespace std;

// Function to find the complement of a base 10 integer
int findComplement(int num) {
    // Find the position of the most significant bit (MSB) in num
    int msbPosition = 0;
    int temp = num;
    while (temp > 0) {
        temp = temp >> 1;
        msbPosition++;
    }

    // Create a mask with the same number of bits as num but with all bits up to the MSB set to 1 and the remaining bits set to 0
    int mask = (1 << msbPosition) - 1;

    // Perform a bitwise AND operation between num and the mask to get the complement of num
    return num ^ mask;
}

int main() {
    // Initialize a number
    int num = 5;
    // Print the complement of num
    cout << "The complement of " << num << " is " << findComplement(num) << endl;
    return 0;
}

/*
The code you've provided is written in C++, and it performs a specific operation on a given integer number. The operation is to find the 2's complement of the number. The 2's complement is a mathematical representation of negative numbers in binary form, and it's commonly used in computing to represent signed integers.

The code consists of two functions: findMSBPosition and findComplement.

findMSBPosition: This function takes an integer num as input and returns the position of the most significant bit (MSB) in the binary representation of num. It does this by repeatedly shifting the bits of num to the right until num becomes 0. The number of shifts performed is counted and returned as the position of the MSB.

findComplement: This function takes an integer num as input and returns its 2's complement. It does this in two steps:

First, it finds the position of the MSB in num using the findMSBPosition function.
Then, it creates a mask with the same number of bits as num but with all bits up to the MSB set to 1 and the remaining bits set to 0. This is done by shifting a 1 to the left by msbPosition - 1 bits and then subtracting 1 from the result.
Finally, it performs a bitwise XOR operation between num and the mask to get the 2's complement of num.
In the main function, the code demonstrates the usage of findComplement by finding the 2's complement of the number 5 and printing the result.
*/