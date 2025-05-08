#include<iostream>
using namespace std;


// The main function.
int main(){

    // Declare an integer variable 'i' and assign it the value '5'.
    int i = 5;

    // Declare a pointer-to-integer variable 'q' and assign it the address of 'i'.
    int *q = &i;

    // Print the address of 'q'.
    cout<<"Address of 'q': "<<q<<endl;

    // Dereference 'q' and print the value it points to.
    cout<<"Value of 'i' (pointed to by 'q'): "<<*q<<endl;


    // Declare a pointer-to-integer variable 'p' and assign it the address '0' (i.e. nullptr).
    int *p = 0;

    // Assign the address of 'i' to 'p'.
    p = &i;

    // Print the address of 'p'.
    cout<<"Address of 'p': "<<p<<endl;

    // Dereference 'p' and print the value it points to.
    cout<<"Value of 'i' (pointed to by 'p'): "<<*p<<endl;

    // Indicate successful completion of the program.
    return 0;
}

