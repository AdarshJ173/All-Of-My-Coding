#include<iostream>
using namespace std;

int main(){

   int bank_balance = 5000;

    if(bank_balance>= 45000 && bank_balance<=60000){
        cout<<"I will buy iphone 16"<<endl;
        if(bank_balance>=50000 && bank_balance<=55000){
            cout<<"i will buy xiaomi 14"<<endl;
        }
    }
    else if(bank_balance>=30000 && bank_balance<=35000){
        cout<<"i will buy vivo v40"<<endl;
    }
    else if(bank_balance<=20000 && bank_balance>=10000){
        cout<<"i will buy samsung"<<endl;
    }
    else{
        cout<<"i will buy motorola"<<endl;
    }

    // int steps = 2;
    for (int i = 1; i <= 5;i++)
    {
        cout<<i<<endl;
    }
    cout<<"i lost 2000 cal"<<endl;


    int i = 1;
    while (i <= 5) {
    cout << "*"<<endl;
    i++;
    }


    int j = 0;
    while (j < -1)
    {
        cout<<j<<endl;
        j++;
    }
    

}