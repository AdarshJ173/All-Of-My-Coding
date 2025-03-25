#include<bits/stdc++.h>
using namespace std;

// Function to form the largest number from a numeric string
int main(){

    /*
    Second Question:
        "Form the biggest number from the numeric string"
    "53214" ---> "54321"
    */

    // Example numeric string to process
    string numericString = "21321654687";

    // Sorting the characters in the numeric string in descending order to form the largest number
    sort(numericString.begin(), numericString.end(), greater<int>());

    // Displaying the largest number formed from the numeric string
    cout << numericString << endl;

    return 0;
}