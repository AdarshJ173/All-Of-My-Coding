#include<iostream>
using namespace std;

// The main function where program execution begins
int main(){
    /*
    This program is designed to print a pattern of numbers
    similar to the following:
    1
    23
    456
    78910
    */

    // Variable to store the number of rows in the pattern
    int num;
    cin >> num;

    // Initialize a counter to keep track of the current number to be printed
    int count = 1;

    // Initialize a variable to keep track of the current row
    int row = 1;

    // Loop until all rows have been printed
    while (row <= num)
    {
        // Initialize a variable to keep track of the current column
        int col = 1;

        // Loop until all numbers in the current row have been printed
        while (col <= row)
        {
            // Print the current number followed by a space
            cout << count << " ";

            // Increment the count for the next number
            count = count + 1;

            // Move to the next column
            col = col + 1;
        }

        // Move to the next line after printing a row
        cout << endl;

        // Move to the next row
        row = row + 1;
    }
}