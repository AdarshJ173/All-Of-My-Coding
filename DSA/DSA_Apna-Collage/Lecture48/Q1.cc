#include<bits/stdc++.h>
using namespace std;

// Function to compare two pairs based on the first element
bool comparePairs(pair<int,int> p1, pair<int,int> p2){
    // Return true if the first element of p1 is less than the first element of p2
    return p1.first < p2.first;
}

int main(){
    // Array to be sorted
    int arr[] = {10,16,7,14,5,3,12,9};
    // Vector to store pairs of array elements and their indices
    vector<pair<int,int>> indexedElements;

    // Populate the vector with pairs of array elements and their indices
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        indexedElements.push_back(make_pair(arr[i],i));
    }
    
    // Sort the vector based on the first element of the pairs
    sort(indexedElements.begin(), indexedElements.end(), comparePairs);

    // Update the original array with the sorted indices
    for (int i = 0; i < indexedElements.size(); i++)
    {
        arr[indexedElements[i].second] = i;
    }

    // Print the sorted array
    for (int i = 0; i < indexedElements.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}