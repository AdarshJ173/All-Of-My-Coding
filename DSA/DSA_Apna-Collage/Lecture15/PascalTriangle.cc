// This program generates Pascal's Triangle

// Include the input/output stream library
#include<iostream>

// Use the standard namespace to avoid prefixing std:: before cout, cin, etc.
using namespace std;

// Function to calculate factorial of a number
int fact(int n){
    // Initialize factorial to 1
    int factorial = 1;
    // Loop from 2 to n (inclusive)
    for (int i = 2; i <= n; i++)
    {
        // Multiply factorial by i in each iteration
        factorial *= i;
    }
    // Return the final factorial value
    return factorial;
}

// Main function - entry point of the program
int main(){
    // Declare an integer variable to store the number of rows
    int n;
    // Read the number of rows from user input
    cin >> n;

    // Outer loop to iterate through each row (0 to n-1)
    for (int i = 0; i < n; i++)
    {
        // Inner loop to print each element in the current row (0 to i)
        for (int j = 0; j <= i; j++)
        {
            // Calculate and print the current element using the combination formula
            // C(i,j) = i! / (j! * (i-j)!)
            cout << fact(i) / (fact(j) * fact(i-j)) << " ";
        }
        // Move to the next line after printing all elements in the current row
        cout << endl;
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}