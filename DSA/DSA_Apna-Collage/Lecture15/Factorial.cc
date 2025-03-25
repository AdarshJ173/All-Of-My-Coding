#include<iostream>
using namespace std;

// This function calculates the factorial of a given number
int factorial(int n){
    // Initialize the factorial to 1
    int fact = 1;
    // Loop from 2 to n (inclusive)
    for (int i = 2; i <= n; i++)
    {
        // Multiply the current factorial by i
        fact *= i;
    }
    // Return the final factorial value
    return fact;
}

int main(){
    // Declare a variable to store the input number
    int n;
    // Read the input number from the user
    cin >> n;

    // Calculate the factorial of n using the factorial function
    int ans = factorial(n);
    // Print the result
    cout << ans << endl;

    // Return 0 to indicate successful program execution
    return 0;
}