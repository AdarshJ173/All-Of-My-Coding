#include<bits/stdc++.h>
using namespace std;

    /*
    1.Write a function that takes an array of integers and its size as arguments, and returns the sum of all the elements in the array.
    */

int SumOfArray(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int main(){
   

    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<SumOfArray(arr,n)<<endl;

}

//* bc khud code liha , mkc , maza aa gaya ,, fuck yeah...