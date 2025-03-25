// DecimalsToOctal

// This line includes the standard C++ library, which provides many useful functions and utilities.
#include<bits/stdc++.h>

// This line brings all the standard library names into the global namespace for easier use.
using namespace std;

// This function converts a decimal number to its octal representation.
int DecimalsToOctal(int n){
    // Initialize x to 1. This will be used to find the largest power of 8 that's less than or equal to n.
    int x = 1;
    // Initialize ans to 0. This will store the final octal result.
    int ans = 0;

    // This loop finds the largest power of 8 that's less than or equal to n.
    while (x<=n)
    {
        x*=8;
    }
    // Divide x by 8 to get the correct starting point for conversion.
    x/=8;

    // This loop performs the actual conversion from decimal to octal.
    while (x>0)
    {
        // Find the quotient when n is divided by x. This gives us the current octal digit.
        int lastDigit = n/x;
        // Subtract the value represented by this digit from n.
        n -= lastDigit*x;
        // Reduce x by a factor of 8 for the next iteration.
        x/=8;
        // Add the current digit to ans, shifting previous digits left by multiplying by 10.
        ans = ans*10 + lastDigit;
    }
    // Return the final octal representation.
    return ans;
    
}

// The main function where program execution begins.
int main(){
    // Declare an integer variable n to store the input.
    int n;
    // Read an integer from the standard input (keyboard) into n.
    cin>>n;

    // Call the DecimalsToOctal function with n, print the result, and add a newline.
    cout<<DecimalsToOctal(n)<<endl;

// Return 0 to indicate successful program execution.
return 0;
}