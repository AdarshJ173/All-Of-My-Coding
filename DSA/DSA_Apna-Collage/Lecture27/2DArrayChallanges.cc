#include<iostream>
using namespace std;
                   
int main(){

    //* Transpose Of matrix

    /*
    Problem:
        given a square matrix A & its number of rows (or columns) N, return the transpose of A.
        The transpose of matrix is the matrix flipped over it's main diagonal , switching the row and column indices of the matrix .

    Constraints:
        1 <= N <= 1000
    
    */

   // Inputting the dimensions of the matrix
   int rows, columns;
   cin>>rows>>columns;

   // Declaring a 2D array to represent the matrix
   int matrix[rows][columns];

   // Inputting elements of the matrix
   for (int row = 0; row < rows; row++)
   {
        for (int col = 0; col < columns; col++)
        {
            cin>>matrix[row][col];
        }
        
   }

    // Displaying the original matrix
    cout<<"Matrix is: "<<endl;
   for (int row = 0; row < rows; row++)
   {
        for (int col = 0; col < columns; col++)
        {
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
   }
   
    // Displaying the transpose of the matrix
    cout<<"Transpose Of Matrix is: "<<endl;
   for (int col = 0; col < columns; col++)
   {
        for (int row = 0; row < rows; row++)
        {
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
   }
   

}

//* ez pz bro , done it.