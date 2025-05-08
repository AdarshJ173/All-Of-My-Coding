// DNF Sort - 0,1,2 sort 

#include<iostream>
using namespace std;

// Function to swap two elements in an array
void swapElements(int arr[], int firstIndex, int secondIndex){
    // Temporarily store the value at the first index
    int temp = arr[firstIndex];
    // Assign the value at the second index to the first index
    arr[firstIndex] = arr[secondIndex];
    // Assign the temporary value to the second index
    arr[secondIndex] = temp;
}

// Function to sort the array in DNF order
void dnfSort(int arr[], int arraySize){
    int lowPointer = 0; // Initialize low pointer
    int midPointer = 0; // Initialize mid pointer
    int highPointer = arraySize - 1; // Initialize high pointer

    // Loop until mid pointer is less than or equal to high pointer
    while (midPointer <= highPointer)
    {
        // If the element at mid pointer is 0, swap it with the element at low pointer and increment both low and mid pointers
        if (arr[midPointer] == 0)
        {
            swapElements(arr, lowPointer, midPointer);
            lowPointer++; 
            midPointer++;
        }
        // If the element at mid pointer is 1, just increment the mid pointer
        else if (arr[midPointer] == 1)
        {
            midPointer++;
        }
        // If the element at mid pointer is 2, swap it with the element at high pointer and decrement the high pointer
        else{
            swapElements(arr, midPointer, highPointer);
            highPointer--;
        }
        
    }
}

int main(){

    int arr[] = {1,0,2,1,0,1,2,1,2}; // Initialize the array

    dnfSort(arr, 9); // Sort the array in DNF order

    // Print the sorted array
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
     cout << endl; // Add a newline for better readability

    return 0;
}

    // Time Complexity: O(n)
    // The time complexity of the dnfSort function is O(n), where n is the size of the input array.
    // This is because we are iterating through the array only once and performing constant time operations.
    
    // Space Complexity: O(1)
    // The space complexity is O(1), as we are not using any extra space that grows with the size of the input.
    // The dnfSort function uses three pointers to sort the array in place.
