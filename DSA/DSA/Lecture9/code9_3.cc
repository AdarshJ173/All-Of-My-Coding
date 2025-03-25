#include<iostream>
using namespace std;

void update(int arr[],int n){

    cout<<"inside the function"<<endl;

    // updating array
    arr[0] = 120;

    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;

    cout<<"going to main"<<endl;
}

int main(){
    int arr[3] = {1,2,3};

    update(arr,3);

    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//? explain me why is the array changing in main when i am making any changes in update function, ( it should'nt ,bcz we saw in the case of integer when used to change the copy in one function that it did not affect the main function ) so how and why now? 