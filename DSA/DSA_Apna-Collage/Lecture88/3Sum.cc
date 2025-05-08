// Include the necessary header files
#include <iostream>
#include <vector>
#include <algorithm>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

// Define the main function
int main() {
    // Read the size of the array from the user
    int arraySize;
    cin >> arraySize;

    // Read the target sum from the user
    int targetSum;
    cin >> targetSum;

    // Create a vector to store the array
    vector<int> array(arraySize);

    // Read the elements of the array from the user
    for (auto &element : array) {
        cin >> element;
    }

    // Initialize a flag to indicate whether a triplet with the given sum is found
    bool found = false;

    // Sort the array in ascending order
    sort(array.begin(), array.end());

    // Iterate over the array to find a triplet with the given sum
    for (int i = 0; i < arraySize; i++) {
        // Initialize two pointers, one at the next element and one at the end of the array
        int low = i + 1;
        int high = arraySize - 1;

        // Iterate until the two pointers meet
        while (low < high) {
            // Calculate the sum of the current triplet
            int currentSum = array[i] + array[low] + array[high];

            // Check if the sum is equal to the target sum
            if (currentSum == targetSum) {
                // Set the found flag to true
                found = true;
            }

            // If the sum is less than the target sum, increment the low pointer
            if (currentSum < targetSum) {
                low++;
            }
            // If the sum is greater than the target sum, decrement the high pointer
            else {
                high--;
            }
        }
    }

    // Print the result
    if (found) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}