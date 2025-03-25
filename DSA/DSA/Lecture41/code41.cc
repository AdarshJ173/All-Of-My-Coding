/// TIME & SPACE COMPLEXITY
/*
TIME COMPLEXITY: Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. It is commonly expressed using Big O notation.

SPACE COMPLEXITY: Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input. It is also commonly expressed using Big O notation.
*/
/*

* LINEAR SEARCH:
bool isPresent(int *arr,int n, int value)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            return true;
        }
    }
    return false;
}
Time Complexity: O(n)
Space Complexity: O(1)

* RECURSION:
@FACTORIAL
int factorial(int n)
{
    /base case
    if(n==0)
    {
        return 1;
    }
    / recursive case
    return n*factorial(n-1);
}
Time Complexity: O(n)
Explanation: Sum of numbers from n to 1
f(n) = n + f(n-1)
t(n) = k1 + k2 + T(n-1)
t(n) = k + t(n-1)
t(n-1) = k + t(n-1)
t(n-2) = k + t(n-2)
t(n-3) = k + t(n-3)
...
t(1) = k
t(0) = k1
-----------
t(n) = n*k + k1
T(n) = kn + k1
T(n) = kn
t(n) = n
O(n)

Space Complexity: O(n) _ explanation : n+(n-1)+(n-2)+...+1

@BINARY SEARCH
bool binarySearchRecursive(int *arr, int s, int e, int k) {
    /base case
    if (s <= e) {
        int mid = s + (e - s) / 2;

        /element found
        if (arr[mid] == k) {
            return true;
        }
        if (arr[mid] < k) {
            return binarySearchRecursive(arr, mid + 1, e, k);
        }
        return binarySearchRecursive(arr, s, mid - 1, k);
    }
    return false;
}
Time Complexity: O(logn)
Space Complexity: O(logn)

@ MERGE SORT

Time complexity: O(nlogn)
Space complexity: O(n)

@ Fibonacci
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
Time Complexity: O(2^n)
Space Complexity: O(n)

/*
Explanation of calculating time and space complexity:

1. Time Complexity:
   - Time complexity represents the amount of time taken by an algorithm to run as a function of the length of the input.
   - It is usually denoted using Big O notation (O()) to describe the upper bound of the time taken.
   - To calculate time complexity:
     - Analyze the number of operations performed based on the input size.
     - Consider the worst-case scenario.
     - Identify loops, recursive calls, and other operations that depend on the input size.
     - Express the time complexity in terms of the input size (n).

2. Space Complexity:
   - Space complexity represents the amount of memory space required by an algorithm to run as a function of the length of the input.
   - It is also denoted using Big O notation (O()) to describe the upper bound of the space used.
   - To calculate space complexity:
     - Analyze the memory used by variables, data structures, function calls, etc., based on the input size.
     - Consider the auxiliary space used by the algorithm.
     - Express the space complexity in terms of the input size (n).

Example:
- For a simple loop that iterates through an array of size n:
  - Time Complexity: O(n) as it performs n iterations.
  - Space Complexity: O(1) as it only uses a constant amount of space for loop variables.

Remember, analyzing time and space complexity helps in understanding the efficiency and scalability of algorithms.
*/


