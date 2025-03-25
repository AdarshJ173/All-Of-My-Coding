#include<bits/stdc++.h>
using namespace std;
                   
int main(){

    // Explanation: 
    // The following block of code is a comment that explains the different types of 2D arrays that can be declared.
    // It is not part of the actual code execution but serves as a documentation for the programmer.
    /*
    Declaration:
        int arr[n][m]; // Integer type 2D array
        bool arr[n][m]; // Boolean type 2D array
        char arr[n][m]; // Character type 2D array
        float arr[n][m]; // Float type 2D array
    */

    // Inputting the dimensions of the matrix from the user
    int rows, columns; // Renamed variables for clarity
    cin >> rows >> columns; // Taking input for the number of rows and columns

    // Dynamic declaration of a 2D array based on user input
    int matrix[rows][columns]; // Using the input dimensions to declare the matrix

    // Taking input for each element of the matrix
    for (int row = 0; row < rows; row++) // Iterating over each row
    {
        for (int col = 0; col < columns; col++) // Iterating over each column
        {
            cin >> matrix[row][col]; // Inputting the value for each element
        }
    }
    
    // Outputting the matrix
    cout << "Matrix is: " << endl; // Printing the header for the matrix output

    // Printing each element of the matrix
    for (int row = 0; row < rows; row++) // Iterating over each row
    {
        for (int col = 0; col < columns; col++) // Iterating over each column
        {
            cout << matrix[row][col] << " "; // Printing the value of each element
        }
        cout << endl; // Moving to a new line after each row
    }
    


}