#include<iostream>
using namespace std;

// Function to implement the Sieve of Eratosthenes algorithm
void sieveOfEratosthenes(int n){
    // Initialize an array to keep track of prime numbers
    bool isPrime[100] = {false}; // Assuming n will not exceed 100

    // Iterate through all numbers from 2 to n
    for (int number = 2; number <= n; number++)
    {
        // If the current number is not marked as composite (i.e., it's prime)
        if (!isPrime[number])
        {
            // Mark all multiples of the current number as composite
            for (int multiple = number * number; multiple <= n; multiple += number)
            {
                isPrime[multiple] = true; // Mark as composite
            }
        }
    }

    // Print all prime numbers found
    for (int number = 2; number <= n; number++)
    {
        if (!isPrime[number]) // If the number is not marked as composite, it's prime
        {
            cout << number << " ";
        }
    }
    cout << endl; // Newline for better readability
}

int main(){
    int n;
    cin >> n; // Input the upper limit for finding prime numbers
    sieveOfEratosthenes(n); // Call the function to find and print prime numbers
}