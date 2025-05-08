#include<iostream>
using namespace std;

// This program prints a pattern of characters based on user input

int main(){
    // Declare and initialize an integer variable 'n' to store user input
    int n;
    cin>>n;

    // Initialize a variable 'row' to keep track of the current row
    int row=1;

    // Loop through rows
    while (row<=n)
    {
        // Initialize a variable 'col' to keep track of the current column
        int col = 1;

        // Loop through columns
        while (col<=n)
        {
            // Calculate the character to print based on the current row
            char ch = 'A' + row -1 ;

            // Print the character
            cout<<ch;

            // Move to the next column
            col = col + 1;
        }

        // Move to the next row
        cout<<endl;
        row = row + 1;
    }
}