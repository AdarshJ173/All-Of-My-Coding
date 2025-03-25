#include<iostream>
using namespace std;

// Function to reverse a string using recursion
void reverseString(string s){
    // Base case: If the string is empty, return immediately
    if (s.length() == 0)
    {
        return;
    }
    
    // Recursive case: Extract the rest of the string (excluding the first character)
    string restOfString = s.substr(1);
    // Recursively call the function on the rest of the string
    reverseString(restOfString);

    // Print the first character of the original string
    cout << s[0];
}

int main(){
    // Example string to reverse
    string exampleString = "Adarsh";
    // Call the function to reverse the string
    reverseString(exampleString);

    return 0;
}