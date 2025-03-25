#include<iostream>
using namespace std;

// Function to move all occurrences of 'x' to the end of the string
string moveAllX(string inputString){
    // Base case: If the input string is empty, return an empty string
    if (inputString.length() == 0)
    {
        return "";
    }

    // Extract the first character of the input string
    char firstCharacter = inputString[0];

    // Recursively call the function on the rest of the string
    string processedString = moveAllX(inputString.substr(1));

    // Check if the first character is 'x'
    if (firstCharacter == 'x')
    {
        // If it is 'x', append it to the end of the processed string
        return processedString + firstCharacter;
    }
    
    // If the first character is not 'x', prepend it to the processed string
    return firstCharacter + processedString;
}

int main(){
    // Example string to move all 'x' to the end
    string exampleString = "axxhdbodhoxhioexhd";
    // Call the function to move all 'x' to the end of the example string
    cout << moveAllX(exampleString) << endl;

    return 0;
}