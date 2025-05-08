#include<bits/stdc++.h>
using namespace std;

// Vector to store all permutations of the input array
vector<vector<int>> allPermutations;

// Function to generate all permutations of the input array
void generatePermutations(vector<int> &inputArray, int currentPosition){
    // Base case: If we have reached the end of the array, add the current permutation to the result
    if(currentPosition == inputArray.size()){
        allPermutations.push_back(inputArray);
        return;
    }

    // Iterate through the array starting from the current position
    for (int i = currentPosition; i < inputArray.size(); i++)
    {
        // Swap the current element with the element at the current position
        swap(inputArray[i], inputArray[currentPosition]);
        // Recursively generate permutations for the rest of the array
        generatePermutations(inputArray, currentPosition + 1);
        // Backtrack by swapping the elements back to their original positions
        swap(inputArray[i], inputArray[currentPosition]);
    }
    return;
}

int main(){
    // Input size of the array
    int arraySize;
    cin >> arraySize;

    // Input elements of the array
    vector<int> inputArray(arraySize);
    for (auto &element : inputArray)
    {
        cin >> element;
    }

    // Generate all permutations of the input array
    generatePermutations(inputArray, 0);

    // Print all generated permutations
    for(auto permutation : allPermutations){
        for(auto element : permutation){
            cout << element << " ";
        }
        cout << "\n";
    }
}