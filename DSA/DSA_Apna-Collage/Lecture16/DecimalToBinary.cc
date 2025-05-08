// This program converts a decimal number to its binary representation

#include<bits/stdc++.h>
// This line includes the standard C++ library, which provides many useful functions and utilities

using namespace std;
// This line allows us to use elements from the standard namespace without prefixing them with 'std::'

int DecimalToBinary(int n){
    // This function converts a decimal number 'n' to its binary equivalent
    // It returns an integer representing the binary number

    int x = 1;
    // 'x' is initialized to 1 and will be used to find the largest power of 2 not exceeding 'n'

    int ans = 0;
    // 'ans' will store the binary representation of the number, initialized to 0

    while (x <= n)
    {
        x *= 2;
        // This loop doubles 'x' until it exceeds 'n', finding the largest power of 2 not greater than 'n'
    }
    x /= 2;
    // We divide 'x' by 2 to get back to the largest power of 2 not exceeding 'n'

    while (x > 0)
    {
        // This loop converts the decimal to binary by repeatedly dividing by powers of 2

        int lastDigit = n / x;
        // 'lastDigit' is either 0 or 1, representing whether the current power of 2 fits into 'n'

        n -= lastDigit * x;
        // We subtract the value represented by the current binary digit from 'n'

        x /= 2;
        // We move to the next lower power of 2

        ans = ans * 10 + lastDigit;
        // We add the new binary digit to our answer, shifting previous digits left by multiplying by 10
    }
    return ans;
    // We return the binary representation as an integer
}

int main(){
    // The main function is the entry point of the program

    int n;
    // We declare an integer variable 'n' to store the input decimal number

    cin >> n;
    // We read a decimal number from the user and store it in 'n'

    cout << DecimalToBinary(n) << endl;
    // We call the DecimalToBinary function with 'n', print the result, and move to a new line

    return 0;
    // We return 0 to indicate successful program execution
}