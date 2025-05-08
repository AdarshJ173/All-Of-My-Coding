#include<bits/stdc++.h>
using namespace std;

class FunOver{
public:
    void fun(){
        cout<<"I am a function with no args"<<endl;
    }

    void fun(int x){
        cout<<"I am a function with int arg"<<endl;
    }

    void fun(double x){
        cout<<"I am function with double arg"<<endl;
    }
};

int main(){
    FunOver obj;

    obj.fun();         // Calls the function with no arguments
    obj.fun(5);        // Calls the function with int argument
    obj.fun(5.5);      // Calls the function with double argument

    return 0;
}