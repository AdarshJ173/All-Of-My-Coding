#include<bits/stdc++.h>
using namespace std;

// Function to generate all unique permutations of a given vector
void generateUniquePermutations(vector<int> a, vector<vector<int>> &uniquePermutations, int idx){
    // Base case: If the index is equal to the size of the vector, it means we have reached the end of the vector
    // and we have a complete permutation, so we add it to the result.
    if(idx == a.size()){
        uniquePermutations.push_back(a);
        return;
    }
    // Iterate through the vector starting from the current index to the end
    for (int i = idx; i < a.size(); i++)
    {
        // Skip if the current element is the same as the element at the current index and it's not the first occurrence
        if(i != idx and a[i] == a[idx]){
            continue;
        }
        // Swap the elements at the current index and i to generate a new permutation
        swap(a[i],a[idx]);
        // Recursively call the function to generate permutations for the rest of the vector
        generateUniquePermutations(a, uniquePermutations, idx+1);
    }
    
}

// Function to return all unique permutations of a given vector of integers
vector<vector<int>> permute(vector<int> nums){
    // Sort the input vector to ensure that duplicate permutations are avoided
    sort(nums.begin(),nums.end());
    // Initialize a vector to store unique permutations
    vector<vector<int>> uniquePermutations;
    // Call the helper function to generate unique permutations
    generateUniquePermutations(nums, uniquePermutations, 0);
    return uniquePermutations;
}

int main(){

    // given a collection of numbers, nums, that might contain duplicates , return all possible unique permutations in any order. - avoid duplicates

    int n;
    cin>>n;

    vector<int> a(n);
    for (auto &i : a)
    {
        cin>>i;
    }
    // Call the permute function to get all unique permutations
    vector<vector<int>> res = permute(a);
    // Iterate through the result to print each permutation
    for (auto permutation : res)
    {
        for(auto element : permutation){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    
    

}