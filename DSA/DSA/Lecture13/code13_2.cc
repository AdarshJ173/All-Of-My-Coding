//! QUESTION 3 : PEAK INDEX IN MOUNTAIN ARRAY
/*
*LETS CALL AN ARRAY A MOUNTAIN IF THE FOLLOWING PROPERTIES HOLD:
- ARR, LENGTH >= 3
- THERE EXISTS SOME i WITH 0<1<ARR,LENGTH - 1 SUCH THAT;
---ARR[0] < ARR[1] < ... ARR[i -1] < ARR[i]
---ARR[i] > ARR[i + 1] > ... > ARR[ARR,LENGTH - 1]

* GIVEN AN INTEGER ARRAY ARR THAT IS GUARANTEED TO BE A MOUNTAIN , RETURN ANY i SUCH THAT ARR[0] < ARR[1] < ... ARR[i-1] < ARR[i] > ARR[i+1] > ... > ARR[ARR,LENGTH - 1].
*/

// LINK : 

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int PeakIndexInMountainArray(vector<int>&arr){
    int s = 0;
    int e = arr.size()-1;

    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    
}

int main(){

}




































