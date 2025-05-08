#include<iostream>
using namespace std;

// This program prints a square pattern of uppercase letters 'A' through 'Z'
// The size of the square is determined by the user's input

int main() {
    // Declare and initialize an integer variable 'n' to store the size of the square
    int n;
    cin >> n;

    // Initialize an integer variable 'row' to keep track of the current row
    int row = 1;

    // Loop through the rows
    while (row <= n) {
        // Initialize an integer variable 'col' to keep track of the current column
        int col = 1;

        // Loop through the columns
        while (col <= n) {
            // Calculate the corresponding ASCII value for the current letter
            char ch = 'A' + col - 1;

            // Print the current letter
            cout << ch;

            // Move to the next column
            col = col + 1;
        }

        // Move to the next row
        cout << endl;
        row = row + 1;
    }
}