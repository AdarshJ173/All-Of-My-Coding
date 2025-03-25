#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1;
    cout<<"Enter The Value of Num1: ";cin>>num1;

    int num2;
    cout<<"Enter The Value of Num2: ";cin>>num2;

    if (num1>num2)
    {
        cout<<"Num1 "<<num1<<" is greater than "<<num2<<endl;
    }
    else if (num1 == num2)
    {
        cout<<"Num1 "<<num1<<" is = to "<<num2<<endl;
    }
    else{
        cout<<"Num2 "<<num2<<" is greater than "<<num1<<endl;
    }
    
    return 0;
}