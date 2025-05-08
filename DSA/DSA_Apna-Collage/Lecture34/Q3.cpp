#include<bits/stdc++.h>
using namespace std;

// Function to generate all possible subsets of a given array
void generateSubsets(int arr[], int n){
    // Iterate through all possible subsets using bit manipulation
    for (int subsetMask = 0; subsetMask < (1 << n); subsetMask++) {
        // Iterate through each element of the array
        for (int j = 0; j < n; j++) {
            // Check if the jth bit is set in the subsetMask
            if(subsetMask & (1 << j)){
                // If set, print the element
                cout << arr[j] << " ";
            }
        }
        // Print a newline after each subset
        cout << endl;
    }
}

int main(){
    // Example array to generate subsets from
    int arr[4] = {1,2,3,4};
    // Call the function to generate subsets
    generateSubsets(arr, 4);
}