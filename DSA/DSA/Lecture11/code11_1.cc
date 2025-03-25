//! WHAT IS THE TIME COMPLEXITY OF THE CODE

#include<iostream>
using namespace std;

int main(int N, int M){
    int a = 0, b = 0;
    for (int i = 0; i < N; i++)
    {
        a = a + rand();
    }
    for (int j = 0; j < M; j++)
    {
        b = b + rand();
    }
}
//* ASSUME THAT RAND() IS O(1)time, O(1) space function

/* //! for this case
/ TIME COMPLEXITY = O(N+M)
*/

/*
@ + if for[ O(n)] is outside for[O(m)] (like above example) - then O(n) + O(m)
@ * if for[ O(n)] is outside for[O(m)] - then O(n)*O(m)
*/

//* SPACE COMPLEXITY : how much memory will the algorithm take as function of the length of the input
//! WHAT IS THE TIME, SPACE COMPLEXITY OF above code:
