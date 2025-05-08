#include<bits/stdc++.h>
using namespace std;

int main(){

    // Inputting the length of the string
    int stringLength;
    cin >> stringLength;

    // Declaring a character array to store the string, with an extra space for the null character
    char stringArray[stringLength + 1];

    // Inputting the string
    cin >> stringArray;

    // Initializing a flag to check if the string is a palindrome
    bool isPalindrome = true;

    // Iterating through the string to check if it's a palindrome
    for (int i = 0; i < stringLength / 2; i++) // Optimized to only check up to the middle of the string
    {
        // Comparing characters from the start and end of the string
        if(stringArray[i] != stringArray[stringLength - 1 - i]){
            isPalindrome = false; // If characters don't match, set the flag to false
            break; // Exit the loop as soon as a mismatch is found
        }
    }

    // Outputting the result
    if(isPalindrome){
        cout << "The word is a palindrome" << endl; // If the flag is true, the string is a palindrome
    }
    else{
        cout << "Not a Palindrome" << endl; // If the flag is false, the string is not a palindrome
    }

}