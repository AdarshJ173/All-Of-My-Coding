#include<iostream>
using namespace std;

// Function to print numbers from n to 1 in decreasing order
void printNumbersInDecreasingOrder(int n){
    // Base case: If n is 0, stop printing
    if(n == 0){
        return;
    }

    // Print the current number
    cout << n << endl;
    // Recursively call the function with n-1 to print the next number
    printNumbersInDecreasingOrder(n-1);
}

int main(){
    // Variable to store the input number
    int inputNumber;
    // Read the input number from the user
    cin >> inputNumber;

    // Call the function to print numbers from inputNumber to 1 in decreasing order
    printNumbersInDecreasingOrder(inputNumber);

    return 0;
}