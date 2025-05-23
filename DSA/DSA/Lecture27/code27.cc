/// DOUBLE POINTERS 

#include<iostream>
using namespace std;

void update(int **p2){
    //no change
    // p = p + 1;

    //yes change
    // *p = *p +1;

    **p2 = **p2 +1;
}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"All IS WELL"<<endl;

    cout<<"printing p: "<<p<<endl;
    cout<<"address of P: "<< &p <<endl;

    cout<<*p2<<endl;

    cout<<i<<endl;

    cout<<*p<<endl;

    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<endl;

    cout<<"before : "<<i<<endl;
    cout<<"before : "<<p<<endl;
    cout<<"before : "<<p2<<endl;
    update(p2);
    cout<<"after : "<<i<<endl;
    cout<<"after : "<<p<<endl;
    cout<<"after : "<<p2<<endl;


    return 0;
}
