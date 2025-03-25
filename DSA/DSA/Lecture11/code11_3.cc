//! WHAT IS THE TIME COMPLEXITY OF THE FOLLOWING CODE:

#include<iostream>
using namespace std;

int main(int N){

    int a = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j--)
        {
            a = a + i + j;
        }
        
    }

}

/*

* TIME COMPLEXITY : O(N) * O(N) = O(N^2) = ANSWER

*/