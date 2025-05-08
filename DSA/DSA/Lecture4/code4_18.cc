#include<iostream>
using namespace std;

// Function to generate a pattern of numbers in a pyramid shape
int main()
{
    // Variable to store the number of rows in the pyramid
    int n;
    // Get the number of rows from the user
    cin>>n;

    // Initialize the row number to 1
    int row = 1;

    // Loop until all rows are processed
    while (row<=n)
    {
        // Calculate the number of spaces needed for the current row
        int space = n - row;
        // Print the spaces
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;
        }

        // Initialize a counter for printing the numbers
        int j = 1;
        // Print the numbers in ascending order
        while (j<=row){
            cout << j<<" ";
            j = j + 1;
        }

        // Initialize a counter for printing the numbers in descending order
        int start = row -1;
        // Print the numbers in descending order
        while (start){
            cout<<start<<" ";
            start = start - 1;
        }

        // Move to the next line
        cout<<endl;
        // Increment the row number
        row = row + 1;
    }
}