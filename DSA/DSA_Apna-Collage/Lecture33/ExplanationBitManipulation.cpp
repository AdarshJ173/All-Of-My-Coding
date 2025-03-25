/*
I'd be happy to explain bit manipulation in C++ DSA, focusing on get bit, set bit, clear bit, and update bit operations. Let's break this down step-by-step, starting from the basics and using simple code examples. I'll also provide a visualization to help make the concepts clearer.

First Principles:

1. In computers, all data is stored as binary (0s and 1s).
2. Each 0 or 1 is called a bit.
3. 8 bits make a byte, which is the common unit of storage for a single character.
4. In C++, an `int` typically uses 32 bits (4 bytes).

Now, let's dive into the specific bit operations:

1. Get Bit

Purpose: To check if a particular bit is set (1) or unset (0) in a number.

How it works:
- We use the AND (&) operator with a mask.
- The mask is created by left-shifting 1 to the position we want to check.

Example:

*/
#include <iostream>
using namespace std;

// Function to get the bit at a specific position
int getBit(int number, int position) {
    // Using bitwise AND to check if the bit is 1 or 0
    return ((number & (1 << position)) != 0);
}

int main() {
    int n = 5; // Binary: 0101
    cout << getBit(n, 2) << endl; // Output: 1
    cout << getBit(n, 1) << endl; // Output: 0
}

/*
Visualization:

n      = 0 1 0 1
mask   = 0 1 0 0  (1 << 2)
result = 0 1 0 0  (non-zero, so bit is set)
*/

// 2. Set Bit

// Purpose: To set a particular bit to 1 in a number.

// How it works:
// - We use the OR (|) operator with a mask.
// - The mask is created by left-shifting 1 to the position we want to set.

// Example:

int setBit(int n, int pos) {
    return n | (1 << pos);
}

int main() {
    int n = 5; // Binary: 0101
    cout << setBit(n, 1) << endl; // Output: 7 (Binary: 0111)
}

/*
Visualization:

n      = 0 1 0 1
mask   = 0 0 1 0  (1 << 1)
result = 0 1 1 1
*/

// 3. Clear Bit

// Purpose: To clear (set to 0) a particular bit in a number.

// How it works:
// - We use the AND (&) operator with the complement of a mask.
// - The mask is created by left-shifting 1 to the position we want to clear, then taking its complement.

// Example:

int clearBit(int n, int pos) {
    return n & (~(1 << pos));
}

int main() {
    int n = 5; // Binary: 0101
    cout << clearBit(n, 2) << endl; // Output: 1 (Binary: 0001)
}

/*
Visualization:

n      = 0 1 0 1
mask   = 1 0 1 1  (~(1 << 2))
result = 0 0 0 1
*/

// 4. Update Bit

// Purpose: To update a particular bit to either 0 or 1 in a number.

// How it works:
// - First, clear the bit at the given position.
// - Then, set the bit to the desired value (0 or 1).

// Example:

int updateBit(int n, int pos, int value) {
    // First clear the bit at pos
    int mask = ~(1 << pos);
    n = n & mask;
    // Then set the bit to the desired value
    return n | (value << pos);
}

int main() {
    int n = 5; // Binary: 0101
    cout << updateBit(n, 1, 1) << endl; // Output: 7 (Binary: 0111)
}

/*
Visualization:

n         = 0 1 0 1
clear mask= 1 1 0 1  (~(1 << 1))
cleared n = 0 1 0 1
set mask  = 0 0 1 0  (1 << 1)
result    = 0 1 1 1
*/

// These bit manipulation techniques are fundamental in many algorithms and can be used for tasks like:
// - Efficiently storing boolean flags (each bit represents a flag)
// - Performing certain mathematical operations quickly
// - Implementing data structures like bitsets

// Would you like me to explain any of these concepts further or provide more examples?