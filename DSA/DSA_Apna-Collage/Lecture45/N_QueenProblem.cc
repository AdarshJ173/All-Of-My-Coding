#include<iostream>
using namespace std;

// Function to check if it is safe to place a queen at a given position
bool isSafe(int** chessBoard, int row, int col, int n){
    // Check this column on upper side
    for (int i = 0; i < row; i++)
    {
        if (chessBoard[i][col] == 1)
        {
            return false; // If a queen is already present in the column, it's not safe
        }
    }

    // Check upper left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (chessBoard[i][j] == 1)
        {
            return false; // If a queen is already present in the upper left diagonal, it's not safe
        }
    }

    // Check upper right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (chessBoard[i][j] == 1)
        {
            return false; // If a queen is already present in the upper right diagonal, it's not safe
        }
    }
    
    return true; // If no queen is present in the column or diagonals, it's safe
}

// Function to solve the N-Queen problem
bool solveNQueen(int** chessBoard, int row, int n){
    // Base case: If all queens are placed then return true
    if (row >= n)
    {
        return true;
    }
    
    // Consider this column and try placing this queen in chessBoard[row][col]
    for (int col = 0; col < n; col++)
    {
        // Check if the queen can be placed on chessBoard[row][col]
        if (isSafe(chessBoard, row, col, n))
        {
            chessBoard[row][col] = 1; // Place this queen in chessBoard[row][col]

            // recur to place rest of the queens
            if (solveNQueen(chessBoard, row + 1, n))
            {
                return true;
            }

            // If placing queen in chessBoard[row][col] doesn't lead to a solution, then
            // remove queen from chessBoard[row][col]
            chessBoard[row][col] = 0; // BACKTRACK
        }
    }
    return false; // If the queen can not be placed in any column in this row
}

int main(){
    int n;
    cin >> n; // Input the size of the chess board

    int** chessBoard = new int*[n];
    for (int i = 0; i < n; i++)
    {
        chessBoard[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            chessBoard[i][j] = 0; // Initialize the chess board with zeros
        }
    }

    if (solveNQueen(chessBoard, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << chessBoard[i][j] << " "; // Print the chess board configuration
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Solution does not exist" << endl;
    }
}