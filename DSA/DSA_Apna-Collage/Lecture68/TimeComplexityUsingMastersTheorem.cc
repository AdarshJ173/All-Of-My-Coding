#include<iostream>
using namespace std;
                   
int main(){

    /// TimeComplexityUsingMastersTheorem

    /*
    *Recurrence Relation
        -A recurrence relation is an equation that  recursively defines a sequence.
        Ex:
        Fibonacci Series
        F(n) = F(n-1) + F(n-2)


    *Master Theorem
        -Give the time complexity for the recurrence relation:
        T(n) = aT(n/b) + f(n)

    For the Recurrence: T(n) = aT(n/b) + Θ(n^c), a >= 1, b > 1

    There are the following three cases:

    1. If f(n) = Θ(n^c) where c < log_b(a) then T(n) = Θ(n^log_b(a))

    2. If f(n) = Θ(n^c) where c = log_b(a) then T(n) = Θ(n^c * log n)

    3. If f(n) = Θ(n^c) where c > log_b(a) then T(n) = Θ(f(n))


    //! Problems:
        ?1. T(n) = 2T(n/2)+ Θ(n)
        a = 2,b=2,c=1
        -> c = log_b a
        Time Complexity : Θ(n log_2 n)

        ?2. T(n) = 3T(n/2) + n²
        a = 3,b = 2,c = 2
        -> c>log_b a
        Time Complexity : Θ(n²)

    *Recurrence Tree Method

        // 1.   T(n) = T(n-1) + n
        // T(n)      = T(n-1) + n
        // T(n-1) = T(n-2) + n-1
        // T(n-2) = T(n-3) + n-2
        // .
        // .
        // T(1)      = 1

        // T(n) = n + (n-1) + (n-2) + (n-3) + ... + 1
        // T(n) = (n * (n + 1)) / 2
        //
        // T(n) = Θ(n²)


    
    */

   

}