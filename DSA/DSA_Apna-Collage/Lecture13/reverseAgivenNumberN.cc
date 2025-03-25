#include<iostream>
// This line includes the input/output stream library, which provides functionality for console input and output.

using namespace std;
// This line allows us to use names from the standard namespace without prefixing them with 'std::'.

int main(){
// This is the main function, the entry point of the program. It returns an integer and takes no arguments.

int n;
// Declares an integer variable 'n' to store the number we want to reverse.

cin>>n;
// Reads an integer from the console (standard input) and stores it in the variable 'n'.

int reverse = 0;
// Initializes an integer variable 'reverse' to 0. This will store the reversed number.

while (n>0)
// Starts a while loop that continues as long as 'n' is greater than 0.
{
    int lastdigit = n%10;
    // Calculates the last digit of 'n' using the modulo operator and stores it in 'lastdigit'.

    reverse = reverse*10 + lastdigit;
    // Builds the reversed number by multiplying the current 'reverse' by 10 (shifting digits left) and adding the last digit.

    n = n/10;
    // Removes the last digit from 'n' by integer division by 10.
}

cout<<reverse<<endl;
// Outputs the reversed number to the console, followed by a newline.

return 0;
// Returns 0 to indicate successful program execution and ends the main function.
}