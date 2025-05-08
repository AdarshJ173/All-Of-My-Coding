/// SORTING
//* SELECTION SORT

/*
? WHY :
? WHAT? : 
? WHEN : 
? HOW :
*/

//@ SELECTION SORT IS ONE OF THE SORTING ALGORITHMS THAT WORKS BY REPEATEDLY FINDING THE MINIMUM ELEMENTS FROM THE UNSORTED PART OF THE ARRAY AND PUTTING IT AT THE BEGINNING OF THE UNSORTED REGION OF THE ARRAY. YOU ARE GIVEN AN UNSORTED ARRAY CONSISTING OF N non-negative INTEGERS. YOUR TASK IS TO SORT THE ARRAY IN non-decreasing ORDER USING THE SELECTION SORT ALGORITHM.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void selectionSort(vector<int> & arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }   
}

int main(){

}

/*
flowchart
stable or unstable algorithm? what r they?

*/