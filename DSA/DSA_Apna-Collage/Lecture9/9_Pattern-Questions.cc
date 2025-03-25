#include<iostream>
using namespace std;

int main(){

/*
for(1 to rows){
    for(1 to columns){

    }
}
*/

// Rectangle Pattern
int row;
int col;
cout<<"enter the no. of Rows: ";cin>>row;
cout<<"enter the no. of Columns: ";cin>>col;

for (int i = 1; i <=row; i++)
{
    for (int j = 1; j <=col; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}

// Hollow Rectangle Pattern

int r , c;
cin>>r>>c;
for (int i = 1; i <= r; i++)
{
    for (int j = 1; j <= c; j++)
    {
        if(i == 1 || i ==  r || j ==1 || j == c){
            cout<<" * ";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}

// inverted half pyramid
int n;
cin>>n;
for (int i = n; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}

// Half Pyramid After 180 Rotation
int in;
cin>>in;

for (int i = 1; i <= in; i++)
{
    for (int j = 1; j <=in; j++)
    {
        if(j<=in-i){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }
    }
    cout<<endl;
}

// Half Pyramid Using Numbers

int num;
cin>>num;

for (int i = 1; i <=num; i++)
{
    for (int j = 1; j <=i ; j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

// Floyd's Triangle
int number;
cin>>number;

int count = 1;

for (int i = 1; i <=number; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}





}