//! SEARCH IN ROTATED SORTED ARRAY
/*
* YOU HAVE BEEN GIVEN A SORTED ARRAY-LIST ARR CONSISTING OF 'N' ELEMENTS . YOU ARE ALSO GIVEN AN INTEGER 'K'. NOW THE ARRAY IS ROTATED AT SOME PIVOT POINT UNKNOWN TO YOU. FOR EX: IF ARR = [1,3,5,7,8]. THEN AFTER ROTATING ARR AT INDEX 3, THE ARRAY WILL BE ARR = [7,8,1,3,5]. NOW YOUR TASK IS TO FIND THE INDEX AT WHICH IS 'K' IS PRESENT IN ARR. 
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int getPivot(vector<int>&arr,int n){
    int s = 0;
    int e = n-1;
    int mid  = s+(e-s)/2;

    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;    
}

int binarySearch(vector<int>&arr,int s,int e, int key){
    int start = s;
    int end = e;

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>&arr,int n,int k){
    int pivot = getPivot(arr,n);
    if (k > arr[pivot] && k <= arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
    
}

int main(){
    int array[] = {7,8,1,3,5};

} 

//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjdiMnNLRDZkY3hoSmNGbHR2MDZHZ09fREVLZ3xBQ3Jtc0trUHZzMTBZTEtJWFFwOWpmdlVsZGhjQ1lCck96YUNKYkt5YmU0WDN3d205elQtaU9BS29EN2pvcGJYcnJhSl8yc1prb240cjZZU2RDX1JzemJlR1RJWUwzeEFfNDBoT3k3aVM3dVMzNkRzaWdFalNJMA&q=https%3A%2F%2Fbit.ly%2F3rEVSK7&v=6z2HK4o8qcU