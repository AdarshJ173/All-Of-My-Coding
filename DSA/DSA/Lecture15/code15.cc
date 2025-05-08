/// BOOK ALLOCATION PROBLEM
/*
* GIVEN AN ARRAY 'ARR' OF INTEGER NUMBERS. WHERE 'ARR[i]' REPRESENTS THE NUMBER OF PAGES IN THE 'i-th' BOOK. THERE ARE 'M' NUMBER OF STUDENTS AND THE TASK IS TO ALLOCATE THE BOOKS TO THEIR STUDENTS. ALLOCATE BOOKS IN SUCH A WAY THAT:
@ EACH STUDENT GET AT LEAST ONE BOOK
@ EACH BOOK SHOULD BE ALLOCATED TO A STUDENT
@ BOOK ALLOCATION SHOULD BE IN A CONTIGUOUS MANNER.
? YOU HAVE TO ALLOCATE THE BOOK TO 'M' STUDENT SUCH THAT THE MAXIMUM NUMBER OF PAGES ASSIGNED TO A STUDENT IS MINIMUM.

EXAMPLE: LETS CONSIDER 'N=4'(NUMBER OF BOOKS) AND 'M=2' (NUMBER OF STUDENTS)
ARR = {10,20,30,40}

10 | 20 30 40
10 |90 : max  = 90

10 20 | 30 40
30 | 70 : max = 70

10 20 30 | 40
60 | 40 : max = 60

min of all three is : 60
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPossible(vector<int>arr, int n, int m, int mid){

    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
            
        }
    }
    return true;
}

int allocateBooks(vector<int>arr,int n, int m){
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2; 

    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
}

//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbVFBZjNPOTBINzBxZ0t6NVJIMnotaVlEU2h0QXxBQ3Jtc0trTVAzb2RQUDBTQjVObEdFTEdSNmNqYTdsSWFlNzVSMTdFRk5xZ3NnUTJRVmFFdHdrZVhvdmo1VUIybnF2Nk9KMEkySnZpb0NUZGdlUG1OYWh2RDJxdzY5dWlkYjVmTEVCU0dKVEVpVW5LVHVKcFZrZw&q=https%3A%2F%2Fbit.ly%2F3GiCqY0&v=YTTdLgyqOLY












































