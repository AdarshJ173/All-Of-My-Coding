#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    Problem:
        you are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
    
    Constraints:
        1 <= N <= 10^6
        -10^6 <= Ai <= 10^6
    
    Base Idea:
        Build a boolean check [] array that will depict if any element x is present in the array or not.
        iterate over the array and mark non-negative a[i] as True.

    */

   int n;
   cin>>n; // taking input for the size of the array

   int a[n]; // declaring an array of size n
   for (int i = 0; i < n; i++) // iterating over the array
   {
        cin>>a[i]; // taking input for each element of the array
   }
   
   const int N = 1e6 +2; // declaring a constant N
   bool check[N]; // declaring a boolean array of size N

   for (int i = 0; i < N; i++) // iterating over the boolean array
   {
        check[i] = false; // initializing each element of the boolean array to false
   }
   
   for (int i = 0; i < n; i++) // iterating over the array
   {
        if(a[i] >= 0){ // checking if the element is non-negative
            check[a[i]] = true; // marking the element as present in the boolean array
        }
   }
   int ans = -1; // initializing the answer to -1

   for (int i = 0; i < N; i++) // iterating over the boolean array
   {
        if(check[i] == false){ // checking if the element is not present in the array
            ans = i; // updating the answer
            break; // breaking the loop
        }
   }
   
   cout<<ans<<endl; // printing the answer

return 0; // returning 0 to indicate successful execution
}

// Time Complexity: O(N) where N is the size of the array. This is because we are traversing the array once and the boolean array once.
// Space Complexity: O(N) as we are using a boolean array of size N to store the presence of elements.