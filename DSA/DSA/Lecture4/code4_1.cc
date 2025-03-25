#include<iostream>
using namespace std;

int main(){
    // Prompt user to input a positive integer value for 'n'
    int n;
    cin>>n;

    // Initialize 'i' and 'count' variables
    int i = 1;
    int count = 1;

    // Outer loop to iterate from 1 to 'n'
    while (i<=n)
    {
        // Initialize 'j' variable
        int j = 1;

        // Inner loop to iterate from 1 to 'n'
        while (j<=n)
        {
            // Print the current 'count' value and increment it
            cout<<count<<" ";
            count = count + 1;

            // Increment 'j'
            j = j + 1;
        }

        // Print a newline after each inner loop iteration
        cout<<endl;

        // Increment 'i'
        i = i + 1;
    }
}