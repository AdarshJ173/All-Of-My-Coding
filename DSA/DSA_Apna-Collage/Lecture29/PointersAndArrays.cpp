#include<bits/stdc++.h>
using namespace std;

// Function to demonstrate pointer operations on arrays
int main(){
    // Declare and initialize an integer array 'arr' with values {10, 20, 30}.
    int arr[] = {10, 20, 30};
    // Print the first element of the array 'arr' using the pointer 'arr'.
    cout << "First element of 'arr': " << *arr << endl << '\n';

    // Declare a pointer 'ptr' to an integer and assign the address of the first element of 'arr' to it.
    int *ptr = arr;
    // Loop to iterate through the array 'arr' using pointer 'ptr'.
    for (int i = 0; i < 3; i++)
    {
        // Print the value at the current position pointed by 'ptr'.
        cout << "Value at position " << i << ": " << *ptr << endl;
        // Increment 'ptr' to point to the next element in the array.
        ptr++;
    }
    cout << endl;

    // Loop to iterate through the array 'arr' using array indexing.
    for (int i = 0; i < 3; i++)
    {
        // Print the value at the current index 'i' of the array 'arr'.
        cout << "Value at index " << i << ": " << arr[i] << endl;
    }
    // Note: Incrementing 'arr' directly is not allowed as it is an array, not a pointer.

    return 0;
}