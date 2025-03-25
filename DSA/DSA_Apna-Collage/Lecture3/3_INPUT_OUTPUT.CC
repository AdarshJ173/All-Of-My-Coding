// This line includes the iostream header file, which provides input/output operations in C++
#include<iostream>

// This line brings the entire std namespace into the global namespace,
// allowing us to use std:: members without the std:: prefix
using namespace std;

// This is the main function, the entry point of the program
int main(){
    // cout is the standard output stream object
    // << is the insertion operator used to insert data into the output stream
    // "Hello World\n" is the string literal we're outputting
    // \n is an escape sequence for a newline character
    cout<<"Hello World\n";

    int amount1 ;
    cout<<"enter amount1: ";cin>>amount1;
    int amount2 ;
    cout<<"enter amount2: ";cin>>amount2;

    int total_amount = amount1 + amount2;
    cout<<"The total amount is: "<<total_amount<<endl;

    // This line returns 0 to the operating system, indicating successful program execution
    return 0;
}