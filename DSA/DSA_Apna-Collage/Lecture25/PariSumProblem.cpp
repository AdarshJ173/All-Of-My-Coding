#include<bits/stdc++.h>
using namespace std;

// Function to check if there exists two elements in an array such that their sum is equal to given k.
bool pairSumExists(int arr[], int n, int k){

    /*
    // Iterate through the array to find a pair of elements that sum up to 'targetSum'.
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // Check if the sum of the current pair of elements equals 'targetSum'.
            if(arr[i] + arr[j] == targetSum){
                // If the sum equals 'targetSum', print the indices of the pair and return true.
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    // If no pair is found that sums up to 'targetSum', return false.
    return false;
    */

   // Initialize two pointers, 'low' and 'high', to the start and end of the array respectively.
   int low = 0;
   int high = n-1;

   // Loop until 'low' is less than 'high'.
   while (low < high)
   {
        // Calculate the sum of the elements at 'low' and 'high' indices.
        int sum = arr[low] + arr[high];
        // Check if the sum equals the target sum 'k'.
        if(sum == k){
            // If the sum equals 'k', print the indices and return true.
            cout<<low<<" "<<high<<endl;
            return true;
        }
        // If the sum is greater than 'k', move the 'high' pointer to the left to decrease the sum.
        else if (sum > k)
        {
            high--;
        }
        // If the sum is less than 'k', move the 'low' pointer to the right to increase the sum.
        else{
            low++;
        }
        
   }
   
   // If no pair is found that sums up to 'k', return false.
   return false;
}

int main(){
    // Example array and target sum to check for pair sum existence.
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31; // Target sum to check for pair existence.

    // Call the function to check if a pair sum exists and print the result.
    cout<<pairSumExists(arr,8,k)<<endl;

    return 0;
}

//time complexity O(n)