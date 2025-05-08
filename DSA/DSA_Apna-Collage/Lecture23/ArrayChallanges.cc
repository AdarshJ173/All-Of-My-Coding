#include<iostream>
#include<bits/stdc++.h>
using namespace std;
                   
int main(){

    /*
    ? Max till i
    ? Problem : Given an array a[] of size n. For every i from 0 to n-1 - output max( a[0],a[1],...,a[i])
    *Approach:
    1.keep a variable mx which stores the maximum till ith element.
    2.iterate over the array and update,
    mx = max(mx,a[i])
    */

    int mx = INT_MIN;

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
    cout<<endl;

}