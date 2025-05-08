#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){

    int a,b;
    cout<<"Enter the Values of a and b : \n";
    cin>>a;
    cin>>b;

    int ans = gcd(a,b);

    cout<<"The GCD of "<<a <<" & "<<b<<"is : "<<ans<<endl;

    return 0;
}

/*
FORMULA:

GCD(a,b) = GCD(b,a%b)



lcm(a,b) * gcd(a,b) = a*b
*/