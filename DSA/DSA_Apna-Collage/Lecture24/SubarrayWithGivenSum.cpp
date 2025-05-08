#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    Problem:
        given an unsorted array A of size N of non-Negative integers, find a continues subarray which adds to given numbers S.
    Constraints:
        1 <= N <=10^5
        0 <= Ai <= 10^10
    
    Example:
        N = 5,S = 12
        A[] = {1,2,3,7,5}

        Output : 2 4
        Explanation : the sum of elements from 2nd position to 4th position is 12.

    Brute Force:
        Find sum of all possible subarrays. If any  of the sum equates to S, output the starting and ending index of the Subarray.
        Time Complexity O(n^2)

    Optimized approach:
        keep 2 pointers st and en, and a variable currSum sum from st to en.
        increment en till currSum + a[en]>S
        start increasing st until curSum <= S
        
        Time Complexity : O(n)
    
    */

   int n,s;
   cin>>n>>s; // Reading the size of the array and the target sum from the user.

   int a[n]; // Declaring an array of size n to store the elements.

   for (int i = 0; i < n; i++)
   {
        cin>>a[i]; // Reading each element of the array from the user.
   }

   int i = 0,j = 0,st = -1,en = -1,sum = 0; // Initializing variables: i and j as pointers, st and en to store the start and end indices of the subarray, and sum to keep track of the current sum.

   while (j<n && sum+a[j] <= s) // Loop to find the initial subarray that sums up to S or less.
   {
        sum += a[j]; // Adding the current element to the sum.
        j++; // Moving the end pointer to the next element.
   }
   
   if(sum == s){ // If the sum of the initial subarray equals S.
    cout<<i+1<<" "<<j<<endl; // Outputting the start and end indices of the subarray.
    return 0; // Exiting the program.
   }
   
   while (j<n) // Loop to find the subarray that sums up to S.
   {
        sum += a[j]; // Adding the current element to the sum.
        while (sum>s) // If the sum exceeds S.
        {
            sum -= a[i]; // Subtracting the element at the start pointer from the sum.
            i++; // Moving the start pointer to the next element.
        }

        if(sum == s){ // If the sum equals S.
            st = i+1; // Updating the start index.
            en = j+1; // Updating the end index.
            break; // Exiting the loop.
        }
        j++; // Moving the end pointer to the next element.
   }
   
   cout<<st<<" "<<en<<endl; // Outputting the start and end indices of the subarray that sums up to S.
    
return 0;
}

// Time Complexity: O(n) where n is the size of the array. This is because we are traversing the array once.
// Space Complexity: O(1) as we are using a constant amount of space to store the variables.