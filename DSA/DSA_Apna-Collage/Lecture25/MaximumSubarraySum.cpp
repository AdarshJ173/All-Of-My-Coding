#include<bits/stdc++.h>
using namespace std;

int main(){
     int n; // This line declares an integer variable 'n' to store the size of the array.
    cin>>n; // This line reads the size of the array from the user and stores it in 'n'.

    int arr[n]; // This line declares an array 'arr' of size 'n' to store the elements of the array.

    for (int i = 0; i < n; i++) // This loop iterates 'n' times to read each element of the array.
    {
        cin>>arr[i]; // This line reads an element from the user and stores it in the array at index 'i'.
    }
        
    int maxSum = INT_MIN; // This line initializes 'maxSum' to the smallest possible integer value to keep track of the maximum sum found.
    for (int i = 0; i < n; i++) // This outer loop iterates 'n' times to start the subarray from each element.
    {
        for (int j = 0; j < n; j++) // This middle loop iterates 'n' times to end the subarray at each element.
        {
            int sum = 0 ; // This line initializes 'sum' to 0 to calculate the sum of the subarray.
            for (int k = i; k<= j;k++) // This inner loop iterates from 'i' to 'j' to calculate the sum of the subarray.
            {
                sum += arr[k]; // This line adds the element at index 'k' to 'sum'.
                // cout<<arr[k]<<" "; // This line prints the element at index 'k' followed by a space, but it's commented out.
            }
            // cout<<endl; // This line prints a newline character to move to the next line for the next subarray, but it's commented out.
            maxSum = max(maxSum,sum); // This line updates 'maxSum' with the maximum value between 'maxSum' and 'sum'.
        }
        
    }
    cout<<maxSum<<endl; // This line prints the maximum sum found.
return 0; // This line returns 0 to indicate successful execution.
}

// Time Complexity: O(n^3) where n is the size of the array. This is because we have three nested loops, each iterating 'n' times.
// Space Complexity: O(1) as we are using a constant amount of space to store the variables 'n', 'maxSum', 'i', 'j', 'k', and 'sum'.