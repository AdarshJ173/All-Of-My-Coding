/// BINARY SEARCH

/*
! QUESTION 1 : FIRST AND LAST POSITION OF AN ELEMENT IN SORTED ARRAY.
* YOU HAVE BEEN GIVEN A SORTED ARRAY/LIST ARR CONSISTING OF 'N' ELEMENTS. YOU ARE ALSO GIVEN AN INTEGER 'K'. NOW , YOUR TASK IS TO FIND THE FIRST AND LAST OCCURRENCE OF 'K' IN ARR.
*/

//@ https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbktNNjFPTnlRVHliRlFlcldVeFN6ejVWbnZMQXxBQ3Jtc0tsSWhDcmFVSzNXOTRXRkZTQXBmcTJtd0lWVmhZYTB4YkRsbXpCUklMR3U2VWNjUHdib2ZaUjhGQmExeF8tVk53bzBKU0s3aVFLbFFwSVBFdDVXUVY2SVMxcHZmRWNIZUxCQWxrMkc2TzdONmlydW84TQ&q=https%3A%2F%2Fbit.ly%2F3Ioexjh&v=zD2Jg3alZV8

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

int main(){

    int key;
    cout<<"Enter ur Key: ";cin>>key;

    int even[5] = {1,3,3,4,5};

    cout<<"Index of First occurrence of "<<key<<" is : "<<firstOccurrence(even,5,key)<<endl;
    cout<<"Index of Last occurrence of "<<key<<" is : "<<LastOccurrence(even,5,key)<<endl;
    
}






























