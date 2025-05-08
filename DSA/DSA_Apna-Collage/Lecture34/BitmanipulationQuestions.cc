#include<iostream>
using namespace std;

// Function to check if a given number is a power of 2
bool isPowerOfTwo(int number){
    // A number is a power of 2 if it has exactly one set bit in its binary representation
    // Subtracting 1 from a power of 2 will flip all the bits to the right of the rightmost set bit
    // Therefore, a power of 2 will have no set bits in common with its decremented value
    return number && !(number & (number-1));
}

int main(){

    /*
    Write a program to check if a given number is power of 2

    n = 6 = (0110)2
    n-1 = 5 = (0101)2

    n = 8 = (1000)2
    n-1 = 7 = (0111)2

    (n & n-1) has same bits as n except the rightmost set bit

    0110 & 0101 = 0100
    1000 & 0111 = 0000

    n has only one set bit , and n-1 will have all set bits after that position
    
    */
    
    // Example usage of the isPowerOfTwo function
    cout << "Is 16 a power of 2? " << isPowerOfTwo(16) << endl; // Expected output: 1 (true)
    cout << "Is 14 a power of 2? " << isPowerOfTwo(14) << endl; // Expected output: 0 (false)

    return 0;
}