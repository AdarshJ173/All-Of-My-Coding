// Explanation of Recursion in C++ from First Principles Thinking

// Recursion is a programming technique where a function calls itself repeatedly until it reaches a base case that stops the recursion.
// It's a way to solve problems by breaking them down into smaller instances of the same problem, which are then solved recursively.
// This process continues until the solution to the original problem is found.

// Key Concepts:
// 1. Base Case: A trivial case that can be solved directly, which serves as the stopping point for the recursion.
// 2. Recursive Case: The function calls itself with a smaller input or a modified version of the original problem.
// 3. Recursive Function: A function that calls itself, either directly or indirectly.

// How Recursion Works:
// 1. The function is called with an initial input.
// 2. The function checks if the input meets the base case condition. If true, it returns a solution.
// 3. If not, the function calls itself with a modified input (usually smaller or more manageable).
// 4. Steps 2 and 3 repeat until the base case is met.
// 5. The solutions from each recursive call are combined to form the final solution.

// Benefits of Recursion:
// 1. Simplifies complex problems by breaking them down into smaller, more manageable parts.
// 2. Can be more intuitive and easier to understand for problems with a recursive structure.
// 3. Can be more efficient for problems with overlapping subproblems.

// Drawbacks of Recursion:
// 1. Can be less efficient due to the overhead of function calls and returns.
// 2. Can lead to stack overflow if the recursion depth is too high.
// 3. Can be harder to debug due to the complex call stack.

// In summary, recursion is a powerful technique for solving problems by breaking them down into smaller instances of themselves. It's essential to understand the base case, recursive case, and how the function calls itself to solve the problem.


#include<iostream>
using namespace std;

// Function to calculate the sum of all numbers from 1 to n using recursion
int calculateSum(int n){
    // Base case: If n is 0, return 0 as the sum
    if(n == 0)
        return 0;

    // Recursive case: Calculate the sum of numbers from 1 to n-1 and add n to it
    int prevSum = calculateSum(n-1);
    return n + prevSum;
}

int main(){
    // Variable to store the input number
    int n;
    // Read the input number from the user
    cin>>n;

    // Call the function to calculate the sum and print the result
    cout << "Sum of numbers from 1 to " << n << " is: " << calculateSum(n) << endl;

    return 0;
}