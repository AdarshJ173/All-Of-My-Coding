//! QUESTION 2 : FIND TOTAL NO. OF OCCURRENCE OF THE INPUT NO.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// pair<int,int>firstAndLastPosition(vector<int>& arr, int n, int k){}

int firstOccurrence(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e){

        if (arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if (key > arr[mid]){
            s = mid +1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
    
}

int LastOccurrence(int arr[],int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

/// write the code for finding the TNOC
int TotalNumberOfOCcurrence(int arr[], int n, int key){
    int TNOC = (firstOccurrence(arr,n,key) - LastOccurrence(arr,n,key))+1;
}

int main(){

    int key;
    cout<<"Enter ur Key: ";cin>>key;

    int even[7] = {1,3,3,4,3,3,5};

    cout<<"Index of First occurrence of "<<key<<" is : "<<firstOccurrence(even,7,key)<<endl;
    cout<<"Index of Last occurrence of "<<key<<" is : "<<LastOccurrence(even,7,key)<<endl;

    
}






























