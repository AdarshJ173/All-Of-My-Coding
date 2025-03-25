/// MAKING A CALCULATOR

#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    cout<<"Enter num1 :"; cin>>num1;
    cout<<"Enter num2 :"; cin>>num2;

    char oprtn;
    cout<<"Enter operator :"; cin>>oprtn;

    switch (oprtn)
    {
    case '*':
        cout<<num1<<"*"<<num2<<" is : "<<num1*num2<<endl;
        break;

    case '/':
        cout<<num1<<"/"<<num2<<" is : "<<num1/num2<<endl;
        break;

    case '+':
        cout<<num1<<"+"<<num2<<" is : "<<num1+num2<<endl;
        break;
    
    case '-':
        cout<<num1<<"-"<<num2<<" is : "<<num1-num2<<endl;
        break;

    // case '%':
    //     cout<<num1<<"%"<<num2<<"is : "<<num1%num2<<endl;
    //     break;

    default:
        cout<<"Invalid Input"<<endl;
        break;
    }

    /* //* using if-else ladder
    if (oprtn == '*')
    {
        cout<<"num1 * num2 is : "<<num1*num2<<endl;
    }
    else if (oprtn == '/')
    {
        cout<<"num1 / num2 is : "<<num1/num2<<endl;
    }
    else if (oprtn == '+')
    {
        cout<<"num1 + num2 is : "<<num1+num2<<endl;
    }
    else if (oprtn == '-')
    {
        cout<<"num1 - num2 is : "<<num1-num2<<endl;
    }
    // if (oprtn == '%')
    // {
    //     cout<<"num1 '%' num2 is : "<<num1%num2<<endl;
    // }
    else{
        cout<<"Invalid Input"<<endl;
    }
    

    */
}   