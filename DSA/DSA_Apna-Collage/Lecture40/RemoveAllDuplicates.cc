#include<iostream>
using namespace std;

// Function to remove all duplicates from a string
string removeDuplicates(string inputString){
    // Base case: If the input string is empty, return an empty string
    if (inputString.length() == 0)
    {
        return "";
    }
    
    // Extract the first character of the input string
    char firstCharacter = inputString[0];
    // Recursively call the function on the rest of the string
    string processedString = removeDuplicates(inputString.substr(1));
    
    // Check if the first character is the same as the first character of the processed string
    if (firstCharacter == processedString[0])
    {
        // If they are the same, return the processed string to avoid duplication
        return processedString;
    }

    // If they are not the same, prepend the first character to the processed string
    return (firstCharacter + processedString);
}

int main(){
    // Test the function with a sample string
    cout << removeDuplicates("aabbbbbbbbbbbeeeeeeeeeeeeeecccccccccdddddddd") << endl;
     
    return 0;
}