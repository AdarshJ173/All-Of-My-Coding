#include <iostream>
#include <math.h> // Include the math library for mathematical operations

using namespace std;

// Function to convert a decimal number to its binary representation
void convertToBinary(int n) {
    // Initialize an array to store the binary digits
    int binaryNum[32];
    // Initialize an index variable for the array
    int i = 0;

    // Loop until the number becomes 0
    while (n!= 0) {
        // Store the remainder of the number when divided by 2 in the array
        binaryNum[i] = n % 2;
        // Update the number by dividing it by 2
        n = n / 2;
        // Increment the index
        i++;
    }

    // Print the binary representation of the number
    cout << "Binary representation of the number is: ";

    // Loop from the last index to the first index of the array
    for (int j = i - 1; j >= 0; j--) {
        // Print the binary digits
        cout << binaryNum[j];
    }

    // Move to the next line
    cout << endl;
}

int main() {
    // Declare and take input for a decimal number
    int n;
    cin >> n;

    // Call the function to convert the decimal number to binary
    convertToBinary(n);

    // Return 0 to indicate successful execution
    return 0;
} 

/*
#include<iostream>
#include<math.h>
#include<bitset>

using namespace std;

int main(){

    int n;
    cin>>n;

    cout << "Binary representation of the negative number is: " << bitset<32>(n) << endl;

    return 0;
}
*/