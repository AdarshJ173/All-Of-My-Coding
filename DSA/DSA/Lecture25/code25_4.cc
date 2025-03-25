#include<iostream>
using namespace std;


// Main function.
int main(){

    // Declaring a variable 'num' and assigning it the value '5'.
    int num = 5;

    // Declaring a variable 'a' and assigning it the value of 'num'.
    int a = num;

    // Printing the value of 'num' before incrementing 'a'.
    cout<<"a before: "<<num<<endl;

    // Incrementing the value of 'a' by adding '1' to it.
    a++;

    // Printing the value of 'num' after incrementing 'a'.
    cout<<"a after: "<<num<<endl<<'\n';


    // Declaring a pointer-to-integer 'p' and assigning it the address of 'num'.
    int *p = &num;

    // Printing the value of 'num' before incrementing the value at the address pointed by 'p'.
    cout<<"before: "<<num<<endl;

    // Incrementing the value at the address pointed by 'p' by adding '1' to it.
    (*p)++;

    // Printing the value of 'num' after incrementing the value at the address pointed by 'p'.
    cout<<"after: "<<num<<endl<<'\n';


    // Declaring another pointer-to-integer 'q' and assigning it the address of 'num'.
    int *q = p;

    // Printing the address of 'p' and 'q' to compare that they are pointing to the same address.
    cout<<p<<" - "<<q<<endl;

    // Printing the value at the address pointed by 'p' and 'q' to compare that they have the same value.
    cout<<*p<<" - "<<*q<<endl<<'\n';


    /// IMP

    // Declaring a variable 'i' and assigning it the value '4'.
    int i = 4;

    // Declaring a pointer-to-integer 't' and assigning it the address of 'i'.
    int *t = &i;

    // Printing the value pointed to by 't' after incrementing it.
    cout<<"*t is : "<<(*t)++<<endl<<'\n';

    // Printing the value pointed to by 't' after assigning 'i+1' to it.
    cout<<"before : "<<*t<<endl;
    *t = *t + 1;
    cout<<"*t is (*t = *t + 1;) : "<<*t<<endl<<'\n';

    // Printing the address of 't' after incrementing it.
    cout<<"before : "<<t<<endl;
    t = t +1;
    cout<<"t (t = t +1;) is : "<<t<<endl<<'\n';

    // Returning '0' to indicate successful execution.
    return 0;
}

