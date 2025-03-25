#include<iostream>
using namespace std;

/* Function to print a pyramid pattern of characters */
int main()
{
    /* Variable to store the number of rows in the pyramid */
    int n;
    /* Input the number of rows from the user */
    cin >> n;

    /* Initialize the row counter to 1 */
    int row = 1;

    /* Initialize the character to be printed, starting from 'A' */
    char value = 'A';

    /* Loop to print each row of the pyramid */
    while (row <= n)
    {
        /* Initialize the column counter to 1 */
        int col = 1;

        /* Loop to print each character in the current row */
        while (col <= row)
        {
            /* Print the current character */
            cout << value;
            /* Increment the column counter */
            col = col + 1;
        }

        /* Move to the next line after printing each row */
        cout << endl;
        /* Increment the character to be printed for the next row */
        value++;
        /* Increment the row counter */
        row = row + 1;
    }
}