#include<iostream>
using namespace std;

// Function to find the first occurrence of a number in an array
int findFirstOccurrence(int arr[], int n, int i, int key){

    // If the index is equal to the size of the array, return -1
    if (i == n)
    {
        return -1;
    }
    
    // If the current element is equal to the key, return the index
    if (arr[i] == key)
    {
        return i;
    }
    
    // Recursively call the function with the next index
    return findFirstOccurrence(arr, n, i+1, key);
}

int main(){

    // Array to be searched
    int arr[] = {4,2,1,2,5,2,7};
    
    // Key to be searched
    int key = 2;
    
    // Find the first occurrence of the key in the array
    cout << "First occurrence of " << key << " is at index " << findFirstOccurrence(arr, 7, 0, key) << endl;

return 0;
}