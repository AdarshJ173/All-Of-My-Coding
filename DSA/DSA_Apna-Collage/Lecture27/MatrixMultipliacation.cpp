#include<bits/stdc++.h> // This line includes a standard library that provides a wide range of functionalities for input/output operations, strings, vectors, algorithms, and more.
using namespace std; // This line allows us to use the standard library without having to prefix each standard library element with 'std::'.

int main(){ // This is the main function where the program execution begins.

    // Problem Statement and Constraints
    // Given two 2-dimensional arrays of sizes n1*n2 and n2*n3. Your task is to multiply these matrices and output the multiplied matrix.
    // Constraints: 1 <= n1, n2 , n3 <= 300

    // Approach:
    // 1. Make a nested Loop of order 3. in the outer loop iterate over rows of first matrix and in the inner loop iterate over columns of second matrix.
    // 2. Multiply rows of first matrix with columns of second matrix in the innermost loop and update in the answer matrix.

    int n1,n2,n3; // Declaring three integer variables to store the dimensions of the matrices.
    cin>>n1>>n2>>n3; // Taking input for the dimensions of the matrices.

    // Declaring 2D arrays to represent the matrices
    int matrix1[n1][n2]; // Matrix 1 with dimensions n1 x n2
    int matrix2[n2][n3]; // Matrix 2 with dimensions n2 x n3

    // Inputting elements of Matrix 1
    for (int i = 0; i < n1; i++) // Iterating over each row of Matrix 1
    {
        for (int j = 0; j < n2; j++) // Iterating over each column of Matrix 1
        {
            cin>>matrix1[i][j]; // Inputting the value for each element of Matrix 1
        }
        
    }

    // Inputting elements of Matrix 2
    for (int i = 0; i < n2; i++) // Iterating over each row of Matrix 2
    {
        for (int j = 0; j < n3; j++) // Iterating over each column of Matrix 2
        {
            cin>>matrix2[i][j]; // Inputting the value for each element of Matrix 2
        }
        
    }

    // Declaring a 2D array to store the result of matrix multiplication
    int resultMatrix[n1][n3]; // Resultant matrix with dimensions n1 x n3

    // Initializing all elements of the resultant matrix to 0
    for (int i = 0; i < n1; i++) // Iterating over each row of the resultant matrix
    {
        for (int j = 0; j < n3; j++) // Iterating over each column of the resultant matrix
        {
            resultMatrix[i][j] = 0; // Initializing each element to 0
        }
        
    }

    // Matrix Multiplication
    for (int i = 0; i < n1; i++) // Iterating over each row of Matrix 1
    {
        for (int j = 0; j < n3; j++) // Iterating over each column of Matrix 2
        {
            for (int k = 0; k < n2; k++) // Iterating over each element of the current row of Matrix 1 and column of Matrix 2
            {
                resultMatrix[i][j] += matrix1[i][k]*matrix2[k][j]; // Multiplying elements and updating the resultant matrix
            }
            
        }
        
    }

    // Outputting the resultant matrix
    for (int i = 0; i < n1; i++) // Iterating over each row of the resultant matrix
    {
        for (int j = 0; j < n3; j++) // Iterating over each column of the resultant matrix
        {
            cout<<resultMatrix[i][j]<<" "; // Outputting the value of each element
        }
        cout<<endl; // Moving to a new line after each row
    }
   
}

// Time Complexity Analysis:
// The time complexity of the matrix multiplication algorithm is O(n1*n2*n3), where n1, n2, and n3 are the dimensions of the matrices.
// This is because we have three nested loops, each iterating over the dimensions of the matrices.
// The outer two loops iterate over the rows and columns of the matrices, and the innermost loop performs the actual multiplication.
// Since each element of the matrices is accessed once, the time complexity is directly proportional to the total number of elements in the matrices.

// Space Complexity Analysis:
// The space complexity of the matrix multiplication algorithm is O(n1*n3), where n1 and n3 are the dimensions of the resultant matrix.
// This is because we need to store the resultant matrix, which has dimensions n1 x n3.
// The space required is directly proportional to the size of the resultant matrix.
