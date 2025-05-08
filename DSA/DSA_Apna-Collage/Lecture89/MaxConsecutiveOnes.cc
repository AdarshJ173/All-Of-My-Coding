#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an Array A of 0s and 1s, we may change up to k values from 0 to 1.
Return the length of the longest (contiguous) subarray that contains only 1s.

Algorithm:
This problem is solved using the sliding window technique.
We maintain a window that expands as long as we can flip 0s to 1s (limited by k).
When we can't flip anymore, we shrink the window from the left until it's valid again.
The maximum window size encountered is our answer.
*/

int findLongestOnesSubarray(const vector<int>& binaryArray, int maxFlips) {
    int arraySize = binaryArray.size();
    int zeroCount = 0;  // Count of zeros in current window
    int leftPointer = 0;  // Left pointer of the sliding window
    int maxSubarrayLength = 0;  // Maximum length of valid subarray found

    // Iterate through the array with right pointer
    for (int rightPointer = 0; rightPointer < arraySize; rightPointer++) {
        // If current element is 0, increment zero count
        if (binaryArray[rightPointer] == 0) {
            zeroCount++;
        }

        // Shrink window from left if we have more zeros than we can flip
        while (zeroCount > maxFlips) {
            if (binaryArray[leftPointer] == 0) {
                zeroCount--;
            }
            leftPointer++;
        }

        // Update max subarray length
        maxSubarrayLength = max(maxSubarrayLength, rightPointer - leftPointer + 1);
    }

    return maxSubarrayLength;
}

int main() {
    int arraySize, maxFlips;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    // Input maximum number of flips allowed
    cout << "Enter the maximum number of flips allowed: ";
    cin >> maxFlips;

    // Input the binary array
    vector<int> binaryArray(arraySize);
    cout << "Enter the binary array elements (0s and 1s): ";
    for (int& element : binaryArray) {
        cin >> element;
    }

    // Calculate and output the result
    int result = findLongestOnesSubarray(binaryArray, maxFlips);
    cout << "Length of the longest subarray of 1s after at most " << maxFlips << " flips: " << result << endl;

    return 0;
}