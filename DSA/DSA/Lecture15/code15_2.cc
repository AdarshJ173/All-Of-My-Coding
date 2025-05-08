/// AGGRESSIVE COWS
/*
* GIVEN AN ARRAY OF LENGTH 'N' WHERE EACH ELEMENT DENOTES THE POSITION OF A STALL. NOW YOU HAVE 'N' STALL AND AN INTEGER 'K' WHICH DENOTES THE NUMBER OF COWS THAT ARE AGGRESSIVE. TO PREVENT THE COWS FROM HURTING EACH OTHER. YOU NEED TO ASSIGN THE COWS TO THE STALLS. SUCH THAT THE MINIMUM DISTANCE BETWEEN ANY TWO OF THEM IS AS LARGE ASS POSSIBLE. RETURN THE LARGEST MINIMUM DISTANCE.
? INPUT FORMAT: THE FIRST LINE CONTAINS A SINGLE INTEGER 'T' DENOTING THE NUMBER OF TEST CASES. THE FIRST LINE OF EACH TEST CASE CONTAINS TWO INTEGERS 'N' AND 'K' DENOTING THE NUMBER OF ELEMENTS IN THE ARRAY-LIST AND THE NUMBER OF AGGRESSIVE COWS. THE SECOND LINE CONTAINS 'N' SINGLE SPACE-SEPARATED INTEGERS DENOTING THE ELEMENTS OF THE ARRAY.
? OUTPUT FORMAT : FOR EACH TEST CASE, PRINT THE MAJORITY ELEMENT IN A SEPARATE LINE.
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isPossible(vector<int> & stalls,int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount ==k)
            {
                return true;
            }
            
            lastPos = stalls[i];
        }
        
    }
    
}

int aggressiveCows(vector<int> & stalls, int k){

    sort(stalls.begin(),stalls.end());

    int s = 0;

    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi,stalls[i]);

    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (isPossible(stalls,k,mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

}

// link