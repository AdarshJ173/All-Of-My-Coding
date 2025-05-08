#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1
    int num = 42;
    cout<<num<<endl;

    // 2
    int n1, n2;
    cin>>n1>>n2;

    cout<<n1+n2<<endl;

    // 3
    string name ;
    cout<<"Ur name? :";cin>>name;

    cout<<"Hi "<<name<<" ,Nice to meet U "<<endl;

    // 4
    int length ;
    int breadth;
    cin>>length>>breadth;

    int area = 2*(length+breadth);

    cout<<area<<endl;

    // 5
    int num1 , num2 , num3;
    cin>>num1>>num2>>num3;

    int avg = (num1+num2+num3)/3;

    cout<<avg<<endl;
}