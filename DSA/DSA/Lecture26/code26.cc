/// POINTERS - II

#include<iostream>
using namespace std;


int main(){
    // create an array of integers, with length of 10
    int arr[10] = {2,5,7};
    // print the address of the first memory block in the array
    cout<<"the address of the first memory block is : "<< arr<<endl;

    // print the value of the first element in the array
    cout<<arr[0]<<endl;

    // print the address of the first element in the array
    cout<<"the address of the first memory block is : "<<&arr[0]<<endl;

    // print the value of the first element in the array, using the dereference operator
    cout<<"o/p using *arr : "<<*arr<<endl;

    // print the value of the first element in the array, plus one, using the dereference operator and the addition operator
    cout<<"o/p using *arr+1 : "<<*arr+1<<endl;

    // print the value of the second element in the array, using the dereference operator and the addition operator
    cout<<"o/p using *(arr+1) : "<<*(arr+1)<<endl;

    // print the address of the first element plus one, in the array
    cout<<"o/p using arr+1 : "<<arr+1<<endl;

    // print the value of the first element in the array, plus one, using the dereference operator and the addition operator
    cout<<"o/p using (*arr)+1 : "<<(*arr)+1<<endl;

    cout<<endl;

    // create an array of integers, with length of 10
    int ary[10] = { 23, 122 , 41 , 67};

    // print the value of the third element in the array
    cout<<"o/p using ary : "<<ary[2]<<endl;

    // print the value of the third element in the array, using the dereference operator and the addition operator
    cout<<"o/p using ary : "<<*(ary+2)<<endl;

    // print the value of the third element in the array, using the dereference operator and the addition operator
    // the formula: arr[i] = *(arr + i) OR i[arr] = *(i + arr) are equivalent
    int i = 3;
    cout<<i[ary]<<endl;

    // create an array of integers, with length of 10, and initialize its elements to {1,2}
    int temp[10] = {1,2};

    // print the address of the first memory block in the array
    cout<<"temp1 : "<<temp<<endl;

    // print the size of the array in bytes
    cout<<"temp2 : "<<sizeof(temp)<<endl;

    // print the size of the data type of the array's elements
    cout<<"temp3 : "<<sizeof(*temp)<<endl;

    // print the size of the pointer to the first memory block in the array
    cout<<"temp4 : "<<sizeof(&temp)<<endl;


    // create a pointer to the first memory block in the array, and print the address of the first memory block in the array
    int *ptr = &temp[0];
    cout<<"temp5 : " << ptr<<endl;   

    // print the size of the pointer to the first memory block in the array, in bytes
    cout<<"temp6 : " << sizeof(ptr)<<endl;   

    // print the size of the data type of the array's elements
    cout<<"temp7 : " << sizeof(*ptr)<<endl;   

    // print the size of the pointer to the first memory block in the array
    cout<<"temp8 : " << sizeof(&ptr)<<endl;   

    cout<<endl;

    // create an array of integers, with length of 20, and initialize its elements to {1,2,3,5}
    int a[20] = {1,2,3,5};

    // print the address of the first memory block in the array
    cout<<&a[0]<<endl;

    // print the address of the array
    cout<<&a<<endl;

    // print the address of the first memory block in the array
    cout<<a<<endl;

    cout<<endl;

    // create a pointer to the first element in the array, and print the address of the first memory block in the array
    int *p = &a[0];
    cout<<p<<endl;

    // print the value of the first element in the array, using the dereference operator
    cout<<*p<<endl;

    // print the address of the pointer to the first memory block in the array
    cout<<&p<<endl;

    cout<<endl;

    // create an array of integers, with length of 10
    int ar[10];
    // ar = ar+1; // this is not valid, because arrays are not pointers, and cannot be assigned to each other

    // create a pointer to the first memory block in the array, and print the address of the first memory block in the array
    int *pointer = &ar[0];
    cout<<"before: "<<pointer<<endl;

    // increment the pointer to the next memory block in the array, and print the address of the next memory block in the array
    pointer = pointer +1;
    cout<<"after: " <<pointer<<endl;

    return 0;
}


