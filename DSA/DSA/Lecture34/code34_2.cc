// i/p -> a = 3 , b = 2 : o/p -> 3^2 = 9
#include<iostream>
using namespace std;

int power(int a, int b){
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // recursive call 
    int ans = power(a,b/2);

    if (b%2 == 0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
}

int main(){
    int a,b;
    cout<<"enter a: ";cin>>a;
    cout<<"enter b: ";cin>>b;

    int ans = power(a,b);

    cout<<"answer is: "<<ans<<endl;

    return 0;

}