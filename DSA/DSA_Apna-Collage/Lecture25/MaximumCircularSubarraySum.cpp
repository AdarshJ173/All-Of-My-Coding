#include<bits/stdc++.h>
using namespace std;

// Function to find the maximum sum of a subarray using Kadane's Algorithm
int kadane(int arr[], int n){
    int currentSum = 0; // Initialize current sum to 0
    int maxSum = INT_MIN; // Initialize max sum to the smallest possible integer value
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i]; // Add the current element to the current sum
        if(currentSum < 0){ // If the current sum becomes negative
            currentSum = 0; // Reset the current sum to 0
        }
        maxSum = max(maxSum, currentSum); // Update max sum if the current sum is greater
    }
    return maxSum; // Return the maximum sum found
}

int main(){

    // The maximum sum of a circular subarray can be found by considering two cases:
    // 1. The maximum sum subarray does not wrap around the end of the array.
    // 2. The maximum sum subarray wraps around the end of the array.
    // The maximum sum of a subarray that wraps around the end of the array can be found by
    // finding the total sum of the array and subtracting the sum of the non-contributing elements.

    int n; // Declare an integer variable 'n' to store the size of the array.
    cin>>n; // Read the size of the array from the user and store it in 'n'.

    int arr[n]; // Declare an array 'arr' of size 'n' to store the elements of the array.

    for (int i = 0; i < n; i++) // Loop to read each element of the array from the user.
    {
        cin>>arr[i]; // Read an element from the user and store it in the array at index 'i'.
    }
    

    int wrapsum; // Declare an integer variable 'wrapsum' to store the sum of the subarray that wraps around the end of the array.
    int nonwrapsum; // Declare an integer variable 'nonwrapsum' to store the sum of the subarray that does not wrap around the end of the array.

    nonwrapsum = kadane(arr,n); // Find the maximum sum of a subarray that does not wrap around the end of the array.
    int totalsum = 0; // Initialize 'totalsum' to 0 to calculate the total sum of the array.

    for (int i = 0; i < n; i++) // Loop to calculate the total sum of the array and invert the array.
    {
        totalsum += arr[i]; // Add the current element to 'totalsum' to calculate the total sum of the array.
        arr[i] = -arr[i]; // Invert the current element to find the sum of the non-contributing elements.
    }
    
    wrapsum = totalsum + kadane(arr,n); // Calculate the sum of the subarray that wraps around the end of the array.

    cout<<max(wrapsum,nonwrapsum)<<endl; // Print the maximum sum found between 'wrapsum' and 'nonwrapsum'.

}