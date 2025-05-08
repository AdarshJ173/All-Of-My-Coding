#include<iostream>
using namespace std;

int main(){
    //* a program to go on date depending on the savings
    int savings;
    cout<<"enter your savings: ";cin>>savings;

    if (savings>5000)
    {
        cout<<"go on date with Naira"<<endl;
        if (savings>10000)
        {
            cout<<"go on road-trip with Naira"<<endl;
        }
        else{
            cout<<"go on shopping with Naira"<<endl;
        }
        
    }
    else if (savings>2000)
    {
        cout<<"go on date with Aarnavi"<<endl;
    }
    else{
        cout<<"go out with friends"<<endl;
    }  

    // ------------------------------------------------------------------------------------------------------------------

    //* MAX. OF 3 NUM.

    int a, b, c;
    cout<<"enter three numbers: ";cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is the max. num. ";
        }
        else{
            cout<<"c is the max. num.";
        }
        
    }
    else{
        if (b>c)
        {
            cout<<"b is the max. num.";
        }
        else{
            cout<<"c  is the max. num.";
        }
        
    }
    
    cout<<endl;
    // ------------------------------------------------------------------------------------------------------------------

    //* EVEN OR ODD

    int num;
    cout<<"enter your num. : ";cin>>num;

    if (num % 2 == 0)
    {
        cout<<num<<" is even ";
    }
    else{
        cout<<num<<" is odd ";
    }
    
    
}