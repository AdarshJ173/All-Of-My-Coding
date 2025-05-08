/// BUBBLE SORT
// BUBBLE SORT IS ONE OF THE SORTING ALGORITHMS THAT WORKS BY REPEATEDLY SWAPPING THE ADJACENT ELEMENTS OF THE ARRAY IF THEY ARE NOT IN SORTED ORDER. YOU ARE GIVEN AN UNSORTED ARRAY CONSISTING OF N NON-NEGATIVE INTEGERS. YOUR TASK IS TO SORT THE ARRAY IN NON-DECREASING ORDER USING THE BUBBLE SORT ALGORITHM.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        if (swapped == false){
            break;
        }
        
    }
    
}

int main(){

}

// time & space complexity

//link