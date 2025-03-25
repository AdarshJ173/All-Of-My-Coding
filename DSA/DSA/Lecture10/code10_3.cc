//! YOUR ARE GIVEN AN ARRAY 'ARR' OF SIZE 'N' CONTAINING EACH NUMBER BETWEEN 1 AND 'N' - 1 AT LEAST ONCE. THERE IS A SINGLE INTEGER VALUE THAT IS PRESENT IN THE ARRAY TWICE. YOUR TASK IS TO FIND THE DUPLICATE INTEGER VALUE PRESENT IN THE ARRAY.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int findDuplicate(vector<int> & arr){

    int ans = 0;
    for (int i = 0; i<arr.size();i++)
    {
        ans = ans^arr[i];
    }

    for(int i = 1; i<arr.size();i++){
        ans = ans^i;
    }

    return ans;
    
}

int main(){

}