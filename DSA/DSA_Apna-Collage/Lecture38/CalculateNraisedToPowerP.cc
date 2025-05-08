#include<iostream>
using namespace std;

// Function to calculate the power of a number
int calculatePower(int base, int exponent){
    // Base case: anything raised to the power of 0 is 1
    if(exponent == 0){
        return 1;
    }

    // Recursive case: calculate the power by multiplying the base with the result of the power of the base with the exponent decremented by 1
    int previousPower = calculatePower(base, exponent-1);
    return base * previousPower;
}

int main(){
    int base, exponent; // Variables to hold the base and exponent
    // Input the base and exponent from the user
    cin >> base >> exponent;

    // Output the result of the power calculation
    cout << calculatePower(base, exponent) << endl;

    return 0;
}
