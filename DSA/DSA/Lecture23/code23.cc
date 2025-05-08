/// 2D-ARRAYS

// https://leetcode.com/problems/spiral-matrix/

#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }    
    }
    return 0;
}

void printRowSum(int arr[][3], int row, int col){
    cout<<"Printing sum -> " <<endl;
     for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }    
        cout<<sum<<" ";
    }
}

void printColSum(int arr[][3], int row, int col){
    cout<<"Printing sum -> " <<endl;
     for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }    
        cout<<sum<<" ";
    }
}

int LrgRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"the max num is : "<<maxi<<endl;
    return rowIndex;
}

int main(){
    // 1 2 3 4 5 6 7 8 9 10 11 12

    // int arr [3] [4] = {1 ,2 ,3 ,4, 5, 6 ,7 ,8, 9 ,10, 11, 12};
    // int arr [3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr [3][3];
    
    //taking row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }    
    }
    

    /*
    //taking col wise input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j][i];
        }    
    }
    */

//print
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<< " ";
        }    
        cout<<endl;
    }

    /*
    cout<<"Enter the element to search : "<<endl;
    int target;
    cin>>target;

    if (isPresent(arr,target,3,3))
    {
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
    
    printRowSum(arr,3,3);
    printColSum(arr,3,3);

    */

   int ansIndex = LrgRowSum(arr,3,3);

   cout<<"max row is at index "<<ansIndex<<endl;

    return 0;
    
}