#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum += arr[i];
    }

    return sum;
    
}

int main(){
    int n;
    cout<<"enter n: ";cin>>n;

    //variable size array
    int *arr = new int[n];

    //taking  input n in array
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element in array : ";cin>>arr[i];
    }

    int ans = getSum(arr,n);

    cout<<"answer is: "<<ans<<endl;

    while (true)
    {
        int *ptr = new int;
        
    }
    

    return 0;    
}