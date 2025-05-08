// OctalToDecimal

// This line is a comment indicating the purpose of the program: to convert Octal to Decimal

#include<iostream>
// This line includes the iostream library, which provides input/output functionality in C++

using namespace std;
// This line allows us to use elements from the standard namespace without prefixing them with 'std::'

int OctalToDecimal(int n){
    // This function converts an octal number to its decimal equivalent
    // It takes an integer 'n' as input, which represents the octal number

    int ans = 0;
    // 'ans' will store the final decimal result, initialized to 0

    int x = 1;
    // 'x' represents the place value, starting from 8^0 = 1

    while (n>0)
    // This loop continues as long as there are digits left in the octal number
    {
        int y = n%10;
        // 'y' gets the rightmost digit of the octal number

        ans += x*y;
        // We add the product of the digit and its place value to 'ans'

        x *= 8;
        // The place value is multiplied by 8 for the next iteration (8^0, 8^1, 8^2, ...)

        n /= 10;
        // We remove the rightmost digit from the octal number
    }
    return ans;
    // The function returns the final decimal value
}

int main(){
    // The main function is the entry point of the program

    //binary to decimals
    // This comment is incorrect and should be "octal to decimal"

    int n;
    // Declares an integer variable 'n' to store the input

    cin>>n;
    // Reads an octal number from the user and stores it in 'n'

    cout<<OctalToDecimal(n)<<endl;
    // Calls the OctalToDecimal function with 'n', prints the result, and moves to a new line

}
// The program ends here. When run, it will wait for user input (an octal number),
// convert the input from octal to decimal, and display the result.