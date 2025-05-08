/// check palindrome 
// not considering upper and lower cases

#include <iostream>
#include <cstring>
using namespace std;


//Check if a string is a palindrome
//This function takes a string as input and returns true if the string is a palindrome, and false otherwise.
//The function first creates a new array to store the reversed string, copies the original string to the new array using the strcpy() function, and then reverses the string in place using the swap() function.
//Finally, the function compares the original string with the reversed string using the strcmp() function, and returns true if the strings are equal (i.e., the original string is a palindrome), and false otherwise.
bool isPalindrome(char str[]) {
    int length = strlen(str);
    char reversedStr[length + 1]; // Create a new array to store the reversed string
    strcpy(reversedStr, str); // Copy the original string to the new array

    int s = 0;
    int e = length - 1;
    while (s < e) {
        swap(reversedStr[s++], reversedStr[e--]);
    }

    // Compare the original string with the reversed string
    return strcmp(str, reversedStr) == 0;
}

int main() {
    // Ask the user to enter a string
    char name[20];
    cout << "Enter a string: ";
    cin.getline(name, 20); // Read the entire line of input

    // Print the string entered by the user
    cout << "You entered: " << name << endl;

    // Check if the string is a palindrome using the isPalindrome() function
    if (isPalindrome(name)) {
        // If the string is a palindrome, print a message
        cout << "The string is a palindrome." << endl;
    } else {
        // If the string is not a palindrome, print a message
        cout << "The string is not a palindrome." << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}