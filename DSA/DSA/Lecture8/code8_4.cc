/// FUNCTIONS

#include<iostream>
using namespace std;

int main(){

    int a ,b;
    cin>>a>>b;

    int ans = 1;

    for (int i = 1; i<=b; i++){
        ans = ans*a;
    }
    cout<<"answer is "<< ans<<endl;

    //@ this is fine , but what if i want to do the same thing again and again , for that i have to copy the same above code and just change the variables, and how many times will i do it? and lets say if i do it then think how big and clutter the code will be, so what to do? use functions.

   


    
}




