#include<iostream>
using namespace std;

// Function to calculate the factorial of a number
int calculateFactorial(int n){
    // Base case: factorial of 0 is 1
    if(n == 0){
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * calculateFactorial(n-1);
    }
}

int main(){
    int number; // Variable to store the input number
    cin>>number; // Read the number from the user

    // Call the factorial function and print the result
    cout << "Factorial of " << number << " is: " << calculateFactorial(number) << endl;

    return 0;
}