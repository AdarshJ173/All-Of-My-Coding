//! MERGE TWO SORTED ARRAY.
// https://leetcode.com/problems/merge-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

/*
 * Merge two sorted arrays into a third array.
 * 
 * arr1 The first sorted array.
 * n The size of the first array.
 * arr2 The second sorted array.
 * m The size of the second array.
 * arr3 The resulting merged array.
 */
void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for arr3

    // Merge smaller elements first
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++]; // Take the smaller element from arr1
        } else {
            arr3[k++] = arr2[j++]; // Take the smaller element from arr2
        }
    }

    // If there are remaining elements in arr1, append them to arr3
    while (i < n) {
        arr3[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, append them to arr3
    while (j < m) {
        arr3[k++] = arr2[j++];
    }
}

/*
 * Print the elements of an array.
 * 
 * ans The array to be printed.
 * n The size of the array.
 */
void print(int ans[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a newline at the end
}

int main() {
    int arr1[5] = {1, 3, 5, 7, 9}; // First sorted array
    int arr2[3] = {2, 4, 6}; // Second sorted array
    int arr3[8] = {0}; // Resulting merged array

    merge(arr1, 5, arr2, 3, arr3); // Merge arr1 and arr2 into arr3
    print(arr3, 8); // Print the merged array

    return 0;
}