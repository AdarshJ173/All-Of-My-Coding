#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Printing from 1 to n\n"; 

    // for(int i = 1; i<=n; i++){
    //     cout<<i<<endl; 
    // }

    int i = 1;
    for (; ; )
    {
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }

    cout<<endl;

    for (int a = 0, b = 1 , c = 0 ; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<<a<<" "<<b<<endl;
    }
    
    

}