#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    bool isPrime = 1;

    for (int i = 2; i<n; i ++)
    {
        if (n%i == 0)
        {
            cout<<"not a prime number";
            isPrime = 0;
            break; /// BREAK
        }
    }

    if (isPrime ==0)
    {
        cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Is a prime number"<<endl;
    }
    
    
}