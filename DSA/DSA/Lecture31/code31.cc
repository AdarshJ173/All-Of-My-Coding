/// RECURSION
// when a function calls itself(directly or indirectly) , it is known as recursion.
// when there is a big/complex problem its solution depends on same types of small problem then we use recursion

/*
example :
2^n 
2^4 = 2*2*2*2
2^4 = 2*2^3
2^n = 2 * 2^n-1
f(n) = 2 * f(n-1) - RECURSION RELATION

example :
5! = 5*4*3*2*1
5! = 5 * 4!
n! = n * (n-1)!
f(n) = n * f(n-1)

5! = 4 * 3! ---> ... 1! = 1 * 0! --- (stop) ---> BASE CONDITION/CASE

*/

#include<iostream>
using namespace std;

int factorial(int n){
    // cout<<n<<endl;

    //base case --- mandatory
    if (n ==0)
    {
        return 1; //mandatory
    }

    // if there was not base case then what will happen is : 5 - 4 - 3 - 2 - 1 - 0 - -1 - -2 ...

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
    
    // return n * factorial(n-1);
}

int main(){

    int n;
    cout<<"enter n:"; cin>>n;

    int ans = factorial(n);
    cout<<"the ans is :"<<ans<<endl;

    return 0;
}