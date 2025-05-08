#include<bits/stdc++.h>
using namespace std;

// Function to swap the values of two integers passed by reference
void swapValues(int *firstValue, int *secondValue){
    // Temporary variable to hold the value of the first integer
    int temp = *firstValue;
    // Assign the value of the second integer to the first integer
    *firstValue = *secondValue;
    // Assign the value of the temporary variable to the second integer
    *secondValue = temp;
}

int main(){
    // Initialize two integer variables 'a' and 'b' with values 2 and 4 respectively
    int a = 2;
    int b = 4;

    // int *aptr = &a;
    // int *bptr = &b;

    // swap(a,b);
    // cout<<a<<" "<<b<<endl;

    // Call the function 'swapValues' with the addresses of 'a' and 'b' as arguments
    swapValues(&a,&b);
    // Print the swapped values of 'a' and 'b'
    cout<<a<<" "<<b<<endl;

    return 0;
}