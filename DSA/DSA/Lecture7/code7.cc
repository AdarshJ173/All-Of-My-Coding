/// SOLVING PROBLEMS

//! Question 1 : given a signed 32 bit integer x, return x, with its digits reversed. if reversing x causes the value to go outside the signed 32-bit integer range [ -2^31 , 2^31-1 ], then return 0. Assume the environment doest not allow you to stor 64-bit integers(signed or unsigned)

#include<iostream>
using namespace std;
#include<math.h>


int main(){
    
    int x;
    cin>>x;

    int ans = 0;

    int INT_MAX = 0;
    int INT_MIN = 0;

    while (x!=0)
    {
        int digit = x%10;

        if ((ans > INT_MAX/10) || (ans <INT_MIN/10) )
        {
            return 0;
        }
        

        ans = (ans*10)+digit;
        x = x/10;

    }
    return ans;

 }

 //https://leetcode.com/problems/reverse-integer/submissions/1262412412/