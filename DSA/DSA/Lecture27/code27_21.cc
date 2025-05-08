#include<iostream>
using namespace std;

void incrmnt(int **p){
    ++(**p);
}

int main(){
    int num = 110;
    int *ptr = &num;
    incrmnt(&ptr);
    cout<<num<<endl;

    /// easy bc, easy...
}