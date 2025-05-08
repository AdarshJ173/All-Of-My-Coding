#include<iostream>
using namespace std;

// Function to find the last occurrence of a key in an array
int findLastOccurrence(int arr[], int n, int i, int key){
    // Base case: If the current index is equal to the size of the array, return -1 indicating not found
    if (i == n)
    {
        return -1;
    }
    
    // Recursive case: Find the last occurrence in the rest of the array
    int lastOccurrenceInRestArray = findLastOccurrence(arr, n, i+1, key);

    // If the last occurrence is found in the rest of the array, return it
    if (lastOccurrenceInRestArray != -1)
    {
        return lastOccurrenceInRestArray;
    }

    // If the current element is equal to the key, return the current index
    if (arr[i] == key)
    {
        return i;
    }

    // If the key is not found in the current element or the rest of the array, return -1
    return -1;
}

int main(){
    // Array to be searched
    int arr[] = {4,2,1,2,5,2,7};
    
    // Key to be searched
    int key = 2;
    
    // Find the last occurrence of the key in the array
    cout << "Last occurrence of " << key << " is at index " << findLastOccurrence(arr, 7, 0, key) << endl;

    return 0;
}