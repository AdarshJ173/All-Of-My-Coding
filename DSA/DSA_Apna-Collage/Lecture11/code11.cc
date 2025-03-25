#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

// Decimal Number System
// Base 10, uses digits 0-9
// Example: 678

// Binary Number System
// Base 2, uses digits 0 and 1
// Example: 10011

// Conversion: Decimal to Binary representation
/*
   152 in decimal:
   +---+---+---+---+---+
   | 1 | 5 | 2 |   |   |
   +---+---+---+---+---+
   |10^2|10^1|10^0|   |   |
   +---+---+---+---+---+
   |100 | 10 | 1  |   |   |
   +---+---+---+---+---+

   152 = 1*100 + 5*10 + 2*1
   152 = 1*10^2 + 5*10^1 + 2*10^0
*/

// Function to convert decimal to binary
string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

// Conversion: Binary to Decimal
/*
   1101 in binary:
   +---+---+---+---+---+
   | 1 | 1 | 0 | 1 |   |
   +---+---+---+---+---+
   |2^3|2^2|2^1|2^0|   |
   +---+---+---+---+---+
   | 8 | 4 | 2 | 1 |   |
   +---+---+---+---+---+

   1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
        = 1*8 + 1*4 + 0*2 + 1*1
        = 13 in decimal
*/

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Prime Numbers
// Numbers with only 2 distinct factors: 1 and the number itself
// Examples: 2, 3, 5, 7, 19

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Armstrong Numbers
// Sum of cubes of individual digits equals the number itself
// Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

bool isArmstrong(int n) {
    int sum = 0, original = n;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return (sum == original);
}

// Fibonacci Series
// Each number is the sum of the two preceding ones
// 0, 1, 1, 2, 3, 5, 8, 13, ...

vector<int> generateFibonacci(int n) {
    vector<int> fib(n);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib;
}

// Factorial
// Product of all positive integers less than or equal to n
// n! = n * (n-1) * (n-2) * ... * 2 * 1
// Example: 4! = 4 * 3 * 2 * 1 = 24

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Function to print digits of a number from right to left
void printDigitsRightToLeft(int n) {
    while (n > 0) {
        cout << n % 10 << endl;
        n /= 10;
    }
}

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    // Decimal to Binary conversion
    cout << "Decimal to Binary:" << endl;
    cout << "247 = " << decimalToBinary(247) << endl;
    cout << "148 = " << decimalToBinary(148) << endl;
    cout << "18 = " << decimalToBinary(18) << endl;

    // Binary to Decimal conversion
    cout << "\nBinary to Decimal:" << endl;
    cout << "10001 = " << binaryToDecimal("10001") << endl;
    cout << "11000001 = " << binaryToDecimal("11000001") << endl;
    cout << "111111111 = " << binaryToDecimal("111111111") << endl;

    // Prime number check
    cout << "\nPrime number check:" << endl;
    int num = 17;
    cout << num << " is " << (isPrime(num) ? "prime" : "not prime") << endl;

    // Armstrong number check
    cout << "\nArmstrong number check:" << endl;
    num = 153;
    cout << num << " is " << (isArmstrong(num) ? "an Armstrong number" : "not an Armstrong number") << endl;

    // Fibonacci series
    cout << "\nFibonacci series (first 10 terms):" << endl;
    vector<int> fib = generateFibonacci(10);
    for (int i : fib) cout << i << " ";
    cout << endl;

    // Factorial
    cout << "\nFactorial:" << endl;
    num = 5;
    cout << num << "! = " << factorial(num) << endl;

    // Print digits from right to left
    cout << "\nPrinting digits from right to left:" << endl;
    num = 1234;
    cout << "For " << num << ":" << endl;
    printDigitsRightToLeft(num);

    // Reverse a number
    cout << "\nReversing a number:" << endl;
    num = 1879;
    cout << num << " reversed is " << reverseNumber(num) << endl;

    return 0;
}