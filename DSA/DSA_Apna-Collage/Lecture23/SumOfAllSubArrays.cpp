#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    Problem: Give an array a[] of size n. Output sum of each subarray of the given array.

    Approach:
    iterate over all the subarrays.
    nested loop
    for every i = 0 to i = n-1:
        for every j = i to j = n-1:
            output sum[i...j]
    */


   int n;
   cin>>n;

   int a[n];
   
   for (int i = 0; i < n; i++)
   {
        cin>>a[i];
   }
   
   int curr = 0;

   for(int i = 0 ; i<n ; i++){
    curr = 0;
    for (int j = i; j < n; j++)
    {
        curr += a[j];
        cout<<curr<<" ";
    }
    
   }
   cout<<endl;

return 0;
}