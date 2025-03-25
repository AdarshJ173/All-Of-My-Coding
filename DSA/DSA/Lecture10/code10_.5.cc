//! YOU ARE GIVEN TWO ARRAYS 'A' AND 'B' OF SIZE 'N' AND 'M' RESPECTIVELY. BOTH THESE ARRAYS ARE SORTED IN NON-DECREASING ORDER. YOU HAVE TO FIND THE INTERSECTION OF THESE TWO ARRAYS. INTERSECTION OF TWO ARRAYS IS AN ARRAY THAT CONSISTS OF ALL THE COMMON ELEMENT OCCURRING IN BOTH ARRAYS.

#include<iostream>
#include<math.h>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

vector<int> findArrayIntersection(vector<int> & arr1, int n , vector<int> & arr2, int m){

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (element<arr2[j])
            {
                break;
            }

            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -4464; //INT_MIN
                break;

            }
            
        }
        
    }
    

}

int main(){

}