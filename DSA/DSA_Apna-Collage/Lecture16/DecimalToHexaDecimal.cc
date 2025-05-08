// DecimalToHexaDecimal

#include<bits/stdc++.h>
// This line includes the standard C++ library, which provides many useful functions and utilities.

using namespace std;
// This line allows us to use elements from the standard namespace without prefixing them with 'std::'.

string DecimalToHexaDecimal(int n){
    // This function takes an integer 'n' as input (the decimal number) and returns a string (the hexadecimal equivalent).

    int x = 1;
    // 'x' is initialized to 1 and will be used to find the largest power of 16 not exceeding 'n'.

    string ans = "";
    // 'ans' will store our final hexadecimal result, initialized to an empty string.

    while (x<=n)
    {
        x*=16;
        // This loop doubles 'x' until it exceeds 'n', finding the largest power of 16 not greater than 'n'.
    }
    x/=16;
    // We divide 'x' by 16 to get back to the largest power of 16 not exceeding 'n'.

    while (x>0)
    {
        // This loop converts the decimal to hexadecimal by repeatedly dividing by powers of 16.

        int lastDigit = n/x;
        // 'lastDigit' is the quotient of 'n' divided by 'x', representing the current hexadecimal digit.

        n -= lastDigit*x;
        // We subtract the value represented by the current hexadecimal digit from 'n'.

        x/=16;
        // We move to the next lower power of 16.

        if(lastDigit <= 9 ){
            ans = ans + to_string(lastDigit);
            // If the current digit is less than or equal to 9, we add it to 'ans' as a string.
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
            // If the current digit is greater than 9, we convert it to a character and add it to 'ans'.
        }
    }
    
    return ans;
    // We return the final hexadecimal value as a string.
}

int main(){
    // The main function, where program execution begins.

    int n;
    // We declare an integer variable 'n' to store the input decimal number.

    cin>>n;
    // We read a decimal number from the user and store it in 'n'.

    cout<<DecimalToHexaDecimal(n)<<endl;
    // We call the DecimalToHexaDecimal function with 'n', print the result, and move to a new line.

}
// The program ends here. When run, it will wait for user input (a decimal number),
// convert the input from decimal to hexadecimal, and display the result.