#include<bits/stdc++.h>
using namespace std;

// Function to update a bit at a given position in a number
int updateBit(int number, int position, int value){
    // Create a mask with all bits set to 1 except at the given position
    int mask = ~(1 << position);
    // Clear the bit at the given position in the number
    number = number & mask;
    // Set the bit at the given position to the given value
    // Shift the value to the left by 'position' bits to align it with the position
    // Use bitwise OR to set the bit at 'position' in 'number' to the 'value'
    return (number | (value << position));
}

int main(){

    /*
    Example:
    number = 0101
    Suppose we need to update bit at position i = 1 to 1
    1<<i = 0010
    ~0010 = 1101
    0101 & 1101 = 0101
    1<<i = 0010
    0101 | 0010 = 0111
    */

    // Example usage of the updateBit function
    // Let's say we want to update the bit at position 1 in the number 5 (binary: 0101) to 1
    // The expected result is 7 (binary: 0111)
    cout << "Result of updating bit at position 1 in 5 to 1: " << updateBit(5, 1, 1) << endl;
    return 0;
}