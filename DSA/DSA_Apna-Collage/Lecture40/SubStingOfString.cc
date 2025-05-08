#include<iostream>
using namespace std;

// Function to generate all subsequences of a given string
void generateSubsequences(string originalString, string currentSubsequence){
    // Base case: If the original string is empty, print the current subsequence
    if (originalString.length() == 0)
    {
        cout << currentSubsequence << endl; // Print the current subsequence
        return; // Exit the function
    }
    
    // Extract the first character from the original string
    char firstCharacter = originalString[0];
    // Create a new string without the first character
    string remainingString = originalString.substr(1);

    // Recursive call without including the first character in the subsequence
    generateSubsequences(remainingString, currentSubsequence);
    // Recursive call including the first character in the subsequence
    generateSubsequences(remainingString, currentSubsequence + firstCharacter);
}

int main(){
    // Call the function to generate subsequences for the string "ABC"
    generateSubsequences("ABC", "");
    cout << endl; // Print a newline for better readability

    return 0;
}