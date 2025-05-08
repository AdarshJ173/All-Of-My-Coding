#include<iostream>
using namespace std;

void update(int n ){
    n++;
}

void update2(int &n){
    n++;
}

// bad practice...
int &func(int a){
    int num = a;
    int &ans = num;
    return ans;
}

// bad practice...
int *fun(int n){
    int *ptr = &n;
    return ptr;
}

int main(){
    /*
    int i = 5;

    //create a reference variable
    int& j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    */

   int n = 5;
   cout<<"Before: "<<n<<endl;
   update(n);
   cout<<"After: "<<n<<endl;

   cout<<endl;

   cout<<"Before: "<<n<<endl;
   update2(n);
   cout<<"After: "<<n<<endl;

    // func(n);
    // fun(n);

   return 0;
}