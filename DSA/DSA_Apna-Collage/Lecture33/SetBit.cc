#include<bits/stdc++.h>
using namespace std;

// Function to set a bit at a specific position in a number
int setBitAtPosition(int number, int position){
    // Shift 1 to the left by 'position' bits to create a mask
    // This will create a number with a 1 at the 'position' and zeros elsewhere
    int mask = 1 << position;
    // Use bitwise OR to set the bit at 'position' in 'number'
    // The OR operation ensures that the bit at 'position' is set to 1 without affecting other bits
    return (number | mask);
}

int main(){
    // Example usage of setBitAtPosition function
    // Setting the bit at position 1 in the number 5 (binary: 0101)
    // Expected output: 7 (binary: 0111)
    cout << "Result of setting bit at position 1 in 5: " << setBitAtPosition(5, 1) << endl;
    return 0;
}