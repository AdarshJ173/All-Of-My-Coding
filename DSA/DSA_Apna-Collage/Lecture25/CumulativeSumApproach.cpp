#include<bits/stdc++.h>
using namespace std;

int main(){
    // This line reads an integer from the input and stores it in the variable 'n'.
    int n;
    cin>>n;

    // This line declares an array 'arr' of size 'n' to store integers.
    int arr[n];

    // This loop iterates 'n' times to read 'n' integers from the input and stores them in the array 'arr'.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // This line declares an array 'CurrSum' of size 'n+1' to store the cumulative sum of the elements in 'arr'.
    int CurrSum[n+1];

    // This line initializes the first element of 'CurrSum' to 0, which represents the sum of no elements.
    CurrSum[0] = 0;

    // This loop calculates the cumulative sum of the elements in 'arr' and stores it in 'CurrSum'.
    for (int i = 1; i <=n; i++)
    {
        // This line calculates the cumulative sum up to the 'i'th element and stores it in 'CurrSum[i]'.
        CurrSum[i] = CurrSum[i-1] + arr[i-1];
    }
    
    // This line initializes 'maxSum' to the smallest possible integer value, which will be used to store the maximum sum found.
    int maxSum = INT_MIN;
    // This loop iterates over the array 'CurrSum' to find the maximum sum of a subarray.
    for (int i = 1; i <=n; i++)
    {
        // This line initializes 'sum' to 0, which will be used to calculate the sum of a subarray.
        int sum = 0;
        // This loop calculates the sum of all subarrays ending at 'i' and updates 'maxSum' if a larger sum is found.
        for (int j = 0; j < i; j++)
        {
            // This line calculates the sum of the subarray from 'j' to 'i' using the cumulative sum array 'CurrSum'.
            sum = CurrSum[i] - CurrSum[j];
            // This line updates 'maxSum' if the current sum is greater than 'maxSum'.
            maxSum = max(sum, maxSum);
        }
        
    }
    
    // This line prints the maximum sum found.
    cout<<maxSum<<endl;
    
    // This line returns 0 to indicate successful execution of the program.
    return 0;

}

// Time Complexity: O(n^2) due to the nested loops that iterate over the array.
// Space Complexity: O(n) for the 'CurrSum' array.