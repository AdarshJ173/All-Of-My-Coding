/// ARRAY : STL

#include<iostream>
using namespace std;
#include<array>

int main(){
    
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index: "<<a.at(2)<<endl;
    
    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;

    
}