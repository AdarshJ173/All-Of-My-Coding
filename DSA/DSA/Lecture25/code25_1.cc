#include<iostream>
using namespace std;


// The main function.
int main(){

    // Define an integer variable 'num' and assign it the value '5'.
    int num = 5;

    // Print the value of 'num'.
    cout<<num<<endl;

    // The '&' operator is used to get the address of a variable.
    // The address of 'num' is printed.
    cout<<"Address of num: "<<&num<<endl;

    // Declare a pointer-to-integer variable 'ptr' and assign it the address of 'num'.
    int *ptr = &num;

    // Print the value pointed to by 'ptr'.
    cout<<"Value is : "<<*ptr<<endl;

    // Print the address of the pointer-to-integer 'ptr'.
    cout<<"Address of ptr: "<<ptr<<endl;

    // Define a double variable 'd' and assign it the value '4.3'.
    double d = 4.3;

    // Declare a pointer-to-double variable 'p2' and assign it the address of 'd'.
    double *p2 = &d;

    // Print the value pointed to by 'p2'.
    cout<<"Value is : "<<*p2<<endl;

    // Print the address of the pointer-to-double 'p2'.
    cout<<"Address of ptr: "<<p2<<endl;

    cout<<"size of integer is : "<< sizeof(num)<<endl;
    cout<<"size of pointer integer is : "<< sizeof(ptr)<<endl;

    cout<<"size of double is : "<< sizeof(d)<<endl;
    cout<<"size of pointer double is : "<< sizeof(p2)<<endl;

    // Return '0' to indicate successful execution.
    return 0;
}

