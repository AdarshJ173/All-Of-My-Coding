#include<iostream>
using namespace std;

// Function to find and print prime factors of a number using the Sieve of Eratosthenes
void findPrimeFactors(int number){
    // Create an array to store the smallest prime factor (SPF) for each number up to 'number'
    int smallestPrimeFactor[number + 1]; // Array size is 'number' + 1 to accommodate numbers from 0 to 'number'

    // Initialize the SPF array by setting each number as its own SPF
    for (int i = 0; i <= number; i++) {
        smallestPrimeFactor[i] = i; // Each number is initially its own smallest prime factor
    }

    // Implement a Sieve-like algorithm to fill the SPF array
    for (int i = 2; i * i <= number; i++) {
        if (smallestPrimeFactor[i] == i) { // If 'i' is a prime number
            for (int j = i * i; j <= number; j += i) {
                if (smallestPrimeFactor[j] == j) {
                    smallestPrimeFactor[j] = i; // Mark 'j' with the smallest prime factor 'i'
                }
            }
        }
    }

    // Print the prime factors of 'number' using the SPF array
    while (number != 1) {
        cout << smallestPrimeFactor[number] << " "; // Print the smallest prime factor of 'number'
        number = number / smallestPrimeFactor[number]; // Divide 'number' by its smallest prime factor
    }
}

int main(){
    int number;
    cin >> number; // Input the number for which to find prime factors
    findPrimeFactors(number); // Call the function to find and print prime factors
    return 0;
}
