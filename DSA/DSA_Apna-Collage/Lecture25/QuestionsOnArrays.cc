#include<iostream>
using namespace std;
                   
int main(){

    /*
    Subarray:
        A subarray is a contiguous part of an array.
        ex: {-1,4,7,2}
        -1,4,7-yes          -1,4,2-no
    */
    //? print all the subarray's of a given array

    int n; // This line declares an integer variable 'n' to store the size of the array.
    cin>>n; // This line reads the size of the array from the user and stores it in 'n'.

    int arr[n]; // This line declares an array 'arr' of size 'n' to store the elements of the array.

    for (int i = 0; i < n; i++) // This loop iterates 'n' times to read each element of the array.
    {
        cin>>arr[i]; // This line reads an element from the user and stores it in the array at index 'i'.
        cout<<endl; // This line prints a newline character to move to the next line for the next input.
    }
        
    for (int i = 0; i < n; i++) // This outer loop iterates 'n' times to start the subarray from each element.
    {
        for (int j = 0; j < n; j++) // This middle loop iterates 'n' times to end the subarray at each element.
        {
            for (int k = i; k<= j;k++) // This inner loop iterates from 'i' to 'j' to print the subarray.
            {
                cout<<arr[k]<<" "; // This line prints the element at index 'k' followed by a space.
            }
            cout<<endl; // This line prints a newline character to move to the next line for the next subarray.
        }
        
    }
    
return 0;
}