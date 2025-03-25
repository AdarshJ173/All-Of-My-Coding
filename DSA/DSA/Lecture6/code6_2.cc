#include<iostream>
#include<math.h> // Include the math library for mathematical operations

// Using namespace directive to use the elements of the std namespace
using namespace std;

// Function declaration for the main function
int main() {
    // Declare and initialize an integer variable 'n' to store user input
    int n;
    cin>>n;

    // Initialize two integer variables 'i' and 'ans' to 0
    int i = 0, ans = 0;

    // Loop until 'n' becomes 0
    while (n!=0) {
        // Calculate the remainder of 'n' divided by 10 to get the last digit
        int bit = n % 10;

        // Check if the last digit is 1
        if (bit ==1) {
            // Calculate 2 raised to the power of 'i' and add it to 'ans'
            ans = ans + pow(2,i);
        }

        // Divide 'n' by 10 to remove the last digit
        n = n/10;

        // Increment 'i' by 1
        i++;
    }

    // Print the value of 'ans'
    cout<<ans<<endl; 
}