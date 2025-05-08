#include<bits/stdc++.h>
using namespace std;

// Function to check if a bit is set at a given position in a number
bool isBitSet(int number, int position){
    // Using bitwise AND operation to check if the bit at 'position' is set
    // If the result is not zero, it means the bit is set
    return ((number & (1 << position)) != 0);
}

// Function to find two unique numbers in an array where all numbers except two, are present twice
void findUniqueNumbers(int arr[], int size){
    // Initialize XOR sum of all elements
    int xorSum = 0;
    // Calculate XOR of all elements in the array
    for (int i = 0; i < size; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    // Store the XOR sum in a temporary variable for later use
    int tempXorSum = xorSum;
    // Initialize variables to find the position of the rightmost set bit
    int setBit = 0;
    int position = 0;

    // Find the position of the rightmost set bit in the XOR sum
    while (setBit != 1)
    {
        setBit = xorSum & 1; // Check the least significant bit
        position++;
        xorSum = xorSum >> 1; // Right shift to move to the next bit
    }

    // Initialize a new XOR sum to find the first unique number
    int newXorSum = 0;

    // Divide elements into two groups based on the bit at the found position
    for (int i = 0; i < size; i++)
    {
        // If the bit at 'position-1' is set, XOR the element with newXorSum
        if(isBitSet(arr[i], position - 1)){
            newXorSum = newXorSum ^ arr[i];
        }
    }
    
    // Print the first unique number
    cout << newXorSum << endl;
    // Print the second unique number by XORing the first unique number with the temporary XOR sum
    cout << (tempXorSum ^ newXorSum) << endl;
    
}

int main(){

    /*
    write a program to find 2 unique numbers in an array where all numbers except two, are present twice.
    {2,4,6,7,4,5,6,2}
    */

    // Example array with two unique numbers
    int arr[] = {1,2,3,1,2,3,5,7};
    // Size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // Call the function to find unique numbers
    findUniqueNumbers(arr, size);
    
    return 0;    
}