#include<iostream>
using namespace std;

// Function to print numbers from 1 to n in increasing order
void printNumbersInIncreasingOrder(int n){
    // Base case: If n is 0, stop printing
    if (n == 0) {
        return;
    }
    
    // Recursively call the function with n-1 to print the previous number
    printNumbersInIncreasingOrder(n - 1);
    // Print the current number
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    // Call the function to print numbers from 1 to n in increasing order
    printNumbersInIncreasingOrder(n);

    return 0;
}