#include<iostream>
using namespace std;

// Function to print a pattern of asterisks (*) based on user input
int main()
{
   int n;
   
   // Take input from the user for the number of rows
   cin >> n;

   // Initialize the row variable with the user's input
   int row = n;

   // Loop until row is greater than or equal to 1
   while (row >= 1)
   {
      // Initialize the column variable with 1
      int col = 1;

      // Loop until column is less than or equal to row
      while (col <= row)
      {
         // Print an asterisk (*)
         cout << "*";

         // Increment the column variable
         col = col + 1;
      }

      // Move to the next line
      cout << endl;

      // Decrement the row variable
      row = row - 1;
   }

   return 0;
}