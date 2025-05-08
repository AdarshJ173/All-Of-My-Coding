#include<iostream>
using namespace std;

// Function to calculate the number of ways to tile a 2 x n board with 2 x 1 tiles
int calculateTilingWays(int boardLength){
    // Base case: If the board length is 0, there's only one way to tile it (no tiles needed)
    if (boardLength == 0)
    {
        return 1; // One way to tile an empty board
    }
    // Base case: If the board length is 1, there's only one way to tile it (one tile vertically)
    if (boardLength == 1)
    {
        return 1; // One way to tile a board of length 1
    }
    
    // Recursive case: Calculate the number of ways to tile the board by considering the last tile
    // The last tile can be placed either vertically or horizontally, hence two possibilities
    // 1. Place the last tile vertically: This leaves a board of length n-1 to be tiled
    // 2. Place the last tile horizontally: This leaves a board of length n-2 to be tiled
    return calculateTilingWays(boardLength-1) + calculateTilingWays(boardLength-2);
    
}

int main(){

    // Example usage: Calculate and print the number of ways to tile a 2 x 4 board
    cout << "Number of ways to tile a 2 x 4 board: " << calculateTilingWays(4) << endl; 

    return 0;
}