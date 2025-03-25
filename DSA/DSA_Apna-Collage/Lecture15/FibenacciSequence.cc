#include<iostream>
using namespace std;

// This function generates and prints the Fibonacci sequence up to the nth term
void fib(int n){
    // Initialize the first two terms of the Fibonacci sequence
    int t1 = 0;  // First term
    int t2 = 1;  // Second term
    int nextTerm;  // Variable to store the next term in the sequence

    // Loop to generate and print the Fibonacci sequence
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;  // Print the current term
        nextTerm = t1 + t2;  // Calculate the next term by adding the previous two terms
        t1 = t2;  // Update t1 to be the previous t2
        t2 = nextTerm;  // Update t2 to be the newly calculated term
    }
    return;  // End of function (void return type)
}

int main(){
    // Declare a variable to store the number of terms
    int n;
    
    // Read the number of terms from user input
    cin >> n;

    // Call the fib function to generate and print the Fibonacci sequence
    fib(n);

    // Return 0 to indicate successful program execution
    return 0;
}