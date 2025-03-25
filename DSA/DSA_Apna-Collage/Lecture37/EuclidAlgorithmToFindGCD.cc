#include<iostream>
using namespace std;

// Function to find the Greatest Common Divisor (GCD) of two numbers using the Euclidean algorithm
int findGCD(int num1, int num2){
    // Initialize variables for the Euclidean algorithm
    int remainder = 0; // To store the remainder of the division

    // Loop until the second number becomes 0
    while (num2 != 0)
    {
        // Calculate the remainder of the division of num1 by num2
        remainder = num1 % num2;
        // Update num1 and num2 for the next iteration
        num1 = num2;
        num2 = remainder;
    }
    // The GCD is the last non-zero remainder, which is stored in num1
    return num1;
}

int main(){

    int number1, number2; // Variables to store the two input numbers
    // Input the two numbers from the user
    cin >> number1 >> number2;

    // Output the GCD of the two numbers
    cout << findGCD(number1, number2) << " ";

    return 0;
}

// Time Complexity Analysis:
// The time complexity of the findGCD function is O(log(min(num1, num2))) because the Euclidean algorithm reduces the problem size by a factor of at least 2 in each iteration.
// The space complexity is O(1) as it only uses a constant amount of space to store the variables, regardless of the input size.