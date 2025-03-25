#include<iostream>
using namespace std;

// Function to find the count of numbers between 1 and 'n' that are divisible by either 'a' or 'b'
int countNumbersDivisibleByEither(int n, int a, int b){
    int count1 = n/a; // Count of numbers divisible by 'a'
    int count2 = n/b; // Count of numbers divisible by 'b'

    int count3 = n/(a*b); // Count of numbers divisible by both 'a' and 'b'

    return count1+count2-count3; // Return the total count of numbers divisible by either 'a' or 'b'
}
                   
int main(){

    /*
    how many numbers between 1 and 1000 are divisible by 5 or 7.
    */

int n,a,b;
cin>>n>>a>>b; // Input the upper limit 'n' and divisors 'a' and 'b' for finding numbers divisible by either 'a' or 'b'

cout<<countNumbersDivisibleByEither(n,a,b)<<endl; // Print the count of numbers found that are divisible by either 'a' or 'b'

return 0;
}