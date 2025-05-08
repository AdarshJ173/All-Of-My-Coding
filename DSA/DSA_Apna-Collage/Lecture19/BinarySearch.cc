#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// This function performs a binary search in a sorted array to find the index of a given key.
int binarySearch(int arr[],int n,int key){
    // This line initializes 's' with the first index of the array.
    int s = 0;
    // This line initializes 'e' with the last index of the array.
    int e = n;

    // This loop continues until the start index is less than or equal to the end index.
    while (s<=e)
    {
        // This line calculates the middle index of the array.
        int mid = (s+e)/2;
        // This line checks if the middle element in the array is equal to the key we are searching for.
        if(arr[mid] == key){
            // If the key is found, the function returns the index of the key in the array.
            return mid;
        }
        // This line checks if the middle element in the array is greater than the key we are searching for.
        else if (arr[mid]>key)
        {
            // If the middle element is greater than the key, the end index is updated to the middle index minus one.
            e = mid-1;
        }
        // This line is executed if the middle element in the array is less than the key we are searching for.
        else{
            // If the middle element is less than the key, the start index is updated to the middle index plus one.
            s = mid +1;
        }
        
    }
    // If the key is not found in the array, the function returns -1 to indicate that the key is not present.
    return -1;
}

int main(){
    // This is a comment explaining the purpose of the program.
    //* binary search
    // {8,10,12,21,27,34,42}
    // key = 27 

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

    // This line declares an integer variable 'key' to store the key to be searched in the array.
    int key;
    // This line reads an integer from the input and stores it in 'key'.
    cin>>key;

    // This line calls the binarySearch function with the array, its size, and the key as arguments, and prints the result.
    cout<<binarySearch(arr,n,key)<<endl;
    
    // This line returns 0 to indicate the successful execution of the program.
    return 0;
}
/*
Time complexity of Binary Search:
after firs iteration , length of array -> n
after second iteration , length of array -> n/2
after third iteration , length of array -> n/2/2 = n/2^2
after k iterations, length of array -> n/2^k

Let the length of array become 1 after k iterations
=> n/2^k = 1
=> n = n^k
=> log 2 (n) = log 2 (2^k)
=> log 2 (n) = k log 2 2
=> k = log 2 n

therefore , Time complexity  = O(log 2)
*/

// Time Complexity Analysis:
//      The binarySearch function iterates through the array until the start index is less than or equal to the end index, resulting in a time complexity of O(log n), where n is the size of the array.
//      The main function reads the size of the array and the key, and then iterates through the array to store elements, resulting in a time complexity of O(n) for these operations.
// Therefore, the overall time complexity of the program is O(n) + O(log n) = O(n).

// Space Complexity Analysis:
// The program uses a fixed amount of space to store the size of the array, the key, and the array itself, resulting in a space complexity of O(n), where n is the size of the array.