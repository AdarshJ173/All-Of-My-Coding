#include<iostream>
#include<string> // Added for string manipulation
using namespace std;

// Function to generate all subsequences of a string including ASCII values
void generateSubsequences(string inputString, string currentSequence){
    // Base case: If the input string is empty, print the current sequence
    if(inputString.length() == 0){
        cout << currentSequence << endl; // Print the current sequence
        return;
    }

    // Extract the first character from the input string
    char firstCharacter = inputString[0];
    // Convert the character to its ASCII value
    int asciiValue = firstCharacter;
    // Extract the rest of the string (excluding the first character)
    string restOfString = inputString.substr(1);

    // Recursive calls to generate subsequences
    // 1. Without the first character
    generateSubsequences(restOfString, currentSequence);
    // 2. With the first character
    generateSubsequences(restOfString, currentSequence + firstCharacter);
    // 3. With the ASCII value of the first character
    generateSubsequences(restOfString, currentSequence + to_string(asciiValue));
}

int main(){
    // Test the function with the string "AB"
    generateSubsequences("AB", "");
    cout << endl; // For better readability

    return 0;
}