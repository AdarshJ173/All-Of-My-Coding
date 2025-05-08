// https://leetcode.com/problems/count-primes/submissions/1275166568/
/// MATHEMATICS IN DSA 
/*



*/


#include<iostream>
using namespace std;

bool IsPrime( int n){

    if (n<=1)
    {
        return false ;
    }
    

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            // cout<<"Not a prime number \n";
            return 0;
        }
        else{
            // cout<<"Is a prime number \n";
        }
        
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter your number : ";cin>>n;
    if (IsPrime(n))
    {
        cout<<"Prime number \n";
    }
    else
    {
        cout<<"Not a prime number \n";
    }
}
/*
* TIME COMPLEXITY :
Based on the provided code snippet from code24.cc, the time complexity of the IsPrime function is O(n), where n is the input number.
The function iterates from 2 to n-1 and checks if the input number n is divisible by any number in that range. If it finds a divisor, it returns false immediately. If it doesn't find a divisor within the loop, it returns true, indicating that n is a prime number.
The loop runs for a maximum of n-1 iterations, so the time complexity is directly proportional to the input number.
Therefore, the time complexity of the IsPrime function is O(n).
*/
