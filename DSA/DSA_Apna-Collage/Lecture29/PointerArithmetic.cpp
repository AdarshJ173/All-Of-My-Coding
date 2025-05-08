#include<bits/stdc++.h>
using namespace std;

// Function to demonstrate pointer arithmetic operations
int main(){
    // Declare and initialize an integer variable 'a' with value 10.
    int a = 10;
    // Declare a pointer 'aptr' to an integer and assign the address of 'a' to it.
    int *aptr = &a;
    // Print the address of 'a' using the pointer 'aptr'.
    cout << "Address of 'a': " << aptr << endl;

    // Increment the pointer 'aptr' to point to the next integer location.
    aptr++;
    // Print the address after incrementing 'aptr'. This will print the address of the next integer location.
    cout << "Address after incrementing 'aptr': " << aptr << endl;

    // Declare and initialize a character variable 'ch' with value 'a'.
    char ch = 'a';
    // Declare a pointer 'cptr' to a character and assign the address of 'ch' to it.
    char *cptr = &ch;
    // Print the address of 'ch' using the pointer 'cptr'.
    cout << "Address of 'ch': " << cptr << endl;

    // Increment the pointer 'cptr' to point to the next character location.
    cptr++;
    // Print the address after incrementing 'cptr'. This will print the address of the next character location.
    cout << "Address after incrementing 'cptr': " << cptr << endl;

    return 0;
}