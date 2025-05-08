/// check palindrome 
// considering upper and lower cases and ignoring symbols and whitespaces

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalindrome(string str) {
    // Remove non-alphanumeric characters and convert to lowercase
    string cleanedStr;
    for (char c : str) {
        if (isalnum(c)) {
            cleanedStr += tolower(c);
        }
    }

    // Check if the cleaned string is a palindrome
    int start = 0;
    int end = cleanedStr.length() - 1;
    while (start < end) {
        if (cleanedStr[start++] != cleanedStr[end--]) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "You entered: " << input << endl;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}