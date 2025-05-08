///   VARIABLE & SCOPES

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<a<<endl; // gives a garbage value

    int b = 3;
    cout<<b<<endl;

    if(true){
        int b = 3;
        cout<<b<<endl;
        int c = 5;
    }
    cout<<b<<endl;

    // cout<<c<<endl; // bcz its not created outside the if - it will throw an error

    int c = 1;
    cout<<c<<endl;

    cout<<" This is just like this only"<<endl;
    
    // int c = 456;
    // cout<<c<<endl;

    int i = 8;

    for(int i = 0 ; i<8;  i++){
        cout<<"HI"<<endl;
    }

    if (1){
        int b;
        if(1){
            int b;
            if (1){
                cout<<b<<endl;
            }
        }
    }
    

}