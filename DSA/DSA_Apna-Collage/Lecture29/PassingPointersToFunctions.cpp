#include<bits/stdc++.h>
using namespace std;

// Function to increment the value of a variable passed by reference
void incrementByReference(int& n){
    // Increment the value of 'n' by 1
    n++;
}

int main(){
    // Initialize an integer variable 'a' with value 2
    int a = 2;
    // Call the function 'incrementByReference' with 'a' as an argument
    incrementByReference(a);
    // Print the updated value of 'a'
    cout << "Updated value of 'a': " << a << endl;

    return 0;
}