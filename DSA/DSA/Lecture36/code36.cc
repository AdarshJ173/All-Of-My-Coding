/// QUICK SORT

// link : 
// in-place? , stable?       

#include<iostream> // Include the input/output stream library
#include<algorithm> // Include the algorithm library for utility functions like swap
#include<vector> // Include the vector library for using the vector container
#include<cmath> // Include the cmath library for mathematical functions
using namespace std; // Use the standard namespace

// Function to partition the array and return the pivot index
int partition(int arr[], int s, int e) {
    int pivot = arr[s]; // Choose the first element as the pivot

    int cnt = 0; // Initialize count of elements less than or equal to pivot
    for (int i = s + 1; i <= e; i++) { // Loop through the array from s+1 to e
        if (arr[i] <= pivot) { // If current element is less than or equal to pivot
            cnt++; // Increment the count
        }
    }
    // Place pivot at the correct position
    int pivotIndex = s + cnt; // Calculate the pivot index
    swap(arr[pivotIndex], arr[s]); // Swap the pivot element with the element at pivotIndex

    // Initialize two pointers for left and right parts
    int i = s, j = e;
    
    // Rearrange elements on the left and right of the pivot
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) { // Move the left pointer to the right
            i++;
        }
        while (arr[j] > pivot) { // Move the right pointer to the left
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) { // If pointers have not crossed
            swap(arr[i++], arr[j--]); // Swap the elements and move the pointers
        }
    }
    
    return pivotIndex; // Return the pivot index
}

// Function to perform quicksort on the array
void quickSort(int arr[], int s, int e) {
    // Base case: if the start index is greater than or equal to the end index
    if (s >= e) {
        return;
    }

    // Partition the array and get the pivot index
    int p = partition(arr, s, e);

    // Recursively sort the left part
    quickSort(arr, s, p - 1);

    // Recursively sort the right part
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[5] = {2, 4, 1, 6, 9}; // Initialize the array
    int n = 5; // Size of the array

    quickSort(arr, 0, n - 1); // Call quickSort on the entire array
    
    for (int i = 0; i < n; i++) { // Loop through the sorted array
        cout << arr[i] << " "; // Print each element
    }
    cout << endl; // Print a newline character

    return 0; // Return 0 to indicate successful execution
}
