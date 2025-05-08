/// BINARY SEARCH

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2;
    int mid = start+(end - start)/2;
    
    while (start <=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

    mid = start+(end - start)/2;
    // mid = (start+end)/2;
        
    }

    return -1;
    
}

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int key ;
    cout<<"Enter your key: ";cin>>key;

    int evenIndex = binarySearch(even,6,key);
    cout<<"index of " <<key<<" in even is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,key);
    cout<<"index of "<<key<<" in odd is "<<oddIndex<<endl;
}

/*
FOR
   int mid = (start + end)/2;
WHAT IF 
    START = 2^31-1 (THE MAX RANGE)
    END = 2^31-1 (THE MAX RANGE)

WHICH MIGHT END UP TO GIVE AN ERROR

TO SOLVE THIS , WHAT WE CAN DO IS :

int mid = start+(end-start/2)

*/

/*

/ FOR LINEAR SEARCH -> 1000 VALUES -> ARRAY ---> WORST CASE ---> 1000 COMPARISION 
/ FOR BINARY SEARCH -> 1000 VALUES -> SORTED ARRAY ---> 1000-500-250-125-62-31-15-7-3-1-0 ---> 10 COMPARISONS

*/