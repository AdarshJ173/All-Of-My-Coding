#include<bits/stdc++.h>
using namespace std;

// Write a function that takes two integers as arguments and returns the larger of the two.
int LargerOfTwoNum(int a , int b){
    return a > b ? a : b;
}

int main(){
    
    int a , b;
    cin>>a>>b;

    cout<<LargerOfTwoNum(a,b)<<" is larger"<<endl;

}

// done it by my own ez

/*
#include<bits/stdc++.h>
using namespace std;

// Write a function that takes two integers as arguments and returns the larger of the two.
int LargerOfTwoNum(int a , int b){
    if(a>b){
        cout<<a<<" is larger"<<endl;
    }
    else{
        cout<<b<<" is larger"<<endl;
    }
}

int main(){
    
    int a , b;
    cin>>a>>b;

    cout<<LargerOfTwoNum(a,b)<<endl;

}
*/