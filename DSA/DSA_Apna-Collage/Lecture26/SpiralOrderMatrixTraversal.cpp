#include<bits/stdc++.h>
using namespace std;

int main(){

    // Input the dimensions of the matrix
    int n,m;
    cin>>n>>m;

    // Initialize the matrix
    int matrix[n][m];

    // Input the elements of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    
    // Spiral Order Matrix Traversal
    int startRow = 0, endRow = n-1 , startColumn = 0, endColumn = m-1;

    while (startRow <= endRow && startColumn <= endColumn)
    {
        // Traverse the start row
        for (int col = startColumn; col <= endColumn; col++)
        {
            cout<<matrix[startRow][col]<<" ";
        }

        startRow++;

        // Traverse the end column
        for (int row = startRow; row <= endRow; row++)
        {
            cout<<matrix[row][endColumn]<<" ";
        }
        
        endColumn--;

        // Traverse the end row 
        if(startRow <= endRow) // Added condition to avoid printing the same row twice
        {
            for (int col = endColumn; col >= startColumn; col--)
            {
                cout<<matrix[endRow][col]<<" ";
            }
            
            endRow--;
        }

        // Traverse the start column 
        if(startColumn <= endColumn) // Added condition to avoid printing the same column twice
        {
            for (int row = endRow; row >= startRow; row--)
            {
                cout<<matrix[row][startColumn]<<" ";
            }
            
            startColumn++;
        }
        
    }
    
return 0;
}