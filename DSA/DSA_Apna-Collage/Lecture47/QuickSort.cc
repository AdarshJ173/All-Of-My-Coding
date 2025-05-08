#include<iostream>
using namespace std;

// Function to swap two elements in an array
void swapElements(int arr[], int index1, int index2){
    // Temporarily store the value at index1
    int temp = arr[index1];
    // Assign the value at index2 to index1
    arr[index1] = arr[index2];
    // Assign the temp value to index2
    arr[index2] = temp;
}

// Function to partition the array for QuickSort
int partitionArray(int arr[], int leftIndex, int rightIndex){
    // Choose the last element as the pivot
    int pivot = arr[rightIndex];
    // Initialize the index of the smaller element
    int smallerElementIndex = leftIndex - 1;

    // Iterate through the array from left to right
    for (int j = leftIndex; j < rightIndex; j++)
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            // Increment the index of the smaller element
            smallerElementIndex++;
            // Swap the element at the smallerElementIndex with the current element
            swapElements(arr, smallerElementIndex, j);
        }
    }
    // Swap the pivot element with the element at the smallerElementIndex + 1
    swapElements(arr, smallerElementIndex + 1, rightIndex);
    // Return the index of the pivot element
    return smallerElementIndex + 1;
}

// Function to implement QuickSort
void quickSort(int arr[], int leftIndex, int rightIndex){
    // Base case: If the left index is less than the right index
    if (leftIndex < rightIndex)
    {
        // Partition the array and get the index of the pivot element
        int pivotIndex = partitionArray(arr, leftIndex, rightIndex);
        // Recursively sort the subarray of elements with smaller values
        quickSort(arr, leftIndex, pivotIndex - 1);
        // Recursively sort the subarray of elements with greater values
        quickSort(arr, pivotIndex + 1, rightIndex);
    }
}

// Main function to test the QuickSort algorithm
int main(){
    // Example array to be sorted
    int arr[5] = {5,4,3,2,1};
    // Call the quickSort function to sort the array
    quickSort(arr, 0, 4);
    
    // Print the sorted array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}