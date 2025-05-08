#include<iostream>
using namespace std;

// Function to calculate the number of ways in which n friends can remain single or can be paired up.
int friendsParing(int n){
    // Base cases
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    // Recursive call to the function
    return friendsParing(n-1) + friendsParing(n-2) * (n-1);
    
}

int main(){

    // Test case
    cout<<friendsParing(4)<<endl;

return 0;
}