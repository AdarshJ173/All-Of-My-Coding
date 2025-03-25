#include<iostream>
using namespace std;

//* Function Signature
void printCounting(int n){
    for (int i = 1; i<=n; i++)
    {
        cout<<i<<" "<<endl;
    }
    return ;
}

int main(){
    int n;
    cin>>n;

    //* Function Call
    printCounting(n);

    return 0;
}