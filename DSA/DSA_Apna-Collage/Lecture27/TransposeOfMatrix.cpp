#include<bits/stdc++.h>
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

   int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

   for (int i = 0; i < 3; i++)
   {
        for (int j = i; j < 3; j++)
        {
            // swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
        
   }

   //print

   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
   }
   
   

return 0;
}