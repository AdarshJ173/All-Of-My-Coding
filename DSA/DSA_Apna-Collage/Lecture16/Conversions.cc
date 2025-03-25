#include<iostream>
using namespace std;

// This line includes the iostream library, which provides input/output functionality in C++.
// 'using namespace std;' allows us to use standard library functions without the 'std::' prefix.

int binaryToDecimal(int n){
    // This function converts a binary number to its decimal equivalent.
    // It takes an integer 'n' as input, which represents the binary number.

    int ans = 0;  // 'ans' will store the final decimal result, initialized to 0.
    int x = 1;    // 'x' represents the place value, starting from 2^0 = 1.

    while (n>0)
    {
        // This loop continues as long as there are digits left in the binary number.

        int y = n%10;  // 'y' gets the rightmost digit of the binary number.
        ans += x*y;    // We add the product of the digit and its place value to 'ans'.
        x *= 2;        // The place value is doubled for the next iteration (2^0, 2^1, 2^2, ...).
        n /= 10;       // We remove the rightmost digit from the binary number.
    }
    return ans;  // The function returns the final decimal value.
}

int main(){
    // The main function is the entry point of the program.

    //binary to decimals
    // This comment indicates that we're converting from binary to decimal.

    int n;     // Declares an integer variable 'n' to store the input.
    cin>>n;    // Reads a binary number from the user and stores it in 'n'.

    cout<<binaryToDecimal(n)<<endl;  // Calls the binaryToDecimal function with 'n',
                                     // prints the result, and moves to a new line.

}
// The program ends here. When run, it will wait for user input, convert the input
// from binary to decimal, and display the result.