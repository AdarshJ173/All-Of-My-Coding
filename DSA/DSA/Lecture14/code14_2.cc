//! FIND SQUARE ROOT WITH BINARY SEARCH
/*
* GIVEN A NON-NEGATIVE INTEGER X, COMPUTE AND RETURN THE SQUARE ROOT OF X. SINCE THE RETURN TYPE IS AN INTEGER , THE DECIMAL DIGITS ARE TRUNCATED, AND ONLY THE INTEGER PART OF THE RESULT IS RETURNED. {YOU R NOT ALLOWED TO USE ANY BUILT-IN EXPONENT FUNCTION OR OPERATOR , SUCH AS POW ETC...}
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long int binarySearch(int n){

    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while (s<=e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return n;

            if (square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    
}

int main(){
    
}