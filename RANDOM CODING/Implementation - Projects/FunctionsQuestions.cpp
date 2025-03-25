#include<bits/stdc++.h>
using namespace std;

// Write a function that takes a vector of integers as an argument and returns the largest element in the vector.

// Function to find the largest element in a vector of integers
int findLargestElement(vector<int> vec) {
    // Initialize the largest element as the first element of the vector
    int largest = vec[0];
    // Iterate through the vector starting from the second element
    for (int i = 1; i < vec.size(); i++) {
        // If the current element is larger than the largest, update the largest
        if (vec[i] > largest) {
            largest = vec[i];
        }
    }
    // Return the largest element found
    return largest;
}

int main(){
    // Take user input for the size of the vector
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    // Create a vector to store user input
    vector<int> numbers(n);
    // Take user input for each element of the vector
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    // Call the function to find the largest element and display the result
    cout << "Largest element is: " << findLargestElement(numbers) << endl;
}

// learned about vectors