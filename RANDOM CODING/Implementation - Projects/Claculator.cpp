#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1;
    int n2;
    char op;

    cout<<"Enter 1st number: ";cin>>n1;
    cout<<"Enter 2nd number: ";cin>>n2;
    cout<<"Enter Operation: ";cin>>op;

    if (op == '+')
    {
        cout<<"Sum of "<<n1<<" & "<<n2<<" is: "<<n1+n2;
    }
    else if (op == '-')
    {
        cout<<"Difference of "<<n1<<" & "<<n2<<" is: "<<n1-n2;
    }
    else if (op == '*')
    {
        cout<<"Multiplication of "<<n1<<" & "<<n2<<" is: "<<n1*n2;
    }
    else if (op == '/')
    {
        if(n2 == 0){
            cout<<"Not Defined"<<endl;
        }
        else{
            cout<<"Division of "<<n1<<" & "<<n2<<" is: "<<n1/n2;
        }
    }
    else{
        cout<<"input a valid operator"<<endl;
    }
    


}