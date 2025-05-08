#include<iostream>
using namespace std;

// Function to implement Count Sort
// This function takes an array and its size as input, and sorts the array using the Count Sort algorithm
void countSort(int arr[], int n) {
    // Find the maximum element in the array
    // Initialize maxElement to the first element of the array
    int maxElement = arr[0];
    // Iterate through the array to find the maximum element
    for (int i = 0; i < n; i++) {
        // If the current element is greater than maxElement, update maxElement
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    // Create a count array and initialize all elements to 0
    // The size of the count array is maxElement + 1, because the maximum value in the array can be maxElement
    int count[maxElement + 1] = {0};
    
    // Count the occurrences of each element in the array
    // Iterate through the array and increment the corresponding count in the count array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    // Calculate the position of each element in the sorted array
    // Iterate through the count array and calculate the cumulative sum
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Create an output array
    int output[n];

    // Fill the output array with the sorted elements
    // Iterate through the array in reverse order and place each element at its correct position in the output array
    for (int i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }
    
    // Copy the sorted elements back to the original array
    // Iterate through the output array and copy each element back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
    

}
                   
int main() {
    /*
    1. Find the count of every distinct element in the array
    2. Calculate the position of each element in the sorted array
    */

    // Example array to be sorted
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};

    // Call the countSort function to sort the array
    countSort(arr, 9);

    // Print the sorted array
    // Iterate through the array and print each element
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
    Time Complexity Analysis:
    The time complexity of the countSort function is O(n + k), where n is the size of the input array and k is the range of input.
    This is because we are iterating through the array twice: once to count the occurrences of each element and once to place the elements in the correct position.
    
    Space Complexity Analysis:
    The space complexity is O(n + k), as we need to create an output array of size n and a count array of size k.
    
    The countSort function uses a counting array to store the count of individual elements, and then calculates the cumulative sum to determine the correct position of each element in the sorted array.
    The function iterates through the array in reverse order to place each element at its correct position in the output array, and finally copies the sorted elements back to the original array.
*/


