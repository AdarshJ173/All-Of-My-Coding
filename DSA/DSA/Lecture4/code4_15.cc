#include<iostream>
using namespace std;

// This program prints a right triangle of numbers based on user input

int main()
{
    // Declare and initialize variables
    int n; // The height of the right triangle
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Initialize column variable
        int col = 1;
        while (col <= row)
        {
            // Print the current number in the triangle
            cout << n - row + 1 << "*";
            col = col + 1;
        }

        // Move to the next line
        cout << endl;

        // Increment row counter
        row = row + 1;
    }
}