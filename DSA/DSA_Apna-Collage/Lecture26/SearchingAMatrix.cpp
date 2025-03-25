#include<bits/stdc++.h>
using namespace std;

// Function to read matrix dimensions from user input
void readMatrixDimensions(int& rows, int& columns) {
    cin >> rows >> columns;
}

// Function to initialize and read matrix elements from user input
void initializeAndReadMatrix(int matrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[][100], int rows, int columns) {
    cout << "Matrix is : " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to search for an element in the matrix
void searchElementInMatrix(int matrix[][100], int rows, int columns, int target) {
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if(matrix[i][j] == target){
                cout << i << " " << j << endl;
                found = true; // Corrected the assignment to correctly set the flag
            }
        }
    }
    if(found){
        cout << "element is found" << endl;
    } else {
        cout << "element is not found" << endl;
    }
}

int main(){
    int rows, columns; // Renamed variables for clarity
    readMatrixDimensions(rows, columns);

    int matrix[100][100]; // Assuming a maximum size of 100 for simplicity
    initializeAndReadMatrix(matrix, rows, columns);

    printMatrix(matrix, rows, columns);

    int target; // Renamed variable for clarity
    cin >> target;

    searchElementInMatrix(matrix, rows, columns, target);
}