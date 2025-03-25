#include<iostream>
using namespace std;

int main(){

    int givenAmount;
    cin>>givenAmount;

    int notes;
    cin>>notes;

    switch (notes)
    {
    case 100:
        cout<<givenAmount/100<<endl;
        break;
    
    default:
        break;
    }
}