#include<bits/stdc++.h>  // Include the necessary library for using standard C++ functions and data structures
using namespace std;  // Use the standard namespace for C++ functions

int reverse(int n){
    int ans = 0;  // Initialize a variable 'ans' to store the reversed number
    while (n>0)
    {
        int lastDigit = n%10;  // Get the last digit of the number 'n'
        ans = ans*10 + lastDigit;  // Append the last digit to the 'ans' in reverse order
        n /=10;  // Remove the last digit from 'n'
    }
    return ans;  // Return the reversed number
}

int addBinary(int a, int b){
    int ans = 0;  // Initialize a variable 'ans' to store the sum of binary numbers
    int prevCarry = 0;  // Initialize a variable 'prevCarry' to store the carry from the previous addition

    while (a>0 && b>0)
    {
        if(a%2 == 0 && b%2 == 0){
            ans = ans *10 + prevCarry;  // If both bits are 0, add the previous carry to the result
            prevCarry = 0;  // Update the carry to 0
        }
        else if ((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0))
        {
            if(prevCarry == 1){
                ans = ans*10 + 0;  // If one bit is 0 and the other is 1, add 0 to the result
                prevCarry = 1;  // Update the carry to 1
            }
            else{
                ans = ans*10 + 1;  // If one bit is 0 and the other is 1, add 1 to the result
                prevCarry = 0;  // Update the carry to 0
            }
        }
        else{
            ans = ans*10 + prevCarry;  // If both bits are 1, add the previous carry to the result
            prevCarry = 1;  // Update the carry to 1
        }
        a/=10;  // Move to the next bit of number 'a'
        b/=10;  // Move to the next bit of number 'b'
    }

    while (a>0)
    {
        if(prevCarry == 1){
            ans = ans*10 + 0;  // If there is a carry, add 0 to the result
            prevCarry = 1;  // Update the carry to 1
        }
        else{
            ans = ans*10 +1;  // If no carry, add 1 to the result
            prevCarry = 0;  // Update the carry to 0
        }
    }

    while (a>0)
    {
        if(prevCarry == 1){
            if(a%2 == 1){
                ans = ans*10 + 0;  // If there is a carry and the bit is 1, add 0 to the result
                prevCarry = 1;  // Update the carry to 1
            }
            else{
                ans = ans*10+1;  // If there is a carry and the bit is 0, add 1 to the result
                prevCarry = 0;  // Update the carry to 0
            }
        }
        else{
            ans = ans*10 + (a%2);  // If no carry, add the bit as it is to the result
        }
        a/=10;  // Move to the next bit of number 'a'
    }

    while (b>0)
    {
        if(prevCarry == 1){
            if(b%2 == 1){
                ans = ans*10 + 0;  // If there is a carry and the bit is 1, add 0 to the result
                prevCarry = 1;  // Update the carry to 1
            }
            else{
                ans = ans*10+1;  // If there is a carry and the bit is 0, add 1 to the result
                prevCarry = 0;  // Update the carry to 0
            }
        }
        else{
            ans = ans*10 + (b%2);  // If no carry, add the bit as it is to the result
        }
        b/=10;  // Move to the next bit of number 'b'
    }
    
    if(prevCarry == 1){
        ans = ans*10 + 1;  // If there is a final carry, add it to the result
    }

    ans = reverse(ans);  // Reverse the final result to get the correct binary sum

    return ans;  // Return the final binary sum
    
}

int main(){

    int a,b;
    cin>>a>>b;  // Input two binary numbers 'a' and 'b'

    cout<< addBinary(a,b)<<endl;  // Call the addBinary function with 'a' and 'b', and print the result

}