#include<bits/stdc++.h>
using namespace std;

// Function to clear a bit at a specific position in a number
int clearBitAtPosition(int number, int position){
    // Create a mask by shifting 1 to the left by 'position' bits and then inverting it
    // This will create a mask with all bits set to 1 except at the 'position' where it's 0
    int mask = ~(1 << position);
    // Use bitwise AND operation to clear the bit at 'position' in 'number'
    // The result will be 'number' with the bit at 'position' set to 0
    return (number & mask);
}

int main(){

    /*
    n = 0101
    suppose we need to clear bit at position , i = 2
    1<<i = 0100
    ~0100 = 1011
    0101 & 1011 = 0001
    */

    // Example usage of the function
    // Let's say we want to clear the bit at position 2 in the number 5 (binary: 0101)
    // The expected result is 0001
    cout << "Result of clearing bit at position 2 in 5: " << clearBitAtPosition(5, 2) << endl;

    return 0;
}