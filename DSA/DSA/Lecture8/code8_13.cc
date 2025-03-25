//! FIBONACCI SERIES

#include <iostream>

using namespace std;

// Function to calculate the nth term of the Fibonacci series
int fibonacci(int n) {
  // Base cases: 1st term is 1, 0th term is 0 (implicitly)
  if (n <= 1) {
    return n;
  }

  // Initialize previous terms a and b, and current term c
  int a = 0, b = 1, c;

  // Iterate n-2 times, starting from the 2nd term
  for (int i = 2; i <= n; i++) {
    // Calculate the current Fibonacci number as the sum of a and b
    c = a + b;

    // Update a and b to hold the previous values
    a = b;
    b = c;
  }

  // Return the calculated nth term
  return c;
}

int main() {
  // Prompt the user to enter the position n of the desired term (starting from 1)
  int n;
  cout << "Enter the position of the term (n): ";
  cin >> n;

  // Call the fibonacci function with n-1 because the function's logic starts from the 0th term (implicitly)
  // This ensures it calculates the correct term based on the user's 1-based indexing
  cout << "The " << n << "th term of the Fibonacci series is: " << fibonacci(n - 1) << endl;

  // Return 0 to indicate successful execution
  return 0;
}

/*
///Explanation:

fibonacci Function:

- This function takes an integer n as input, representing the position of the desired term (starting from 1).
- The base cases handle the 1st term (n <= 1) directly, returning n (1 for the 1st term).
- The loop iterates n-2 times (starting from the 2nd term).
- Inside the loop:
  - c is calculated as the sum of a and b, representing the current Fibonacci number.
  - a and b are updated to hold the previous values.

main Function:

- It prompts the user to enter the position n of the desired term (starting from 1).
- It calls the fibonacci function with n-1 because the function's logic starts from the 0th term (implicitly). This ensures it calculates the correct term based on the user's 1-based indexing.
- The function calculates the nth term and returns the result.
- The main function prints the calculated term, indicating its position in the series.
- This program uses iteration for better performance and adjusts the input by subtracting 1 before calling the function to accommodate the 1-based indexing of the Fibonacci series.
*/


/// i figured out the formula for it
/*
if n is the input then 
1st : n-2 = n
2nd : (n-1) + (n-2)

ex:

n = 5
n-2 = 5-2 = 3 = n

(3-1) + (3-2) = 2 + 1 = 3

therefor the value of 5th term in the series is 3
i.e : 0,1,1,2,3,5,8,13....
      1-2-3-4-5-6-7-8-
*/