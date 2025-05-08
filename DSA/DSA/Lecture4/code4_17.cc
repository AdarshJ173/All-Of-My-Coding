#include <iostream>
using namespace std;

// This program prints a right triangle of stars with a given side length

int main() {
    // Declare and initialize an integer variable 'n' to store the side length of the right triangle
    int n;
    cin >> n;

    // Declare a character variable 'space' to store the space character
    char space = ' ';

    // Initialize an integer variable 'row' to store the current row number
    int row = n;

    // Loop through each row from the bottom to the top of the triangle
    while (row >= 1) {
        // Initialize an integer variable 'col' to store the current column number
        int col = 1;

        // Print leading spaces for each row
        for (int i = 1; i <= n - row; i++) {
            cout << space;
        }

        // Print stars for each row
        for (int i = 1; i <= row; i++) {
            cout << "*";
        }

        // Print remaining spaces for alignment
        for (int i = 1; i <= n - row; i++) {
            cout << space;
        }

        // Move to the next line
        cout << endl;

        // Move to the next row
        row = row - 1;
    }

    // Return 0 to indicate successful execution
    return 0;
}