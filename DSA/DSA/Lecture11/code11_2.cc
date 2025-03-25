//! WHAT IS THE TIME, SPACE COMPLEXITY OF FOLLOWING CODE:

#include<iostream>
using namespace std;

int main(int N){

    int a = 0, b = 0;

    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            a = a + j;
        }
    }
    for (int k = 0; k<N; k++){
        b = b + k;
    }
}

/*

* TIME COMPLEXITY : O(N*N) + O(N) = O(N^2) + O(N)
* ANSWER = O(N^2)

*/