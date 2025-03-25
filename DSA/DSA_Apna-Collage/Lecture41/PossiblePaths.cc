#include<iostream>
using namespace std;

// Function to count the number of paths in a maze
int countPathMaze(int n, int i, int j){
    // Base case: If we reach the destination (bottom-right corner), there's one path
    if (i == n-1 && j == n-1)
    {
        return 1;
    }
    // If we move out of the maze, there are no paths
    if (i>=n || j>=n)
    {
        return 0;
    }
    
    // Recursive case: Count paths by moving right and down
    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
}

int main(){
    // Example usage: Count the number of paths in a 3x3 maze
    cout << "Number of paths in a 3x3 maze: " << countPathMaze(3,0,0) << endl;
    return 0;
}