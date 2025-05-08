#include<bits/stdc++.h>
using namespace std;
/*
Kadane's Algorithm:
Kadane's algorithm is an algorithm for finding the maximum sum of a subarray within a one-dimensional array of numbers. It is a dynamic programming algorithm that scans the entire array and at each position finds the maximum sum of the subarray ending at that position.

The algorithm works by scanning the entire array and at each position finding the maximum sum of the subarray ending at that position. This is done by keeping a running total of the sum of the subarray ending at the current position. If the sum becomes negative, it is reset to zero. The maximum sum found so far is updated whenever a larger sum is found.

The algorithm has a time complexity of O(n), where n is the size of the array, as it only requires a single pass through the array. The space complexity is O(1), as it only requires a constant amount of space to store the maximum sum and the current sum.

Here is a step-by-step breakdown of the algorithm:

1. Initialize two variables: `maxSum` to store the maximum sum found so far, and `currentSum` to store the sum of the subarray ending at the current position. Both are initialized to zero.
2. Iterate through the array from left to right.
3. For each element, add it to `currentSum`.
4. If `currentSum` becomes negative, reset it to zero.
5. If `currentSum` is greater than `maxSum`, update `maxSum` with `currentSum`.
6. After iterating through the entire array, `maxSum` will hold the maximum sum of a subarray.

The key insight behind Kadane's algorithm is that the maximum sum of a subarray must either include the last element or not include the last element. If it includes the last element, then the maximum sum of the subarray ending at the last element is the maximum sum of the subarray ending at the second last element plus the last element. If it does not include the last element, then the maximum sum of the subarray ending at the last element is zero. This insight allows us to use dynamic programming to find the maximum sum of a subarray in a single pass through the array.
*/

int main(){

/*

int n; // This line declares an integer variable 'n' to store the size of the array.
cin>>n; // This line reads the size of the array from the user and stores it in 'n'.

int arr[n]; // This line declares an array 'arr' of size 'n' to store the elements of the array.

for (int i = 0; i < n; i++) // This loop iterates 'n' times to read each element of the array.
{
    cin>>arr[i]; // This line reads an element from the user and stores it in the array at index 'i'.
}

int maxSum = INT_MIN; // This line initializes 'maxSum' to the smallest possible integer value to keep track of the maximum sum found.
int currentSum = 0; // This line initializes 'currentSum' to 0 to calculate the sum of the subarray.

for (int i = 0; i < n; i++) // This loop iterates 'n' times to consider each element as the starting point of the subarray.
{
    currentSum += arr[i]; // This line adds the current element to 'currentSum' to include it in the subarray sum.
    if (currentSum > maxSum) // This line checks if the current sum is greater than the maximum sum found so far.
    {
        maxSum = currentSum; // This line updates 'maxSum' with the current sum if it is greater.
    }
    if (currentSum < 0) // This line checks if the current sum becomes negative.
    {
        currentSum = 0; // This line resets 'currentSum' to 0 to start a new subarray from the next element.
    }
}

cout<<maxSum<<endl; // This line prints the maximum sum found.

*/

    // Read the size of the array from the user
    int arraySize;
    cin >> arraySize;

    // Declare an array to store the elements
    int array[arraySize];

    // Read each element of the array from the user
    for (int elementIndex = 0; elementIndex < arraySize; elementIndex++)
    {
        cin >> array[elementIndex];
    }

    // Initialize variables to keep track of the maximum sum and the current sum
    int currentSum = 0; // Initialize current sum to 0
    int maxSum = INT_MIN; // Initialize max sum to the smallest possible integer value

    // Iterate through the array to find the maximum sum of a subarray
    for (int elementIndex = 0; elementIndex < arraySize; elementIndex++)
    {
        // Add the current element to the current sum
        currentSum += array[elementIndex];
        // If the current sum becomes negative, reset it to 0
        if(currentSum < 0){
            currentSum = 0;
        }
        // Update maxSum if the current sum is greater
        maxSum = max(maxSum, currentSum);
    }
    
    // Print the maximum sum found
    cout << maxSum << endl;

// Time Complexity: O(n) where n is the size of the array. This is because we have a single loop that iterates 'n' times.
// Space Complexity: O(1) as we are using a constant amount of space to store the variables 'n', 'maxSum', 'currentSum', and 'i'.
}