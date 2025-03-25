#include<bits/stdc++.h>
using namespace std;
                   
int main(){

    // Q1: Displaying the original string and ASCII difference between 'a' and 'A'
    string originalName = "A.Adarsh Jagannath";
    cout << originalName << endl; // Displaying the original string

    cout << 'a' - 'A' << endl; // Displaying the ASCII difference between 'a' and 'A'

    // convert into upper case using manual iteration
    for (int i = 0; i < originalName.size(); i++)
    {
        if(originalName[i] >= 'a' && originalName[i] <= 'z'){ // Checking if the character is lowercase
            originalName[i] -= 32; // Subtracting 32 to convert lowercase to uppercase
        }
    }
    
    cout << originalName << endl; // Displaying the string in uppercase

    // convert into lower case using manual iteration
    for (int i = 0; i < originalName.size(); i++)
    {
        if(originalName[i] >= 'A' && originalName[i] <= 'Z'){ // Checking if the character is uppercase
            originalName[i] += 32; // Adding 32 to convert uppercase to lowercase
        }
    }
    
    cout << originalName << endl; // Displaying the string in lowercase

    // Using transform function to convert to uppercase and lowercase
    string title = "Zendriya";
    transform(title.begin(), title.end(), title.begin(), ::toupper); // Converting the string to uppercase
    cout << title << endl; // Displaying the string in uppercase

    transform(title.begin(), title.end(), title.begin(), ::tolower); // Converting the string to lowercase
    cout << title << endl; // Displaying the string in lowercase

    // Time Complexity Analysis:
    // The time complexity of the manual iteration for converting case is O(n), where n is the size of the string.
    // The time complexity of the transform function is also O(n), where n is the size of the string.
    // The overall time complexity is O(n) due to the linear operations performed on the string.
    // Space Complexity Analysis:
    // The space complexity is O(1) as we are not using any additional space that scales with the input size.

return 0;
}