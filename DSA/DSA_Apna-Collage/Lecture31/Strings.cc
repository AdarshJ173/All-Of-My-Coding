#include<bits/stdc++.h>
using namespace std;
                   
int main(){

    // Explanation of the differences between Character Arrays and Strings in C++
    /*
    Character Arrays:
        - Need to know size beforehand.
        - Larger size required for operations(concatenate or append).
        - No terminating extra character.
    Strings:
        - No need to know size beforehand.
        - Performing operations like concatenation & append is easier.
        - Terminated with a special character '\0'.
    */

   // Declaring a string variable to store user input
   string userStringInput;

//    // Attempting to read user input into the string variable
//    cin>>userStringInput;
//    // Displaying the user input
//    cout<<userStringInput;

    // Creating a string of 5 characters, all 'n'
    string repeatedNCharacters(5,'n');

    // Displaying the string of 'n's
    cout<<repeatedNCharacters<<endl;

    // Initializing a string with a literal value
    string stringLiteral = "AAJ";
    // Displaying the string literal
    cout<<stringLiteral<<endl;

    // Declaring a string to store user input
    string userStringInput2;
    // Attempting to read user input into the string variable
    cin>>userStringInput2;
    // Using getline to read the entire line of input including spaces
    getline(cin,userStringInput2);
    // Displaying the user input
    cout<<userStringInput2<<endl;


return 0;
}