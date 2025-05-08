// print all possible word form phone digits
#include<iostream>
using namespace std;

// Array to map phone digits to their corresponding keypad characters
string phoneKeypad[] = {
    "", // 0
    "./", // 1
    "abc", // 2
    "def", // 3
    "ghi", // 4
    "jkl", // 5
    "mno", // 6
    "pqrs", // 7
    "tuv", // 8
    "wxyz" // 9
};

// Function to generate all possible words from phone digits
void generatePhoneWords(string phoneNumber, string currentWord){
    // Base case: If the phoneNumber is empty, print the currentWord
    if (phoneNumber.length() == 0)
    {
        cout << currentWord << endl; // Print the current word
        return;
    }

    // Extract the first character of the phoneNumber
    char firstDigit = phoneNumber[0];

    // Find the corresponding keypad characters for the firstDigit
    string keypadCharacters = phoneKeypad[firstDigit-'0'];

    // Extract the rest of the phoneNumber
    string restOfPhoneNumber = phoneNumber.substr(1);

    // Iterate over each character in the keypadCharacters
    for (int i = 0; i < keypadCharacters.length(); i++)
    {
        // Recursively call the function with the restOfPhoneNumber and the current character
        generatePhoneWords(restOfPhoneNumber, currentWord + keypadCharacters[i]);
    }
}

int main(){
    // Example phone number to generate words from
    string phoneNumber = "23";
    // Initial currentWord is empty
    string currentWord = "";

    // Call the function to generate all possible words
    generatePhoneWords(phoneNumber, currentWord);

    return 0;
}