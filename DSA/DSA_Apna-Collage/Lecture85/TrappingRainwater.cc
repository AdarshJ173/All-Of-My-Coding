#include<bits/stdc++.h>
using namespace std;

/*
Given non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/
// Function to calculate the amount of rain water that can be trapped
int calculateRainWater(vector<int> elevationMap) {
    // Initialize a stack to store indices of elevation map
    stack<int> indexStack;
    // Get the size of the elevation map
    int mapSize = elevationMap.size();
    // Initialize the answer variable to store the total rain water that can be trapped
    int totalRainWater = 0;

    // Iterate through the elevation map
    for (int currentIndex = 0; currentIndex < mapSize; currentIndex++) {
        // While the stack is not empty and the current elevation is greater than the elevation at the top of the stack
        while (!indexStack.empty() && elevationMap[indexStack.top()] < elevationMap[currentIndex]) {
            // Get the index of the current elevation from the stack
            int currentElevationIndex = indexStack.top();
            // Pop the index from the stack
            indexStack.pop();
            // If the stack is empty, break the loop
            if (indexStack.empty()) {
                break;
            }
            // Calculate the difference between the current index and the index at the top of the stack minus 1
            int width = currentIndex - indexStack.top() - 1;
            // Calculate the minimum elevation between the current elevation and the elevation at the top of the stack
            int minHeight = min(elevationMap[currentIndex], elevationMap[indexStack.top()]);
            // Calculate the rain water that can be trapped at the current elevation
            int rainWaterAtCurrentElevation = (minHeight - elevationMap[currentElevationIndex]) * width;
            // Add the rain water to the total rain water
            totalRainWater += rainWaterAtCurrentElevation;
        }
        // Push the current index to the stack
        indexStack.push(currentIndex);
    }
    
    // Return the total rain water that can be trapped
    return totalRainWater;
}

int main() {
    // Create an elevation map
    vector<int> elevationMap = {0,1,0,2,0,1,0,1,3,2,1,2,1};
    // Calculate and print the total rain water that can be trapped
    cout << "Total rain water that can be trapped: " << calculateRainWater(elevationMap) << endl;

    return 0;
}

/*
Complexity Analysis:

Time Complexity: O(n), where n is the size of the elevation map. The code iterates through the elevation map once, and the operations inside the loop take constant time.
Space Complexity: O(n), where n is the size of the elevation map. The stack can store up to n indices in the worst case.
Explanation:

The code uses a stack to keep track of the indices of the elevation map. It iterates through the elevation map, and for each elevation, it checks if the stack is not empty and the current elevation is greater than the elevation at the top of the stack. If this condition is true, it calculates the rain water that can be trapped at the current elevation and adds it to the total rain water.

The stack is used to store the indices of the elevation map, and it helps to find the minimum elevation between the current elevation and the elevation at the top of the stack. The width of the trapped rain water is calculated as the difference between the current index and the index at the top of the stack minus 1.

The code has a time complexity of O(n) because it iterates through the elevation map once, and the operations inside the loop take constant time. The space complexity is O(n) because the stack can store up to n indices in the worst case.
*/