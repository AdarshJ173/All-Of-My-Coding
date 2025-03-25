#include<iostream>
using namespace std;

// Function to check if a given position is safe to move to in the maze
bool isSafe(int**maze, int x, int y, int n){
    // Check if the position is within the maze boundaries and if the cell is not blocked (1 represents an open path)
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1) {
        return true; // Position is safe
    }
    return false; // Position is not safe
}

// Recursive function to find a path through the maze using backtracking
bool findPathInMaze(int**maze, int x, int y, int n, int**solutionArray){
    // Base case: If we have reached the destination (bottom-right corner)
    if (x == n-1 && y == n-1) {
        solutionArray[x][y] = 1; // Mark the destination as part of the solution
        return true; // Path found
    }
    
    // Check if the current position is safe to move to
    if (isSafe(maze, x, y, n)) {
        solutionArray[x][y] = 1; // Mark the current position as part of the solution
        
        // Explore all possible moves (down and right)
        if (findPathInMaze(maze, x+1, y, n, solutionArray)) {
            return true; // Found a path moving down
        }
        if (findPathInMaze(maze, x, y+1, n, solutionArray)) {
            return true; // Found a path moving right
        }
        
        // If no path is found, backtrack by marking the current position as not part of the solution
        solutionArray[x][y] = 0; 
        return false; // No path found
    }
    return false; // Position is not safe
}

int main(){
    // BackTracking
    // is an algorithmic-technique for solving recursive problems by trying to build every possible solution incrementally and removing those solutions that fail to satisfy the constraints of the problem at any point of time.

    // rat in a maze

    int n;
    cin >> n; // Input size of the maze

    // Dynamically allocate memory for the maze and solution arrays
    int** maze = new int*[n];
    for (int i = 0; i < n; i++) {
        maze[i] = new int[n];
    }

    // Input the maze configuration
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j]; // 0 represents a blocked path, 1 represents an open path
        }
    }

    // Initialize the solution array with all positions initially not part of the solution
    int** solutionArray = new int*[n];
    for (int i = 0; i < n; i++) {
        solutionArray[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solutionArray[i][j] = 0; // Initially, no position is part of the solution
        }
    }
    
    // Attempt to find a path through the maze
    if (findPathInMaze(maze, 0, 0, n, solutionArray)) {
        // If a path is found, print the solution
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solutionArray[i][j] << " "; // 1 represents a position in the solution path
            }
            cout << endl;
        }
    }
    
    return 0;
}