#include<bits/stdc++.h>
using namespace std;

// Function to demonstrate the use of pointers to pointers
int main(){
    // Declare and initialize an integer variable 'a' with value 10.
    int a = 10;
    // Declare a pointer 'p' to an integer and assign the address of 'a' to it.
    int *p = &a;
    // Print the value stored at the address pointed by 'p', which is the value of 'a'.
    cout << "Value of 'a' through 'p': " << *p << endl;

    // Declare a pointer 'q' to a pointer to an integer and assign the address of 'p' to it.
    int **q = &p;
    // Print the address stored in 'q', which is the address of 'p'.
    cout << "Address stored in 'q': " << q << endl;
    // Dereference 'q' to get the address stored in 'p', then dereference that address to get the value of 'a'.
    cout << "Value of 'a' through 'q': " << **q << endl;

    return 0;
}