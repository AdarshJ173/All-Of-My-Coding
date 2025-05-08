#include<iostream>
using namespace std;

// This program prints a square pattern of uppercase alphabets.
// The size of the square is determined by the user's input.

int main() {
    // Declare and initialize an integer variable 'n' to store the user's input
    int n;
    cin >> n;

    // Initialize variables 'row' and 'start' to keep track of the current row and the starting alphabet
    int row = 1;
    char start = 'A';

    // Loop through each row
    while (row <= n) {
        // Initialize a variable 'col' to keep track of the current column
        int col = 1;

        // Loop through each column in the current row
        while (col <= n) {
            // Print the current alphabet and increment it for the next iteration
            cout << start;
            start = start + 1;

            // Increment the column counter
            col = col + 1;
        }

        // Print a newline character to move to the next row
        cout << endl;

        // Increment the row counter
        row = row + 1;
    }
}