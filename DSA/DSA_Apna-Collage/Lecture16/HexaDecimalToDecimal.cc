// HexaDecimalToDecimal
// This comment indicates the purpose of the program: to convert hexadecimal numbers to decimal.

#include<iostream>
// This line includes the input/output stream library, allowing us to use cin and cout.

#include<bits/stdc++.h>
// This includes a header that contains most standard C++ libraries. It's not recommended for production code but often used in competitive programming.

using namespace std;
// This line allows us to use standard namespace elements without prefixing them with 'std::'.

int HexaDecimalToDecimal(string n){
    // This function takes a string 'n' as input (the hexadecimal number) and returns an integer (the decimal equivalent).

    int ans = 0;
    // 'ans' will store our final decimal result, initialized to 0.

    int x = 1;
    // 'x' represents the place value, starting from 16^0 = 1.

    int s = n.size();
    // 's' stores the length of the input string.

    for (int i = s-1; i >= 0; i--)
    // This loop iterates through the string from right to left (least significant to most significant digit).
    {
        if(n[i]>= '0' && n[i] <= '9'){
            // If the character is a digit (0-9)...
            ans += x*(n[i]-'0');
            // We convert the char to int by subtracting '0', multiply by the place value, and add to the result.
        }
        else if (n[i]>= 'A' && n[i] <= 'F')
        // If the character is a letter (A-F)...
        {
            ans += x*(n[i]-'A' + 10);
            // We convert A to 10, B to 11, etc., by subtracting 'A' and adding 10, then multiply by place value and add to result.
        }
        x*=16;
        // We multiply the place value by 16 for the next iteration.
    }
    return ans;
    // We return the final decimal value.
}

int main(){
    // The main function, where program execution begins.

    //hexadecimal to decimal
    // This comment restates the purpose of the program.

    string n;
    // Declare a string variable to store the input hexadecimal number.

    cin>>n;
    // Read the hexadecimal number from user input.

    cout<<HexaDecimalToDecimal(n)<<endl;
    // Call the conversion function, print the result, and end the line.

}
// The program ends here.