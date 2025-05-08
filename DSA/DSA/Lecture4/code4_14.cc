#include<iostream>
using namespace std;

// This program prints a right triangle of a given size 'n' using nested loops

int main()
{
    // Declare and initialize the variable 'n' to store the size of the right triangle
    int n;
    cin>>n;

    // Initialize the variable 'row' to keep track of the current row being printed
    int row = 1;

    // Loop through each row of the right triangle
    while (row<=n)
    {
       // Calculate the number of spaces to print before the stars in the current row
       int space = n - row;

       // Loop through each space in the current row
       while (space){
        cout<<" ";
        space = space - 1;
       }

       // Initialize the variable 'col' to keep track of the current column being printed
       int col = 1;

       // Loop through each column in the current row
       while (col<=row)
       {
        cout<<"*";
        col = col + 1;
       }

       // Print a newline character to move to the next row
       cout<<endl;

       // Increment the row counter
       row = row + 1;
       
    }
}