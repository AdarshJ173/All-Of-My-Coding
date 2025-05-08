#include<bits/stdc++.h>
using namespace std;

// Write a function that takes two integers as arguments and returns the sum of their squares.

int SumOfSquares(int a, int b){
    return a*a + b*b ;
}

int main(){

    int a, b;
    cin>>a>>b;

    cout<<SumOfSquares(a,b)<<endl;

}

//* done it by my own ez