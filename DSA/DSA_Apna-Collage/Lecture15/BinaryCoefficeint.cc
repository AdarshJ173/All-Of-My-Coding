#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i =2; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main(){

    // calculate nCr
    // nCr = n!/(n-r)! * r!

    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;


return 0;
}