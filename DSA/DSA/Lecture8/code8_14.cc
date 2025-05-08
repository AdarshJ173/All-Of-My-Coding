/// PASS BY VALUE
#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is :"<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"Number n is "<<n<<endl;

    return 0;
}

/// lets say input is 6 then it goes do dummy > then main

/*
/ The code you provided is a simple C++ program that demonstrates pass by value. Here's a brief explanation of the code:

The program includes the iostream library and defines the main function, which is the entry point of the program.
Inside the main function, an integer variable n is declared and initialized with a value entered by the user.
The dummy function is called with n as an argument. The dummy function takes an integer parameter n by value, meaning it creates a copy of the argument passed to it.
Inside the dummy function, the value of n is incremented by 1, and then printed to the console.
After the dummy function returns, the value of n in the main function remains unchanged, demonstrating the concept of pass by value.
*/