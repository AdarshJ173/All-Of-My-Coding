#include<iostream>
using namespace std;
                   
int main(){

    // Pointers:
    // Pointers are variables that store the address of other variables.
    // They are used to indirectly access the value stored at that memory location.

   // Declare and initialize an integer variable 'a' with value 10.
   int a = 10;
   // Declare a pointer 'aptr' to an integer.
   int *aptr;
   // Assign the address of 'a' to 'aptr'.
   aptr = &a;

   // Print the address of 'a' using the address-of operator (&).
   cout<<"Address of 'a': "<<&a<<endl;
   // Print the value stored in 'aptr', which is the address of 'a'.
   cout<<"Value stored in 'aptr': "<<aptr<<endl;

   // Dereference 'aptr' to access the value stored at the address it points to.
   // This will print the value of 'a'.
   cout<<"Value of 'a' through 'aptr': "<<*aptr<<endl;

   // Change the value of 'a' through 'aptr'.
   *aptr = 20;
   // Print the updated value of 'a'.
   cout<<"Updated value of 'a': "<<a<<endl;

return 0;
}