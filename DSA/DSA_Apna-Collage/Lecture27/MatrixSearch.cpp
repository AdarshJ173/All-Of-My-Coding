#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    2D Matrix Search:
        Given a nxm matrix.
        write an algorithm to find that the given value exists in the matrix or not.
        integers in each row are sorted in ascending from left to right.
        integers in each column are sorted in ascending from top to bottom.

    Approach:
        Linear Search:
            for i in [0...N]:
                for j in [0...M]:
                    if(matrix[i][j] == target)
                        return true;
            return false;
    
    but can we do better than this? yes

    we did not use the given : i.e the array  is an sorted array.

    Idea:
        -start form top right element.
        -you are at (r,c)
            if(matrix[r][c] == target)
                return true
            if(matrix[r][c] > target)
                c--
            else
                r++;

    */

   // Inputting the dimensions of the matrix and the target value to search for
   int rows, columns;
   cin >> rows >> columns; // rows and columns are more descriptive than n and m
   int targetValue;
   cin >> targetValue; // targetValue is more descriptive than target

   // Declaring and initializing the matrix with user input
   int matrix[rows][columns]; // Using descriptive names for the matrix dimensions

   for (int row = 0; row < rows; row++)
   {
        for (int col = 0; col < columns; col++)
        {
            cin >> matrix[row][col]; // Populating the matrix with user input
        }
        
   }
   
   // Initializing variables for the search process
   int currentRow = 0, currentCol = columns - 1; // Starting from the top-right corner
   bool isFound = false; // Flag to indicate if the targetValue is found

   // Search process
   while (currentRow < rows && currentCol >= 0) // Ensuring we stay within the matrix bounds
   {
        if(matrix[currentRow][currentCol] == targetValue){ // If the current element matches the targetValue
            isFound = true; // Set the flag to true
        }
        if(matrix[currentRow][currentCol] > targetValue){ // If the current element is greater than the targetValue
            currentCol--; // Move left in the current row
        }
        else{ // If the current element is less than or equal to the targetValue
            currentRow++; // Move down to the next row
        }
   }

   // Outputting the result of the search
   if(isFound){
        cout << "element found"; // Informing the user that the element was found
   }
   else{
        cout << "element does not exist"; // Informing the user that the element was not found
   }

}