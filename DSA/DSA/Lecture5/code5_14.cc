#include <iostream>
#include <string>

// Function to convert a binary number (represented as a string) to its decimal equivalent
int binaryToDecimal(std::string binary) {
    int decimal = 0; // Initialize the decimal equivalent
    int base = 1;    // Initialize the base value (power of 2)

    // Iterate over the binary string from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        // If the character is '1', add the current base value to decimal
        if (binary[i] == '1') {
            decimal += base;
        }
        // Multiply base by 2 to move to the next power of 2 for the next iteration
        base *= 2;
    }

    return decimal; // Return the calculated decimal value
}

int main() {
    std::string binary; // Declare a string variable to store the user-input binary number

    // Prompt the user to enter a binary number
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    // Call the binaryToDecimal function with the binary string as an argument
    // and store the result in an integer variable decimal
    int decimal = binaryToDecimal(binary);

    // Print the decimal equivalent of the input binary number
    std::cout << "The decimal equivalent is: " << decimal << std::endl;

    return 0;
}
/*
The binaryToDecimal Function
This function takes a std::string parameter binary, which represents the binary number to be converted. It initializes two integer variables: decimal to store the decimal equivalent and base to keep track of the power of 2.

The function then iterates over the binary string from right to left (i.e., from the least significant bit to the most significant bit). For each character in the string:

If the character is '1', it adds the current base value to decimal. This is because in binary, a '1' in a particular position represents the corresponding power of 2.
It then multiplies base by 2 to move to the next power of 2 for the next iteration.
Finally, the function returns the calculated decimal value.

The main Function
The main function is the entry point of the program. It:

Declares a std::string variable binary to store the user-input binary number.
Prompts the user to enter a binary number using std::cout.
Reads the user input into the binary variable using std::cin.
Calls the binaryToDecimal function with the binary string as an argument and stores the result in an integer variable decimal.
Prints the decimal equivalent of the input binary number using std::cout.
*/