// 18-9-24

#include<bits/stdc++.h>
using namespace std;

int main(){

int myUnit;
cout<<"enter your unit: ";cin>>myUnit;

int unitSpace = 100;

int rs1 = 1;
int rs2 = 1.5;
int rs3 = 3;
int rs4 = 5;

int cost1 = unitSpace*rs1;
int cost2 = unitSpace*rs2;
int cost3 = unitSpace*rs3;
int cost4 = unitSpace*rs4;


if(1>=myUnit<=100){

    cout<<cost1<<endl;
}
else if (101>=myUnit<=200)
{
    cout<<cost1+cost2<<endl;
}
else if (201>=myUnit<=300)
{
    cout<<cost1+cost2+cost3<<endl;
}
else{
    cout<<cost1+cost2+cost3+cost4<<endl;
}



}


