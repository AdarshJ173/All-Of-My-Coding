#include<iostream>
using namespace std;

// Function to find the unique element in an array where all numbers except one are present twice
int findUniqueElement(int arr[], int n) {
    // Initialize a variable to hold the XOR sum of all elements in the array
    int xorsum = 0;
    // Iterate through the array to calculate the XOR sum of all elements
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i]; // XOR operation to find the unique element
    }
    // Return the unique element found
    return xorsum;
}

int main() {
    // Example array where all numbers except one are present twice
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    // Size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the unique element found
    cout << "Unique element in the array is: " << findUniqueElement(arr, n);

    return 0;
}