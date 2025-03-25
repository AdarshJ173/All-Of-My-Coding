#include<bits/stdc++.h>
using namespace std;

// Vector to store all generated permutations
vector<vector<int>> permutations;

// Function to generate all permutations of the input vector
void generateAllPermutations(vector<int> &nums, int startIndex) {
    // Base case: If the start index is equal to the size of the vector, it means we have reached the end of the vector
    // and we have a complete permutation, so we add it to the permutations vector.
    if(startIndex == nums.size()) {
        permutations.push_back(nums);
        return;
    }

    // Iterate through the vector starting from the startIndex to the end
    for (int i = startIndex; i < nums.size(); i++) {
        // Swap the element at the current index with the element at the start index
        swap(nums[i], nums[startIndex]);
        // Recursively generate permutations for the rest of the vector
        generateAllPermutations(nums, startIndex + 1);
        // Backtrack by swapping the elements back to their original positions
        swap(nums[i], nums[startIndex]);
    }
}

int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Input the elements of the array
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }

    // Sort the input vector to ensure all permutations are generated in lexicographic order
    sort(nums.begin(), nums.end());

    // Generate all permutations using the next_permutation function
    do {
        permutations.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    // Print all generated permutations
    for(auto permutation : permutations) {
        for(auto num : permutation) {
            cout << num << " ";
        }
        cout << "\n";
    }
}