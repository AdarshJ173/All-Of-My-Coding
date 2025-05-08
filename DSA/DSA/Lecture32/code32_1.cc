/// Fibonacci Series

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to calculate the nth Fibonacci number using recursion
int fbn(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) return 0;
    // Base case: if n is 1, return 1
    if (n == 1) return 1;
    // Recursive case: return the sum of the (n-1)th and (n-2)th Fibonacci numbers
    return fbn(n - 1) + fbn(n - 2);
}

int main() {
    long long int n; // Declare an integer variable to store the input number
    cout << "Enter n: "; // Prompt the user to enter a number
    cin >> n; // Read the input number from the user

    // Call the fbn function to calculate the nth Fibonacci number and print the result
    cout <<fbn(n) << " ";
    return 0; // Return 0 to indicate successful execution
}

//! if i input a very big value then it does not give the output

// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbkNfSG5BZHpybmdybEd1YzNaekd3RDJpbVRBQXxBQ3Jtc0trb0FPZ19jQ0txeGdUa2hlbGpGMmRqY1RVeTBpbTlLXzl5aFdEMVk1MXRwTnczc18tb0ludHpFbWlQY3lIRW5sSVJaSXJRSHFyYWkwbTFiOWJwS2FRd0NUNEMzRHJuZGNDNFYyY0ZteGwyd0x0Y19Kcw&q=https%3A%2F%2Fleetcode.com%2Fproblems%2Ffibonacci-number%2F&v=zg8Y1oE4qYQ

