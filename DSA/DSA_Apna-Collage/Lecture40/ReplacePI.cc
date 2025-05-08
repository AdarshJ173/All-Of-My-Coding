// Function to replace "pi" with "3.14" in a given string

#include<iostream>
using namespace std;

// Function to recursively replace "pi" with "3.14" in a string
void replacePIWith314(string inputString){
    // Base case: If the input string is empty, exit the function
    if (inputString.length() == 0)
    {
        return;
    }
    // Check if the first two characters of the string are 'p' and 'i'
    if (inputString[0] == 'p' && inputString[1] == 'i')
    {
        // If true, print "3.14" and recursively call the function on the rest of the string
        cout << "3.14";
        replacePIWith314(inputString.substr(2));
    }
    else{
        // If not, print the first character of the string and recursively call the function on the rest of the string
        cout << inputString[0];
        replacePIWith314(inputString.substr(1));
    }
}

int main(){
    // Example string to replace "pi" with "3.14"
    string exampleString = "pi is the num pi";
    // Call the function to replace "pi" with "3.14" in the example string
    replacePIWith314(exampleString);
}