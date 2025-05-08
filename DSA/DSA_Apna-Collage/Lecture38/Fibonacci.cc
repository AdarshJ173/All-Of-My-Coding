#include<iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int calculateFibonacci(int n){
    // Base case: If n is 0 or 1, return n directly
    if(n == 0 || n == 1){
        return n;
    }
    // Recursive case: Calculate the nth Fibonacci number by summing the two preceding ones
    else{
        return calculateFibonacci(n-1)+calculateFibonacci(n-2);
    }
}

int main(){
    // Variable to store the user's input for the Fibonacci sequence position
    int n;
    // Prompt user to enter the position in the Fibonacci sequence
    cin>>n;
    // Call the function to calculate the nth Fibonacci number and print the result
    cout << "The " << n << "th Fibonacci number is: " << calculateFibonacci(n) << endl;
    // Return 0 to indicate successful execution
    return 0;
}