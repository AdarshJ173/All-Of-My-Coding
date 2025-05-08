#include<iostream>
using namespace std;

int main(){

    /*
    to make:
    1
    22
    333
    4444
    55555
    */

    int input;
    cout<<"Input: "; cin>>input;

    int row = 1;
    
    while (row<=input)
    {
        int col = 1;
        
         while (col<=row)
        {
            cout<<row;
            col = col + 1;
        }
       
        cout<<endl;
        row = row + 1;

    }

    /*
    The code is designed to take a number as input and then print out a pattern of numbers based on that input. The pattern is as follows:

For the first line, print the number 1.
For the second line, print the number 2 twice.
For the third line, print the number 3 three times.
For the fourth line, print the number 4 four times.
And so on, until you've printed the input number as many times as the current line number.
The first while loop controls the number of lines that are printed. It starts at 1 and continues until it reaches the input number.

The second while loop is responsible for printing the numbers on each line. It starts at 1 and continues until it reaches the current line number. For each iteration of the loop, it prints the current line number.
    */
    
}