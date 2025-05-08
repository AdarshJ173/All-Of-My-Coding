#include<iostream>
using namespace std;

// This program generates a pattern of characters based on user input
int main()
{

    /*
    To make the pattern:
    ABC
    BCD
    CDE
    */

   // Prompt user to enter the number of rows for the pattern
   int n;
   cin>>n;

   // Initialize variables for row and character
   int row = 1;
   int ch = 65; // ASCII value of 'A'

   // Loop through rows
   while (row<=n)
   {
       // Initialize variable for column
       int col = 1;

       // Loop through columns
       while (col <= n) //(col <= row) - for triangle
       {
           // Print the character based on the current row and column
           cout<<(char)(ch + row + col - 2)<<" ";

           // Increment column
           col = col + 1;
       }

       // Move to the next line
       cout<<endl;

       // Increment row
       row = row + 1;
   }
    
}