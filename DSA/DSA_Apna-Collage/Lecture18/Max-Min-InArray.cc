#include<bits/stdc++.h>
using namespace std;

int main(){

    // This line declares an integer variable 'n' to store the size of the array.
    int n;
    // This line reads an integer from the input and stores it in 'n'.
    cin>>n;

    // This line declares an array 'arr' of size 'n' to store integers.
    int arr[n];
    // This loop iterates 'n' times to read 'n' integers from the input and store them in the array 'arr'.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // This line initializes 'maxNo' with the smallest possible integer value to find the maximum number in the array.
    int maxNo = INT_MIN;
    // This line initializes 'minNo' with the largest possible integer value to find the minimum number in the array.
    int minNo = INT_MAX;

    // This loop iterates through the array to find the maximum and minimum numbers.
    for (int i = 0; i < n; i++)
    {
        // This line updates 'maxNo' if the current array element is greater than 'maxNo'.
        maxNo = max(maxNo,arr[i]);
        // This line updates 'minNo' if the current array element is smaller than 'minNo'.
        minNo = min(minNo,arr[i]);
        // The commented-out code is an alternative way to update 'maxNo' and 'minNo' using if conditions.
        
        // if(arr[i]>maxNo){
        //     maxNo = arr[i];
        // }
        // if (arr[i]<minNo)
        // {
        //     minNo = arr[i];
        // }
    }
    
    // This line prints the maximum number found in the array.
    cout<<"max. num is : "<<maxNo<<endl;
    // This line prints the minimum number found in the array.
    cout<<"min. num is : "<<minNo<<endl;
    

    // This line returns 0 to indicate the successful execution of the program.
    return 0;
}