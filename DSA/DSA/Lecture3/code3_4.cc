/// This program demonstrates various patterns using nested loops in C++.

#include<iostream>
using namespace std;

int main(){

    /// This block of code prints a square pattern of asterisks based on user input.
    int n;
    cout<<"The main: "; cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i +1;

    }

    cout<<endl;

    /// This block of code prints a right triangle pattern of asterisks based on user input.
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout<<endl;

    /// This block of code prints a square pattern of asterisks based on user input.
    int b;
    cout << "Enter the size of the square: ";
    cin >> b;

    for(int i = 1; i <= b; i++) {
        for(int j = 1; j <= b; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout<<endl;

    /// This block of code prints a rectangle pattern of asterisks based on user input.
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout<<endl;

    /// This block of code prints a pattern of row numbers based on user input.
    int k;
    cout << "Enter the number of rows: ";
    cin >> k;

    int q = 1;
    while (q <= k) {
        int v = 1;
        while (v <= k) {
            cout << q; // print the row number
            v = v + 1;
        }
        cout << "\n"; // move to the next line
        q = q + 1;
    }
     
    cout<<endl;

    /// This block of code prints a pattern of column numbers based on user input.
    int w;
    cout << "Enter the number of rows: ";
    cin >> w;

    int e = 1;
    while (e <= w) {
    int x = 1;
    while (x <= w) {
        cout << x; // print the column number
        x = x + 1;
    }
    cout << "\n"; // move to the next line
    e = e + 1;
    }

}