#include<iostream>
using namespace std;

// Function to count the number of paths from start to end in a board game
int countPaths(int start, int end){
    // Base case: If the start position is equal to the end position, there is only one path (staying at the same position)
    if (start == end)
    {
        return 1;
    }
    // Base case: If the start position is greater than the end position, there are no valid paths
    if (start > end)
    {
        return 0;
    }

    // Initialize a variable to store the total count of paths
    int totalPaths = 0;

    // Loop through all possible moves (1 to 6) from the current position
    for (int move = 1; move <= 6; move++)
    {
        // Recursively count the paths from the new position (start + move) to the end
        totalPaths += countPaths(start + move, end);
    }
    
    // Return the total count of paths
    return totalPaths;
}

int main(){
    // Example usage: Count the number of paths from start position 0 to end position 3
    cout << "Number of paths from 0 to 3: " << countPaths(0, 3) << endl;

    return 0;
}

// Time Complexity Analysis:
// The time complexity of this function is O(6^(end-start)), where 'end' is the target position and 'start' is the initial position.
// This is because in the worst case, the function explores all possible paths from 'start' to 'end', and each recursive call branches into 6 new calls.
// Space Complexity Analysis:
// The space complexity of this function is O(end-start), which is the maximum depth of the recursion tree.
// This is because the maximum depth of the recursion tree is equal to the difference between the end and start positions.