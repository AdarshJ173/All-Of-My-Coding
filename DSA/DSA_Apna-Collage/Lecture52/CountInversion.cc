#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays and count inversions
long long mergeAndCountInversions(vector<int>& arr, int left, int mid, int right) {
    long long inversionCount = 0;
    int leftSubarraySize = mid - left + 1;
    int rightSubarraySize = right - mid;

    // Create temporary arrays to hold the two subarrays
    vector<int> leftSubarray(leftSubarraySize);
    vector<int> rightSubarray(rightSubarraySize);

    // Copy data to temporary arrays
    for (int i = 0; i < leftSubarraySize; i++) {
        leftSubarray[i] = arr[left + i];
    }
    for (int i = 0; i < rightSubarraySize; i++) {
        rightSubarray[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of left subarray
    int j = 0; // Initial index of right subarray
    int k = left; // Initial index of merged subarray

    while (i < leftSubarraySize && j < rightSubarraySize) {
        if (leftSubarray[i] <= rightSubarray[j]) {
            arr[k] = leftSubarray[i];
            i++;
        } else {
            arr[k] = rightSubarray[j];
            // Count inversions: all remaining elements in left subarray form inversions
            inversionCount += leftSubarraySize - i;
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftSubarray[], if any
    while (i < leftSubarraySize) {
        arr[k] = leftSubarray[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightSubarray[], if any
    while (j < rightSubarraySize) {
        arr[k] = rightSubarray[j];
        j++;
        k++;
    }

    return inversionCount;
}

// Recursive function to perform merge sort and count inversions
long long mergeSortAndCountInversions(vector<int>& arr, int left, int right) {
    long long inversionCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in left and right halves
        inversionCount += mergeSortAndCountInversions(arr, left, mid);
        inversionCount += mergeSortAndCountInversions(arr, mid + 1, right);

        // Merge the two halves and count split inversions
        inversionCount += mergeAndCountInversions(arr, left, mid, right);
    }
    return inversionCount;
}

int main() {
    // Problem: Count inversions in the given array
    // An inversion occurs when a[i] > a[j] and i < j

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long totalInversions = mergeSortAndCountInversions(arr, 0, n - 1);
    cout << "Total number of inversions: " << totalInversions << endl;

    return 0;
}