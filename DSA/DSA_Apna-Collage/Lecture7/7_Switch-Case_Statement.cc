#include<iostream>
using  namespace std;

int main(){

    char character;
    cout<<"input ur char: ";cin>>character;

    switch (character)
    {
    case 'a':
        cout<<"hi"<<endl;
        break;
    case 'b':
        cout<<"namaste"<<endl;
        break;
    case 'c':
        cout<<"salut"<<endl;
        break;
    case 'd':
        cout<<"ciao"<<endl;
        break;
    case 'e':
        cout<<"hey"<<endl;
        break;
    
    default:
        cout<<"still learning"<<endl;
        break;
    }

//?-----------------------------------------------------------------------------------------------------------------------------
//* simple calculator using switch-case statement

    int num1;
    int num2;
    cout<<"enter num1: ";cin>>num1;
    cout<<"enter num2: ";cin>>num2;

    char opr;
    cout<<"give the operator:";cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<"sum of "<<num1<<" & "<<num2<<" is: "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"difference of "<<num1<<" & "<<num2<<" is: "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"multiplication of "<<num1<<" & "<<num2<<" is: "<<num1*num2<<endl;
        break;
    case '/':
        cout<<"division of "<<num1<<" & "<<num2<<" is: "<<num1/num2<<endl;
        break;
    
    default:
        cout<<"invalid operator";
        break;
    }

}