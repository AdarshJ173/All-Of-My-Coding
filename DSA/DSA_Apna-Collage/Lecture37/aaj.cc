#include<iostream>
using namespace std;

// Function to print all numbers between 1 and 'n' that are divisible by both 'a' and 'b'
void printNumbersDivisibleByBoth(int n, int a, int b){
    // Iterate from 1 to 'n' to find all numbers divisible by both 'a' and 'b'
    for (int i = 1; i <= n; i++)
    {
        // Check if the current number is divisible by both 'a' and 'b'
        if (i % a == 0 && i % b == 0)
        {
            cout << i << " "; // Print the number found that is divisible by both 'a' and 'b'
        }
    }
}

int main(){

    int n,a,b;
    cin >> n>>a>>b; // Input the upper limit 'n' and divisors 'a' and 'b' for finding numbers divisible by both

    // Call the function to print all numbers divisible by both 'a' and 'b'
    printNumbersDivisibleByBoth(n,a,b);

    return 0;
}