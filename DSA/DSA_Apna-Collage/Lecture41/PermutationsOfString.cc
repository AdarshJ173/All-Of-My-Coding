#include<iostream>
using namespace std;

// Function to generate all permutations of a given string
void generatePermutations(string originalString, string currentString = "") {
    // Base case: If the original string is empty, print the current string
    if (originalString.length() == 0) {
        cout << currentString << endl;
        return;
    }
    
    // Iterate through each character in the original string
    for (int i = 0; i < originalString.length(); i++) {
        // Extract the current character
        char currentChar = originalString[i];
        // Construct the remaining string by removing the current character
        string remainingString = originalString.substr(0, i) + originalString.substr(i + 1);
        
        // Recursively call the function with the remaining string and the current character appended to the current string
        generatePermutations(remainingString, currentString + currentChar);
    }
}

int main() {
    // Example string to generate permutations for
    string exampleString = "ABC";
    // Call the function to generate and print all permutations of the example string
    generatePermutations(exampleString);

    return 0;
}