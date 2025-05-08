#include <iostream>
using namespace std;

// The main function is the entry point of the program
int main() {
    int n; // Total number of rows to be printed in the pattern
    cin >> n; // Read the number of rows from the user

    // Loop to print each row of the pattern
    for (int row = n; row >= 1; --row) {
        // Print increasing numbers from 1 to the current row number
        for (int j = 1; j <= row; ++j) {
            cout << j;
        }

        // Calculate the number of spaces needed for the current row
        int spaces = (n - row) * 2;
        
        // Print the required number of spaces as asterisks
        for (int s = 0; s < spaces; ++s) {
            cout << "*";
        }

        // Print decreasing numbers from the current row number to 1
        for (int j = row; j >= 1; --j) {
            cout << j;
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}