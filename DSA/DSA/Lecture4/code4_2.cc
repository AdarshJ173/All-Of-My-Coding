#include<iostream>
using namespace std;

// This program prints a triangle of asterisks based on user input

int main() {
    int n; // Initialize an integer variable 'n' to store user input
    cin >> n;

    int row = 1; // Initialize an integer variable 'row' to keep track of the current row

    // Loop through rows
    while (row <= n) {
        int col = 1; // Initialize an integer variable 'col' to keep track of the current column

        // Loop through columns
        while (col <= row) {
            cout << "*"; // Print an asterisk
            col = col + 1; // Increment the column counter
        }

        cout << endl; // Move to the next line
        row = row + 1; // Increment the row counter
    }
}