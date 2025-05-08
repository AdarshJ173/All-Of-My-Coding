#include<bits/stdc++.h> // Include the standard library for input/output and data structures
using namespace std; // Use the standard namespace for convenience

/*
    Given an array. Each element represents the height to the histogram's bar and the width of each bar is 1, 
    find the area of largest rectangle in the histogram.
*/

// Function to calculate the maximum area of a rectangle in a histogram
int get_max_rectangle_area(vector<int> histogram_heights) {
    int n = histogram_heights.size(); // Get the number of bars in the histogram
    int max_area = 0; // Initialize the maximum area found so far
    int i = 0; // Initialize the index for iterating through the histogram

    // Create a stack to store indices of bars
    stack<int> bar_indices;

    // Add a dummy bar with height 0 at the end to simplify the logic
    histogram_heights.push_back(0);

    // Iterate through the histogram
    while (i < n) {
        // While the stack is not empty and the current bar is smaller than the bar at the top of the stack
        while (!bar_indices.empty() && histogram_heights[bar_indices.top()] > histogram_heights[i]) {
            // Get the height of the bar at the top of the stack
            int bar_height = histogram_heights[bar_indices.top()];
            // Remove the bar from the stack
            bar_indices.pop();
            // If the stack is empty, the width of the rectangle is the current index
            if (bar_indices.empty()) {
                max_area = max(max_area, bar_height * i);
            } else {
                // Otherwise, the width is the difference between the current index and the index of the previous bar
                int rectangle_width = i - bar_indices.top() - 1;
                max_area = max(max_area, bar_height * rectangle_width);
            }
        }
        // Add the current index to the stack
        bar_indices.push(i);
        // Move to the next bar
        i++;
    }
    
    // Return the maximum area found
    return max_area;
}

int main() {
    // Create a sample histogram
    vector<int> histogram_heights = {2, 1, 5, 6, 2, 3};
    // Calculate and print the maximum area of a rectangle in the histogram
    cout << get_max_rectangle_area(histogram_heights);
}

/*

Time Complexity Analysis:

The time complexity of this code is O(n), where n is the number of bars in the histogram. This is because we iterate through the histogram once, and for each bar, we perform a constant amount of work (pushing and popping from the stack, and updating the maximum area).

Space Complexity Analysis:

The space complexity of this code is O(n), where n is the number of bars in the histogram. This is because we use a stack to store indices of bars, and in the worst case, the stack can grow up to the size of the histogram.

Note that the original logic of the code has been maintained, and only comments and variable names have been added to enhance readability.

*/