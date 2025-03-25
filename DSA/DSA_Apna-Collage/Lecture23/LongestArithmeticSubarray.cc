#include<bits/stdc++.h>
using namespace std;

// google kick start problem

int main(){
    
    /*
    Problem:
        An arithmetic array is an array that contains at least two integers and the difference between consecutive intergers are equal. for example , 
        [9,10] , [3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic arrays.
        
        sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length . Please help her to determine the length of the longest contiguous arithmetic subarray.

    Input:
        The first line of the input gives the number of test cases, T. T test cases follow . Each test case begins with a line containing the integer N. The Second line contains N integers. The i-th integer is A.
    
    Output:
        For each test case, ouput one line containing case #x:y , where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray.

    Constraints:
        Time limit:20 seconds per test set.
        Memory limit : 1gb
        1<= t <= 100.
        0<= Ai <= 10^9

        Test set 1
        2<= N <= 2000

        Test set 2
        2<= N <= 2*10^5 for at most 10 test cases.
        for remaining cases, 2<= N <= 2000
    
    1 sec = 10^8 operations(approx)

    Intuition and Approach:
    -Loop over the array and find the answer.
        Maintain the following variables:
        1.previous common difference (pd)
        2.current arithmetic subarray length (curr)
        3.max arithmetic subarray length (ans)
    */

   int n;
   cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2;

    while (j<n)
    {
        if(pd == a[j]-a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    
    cout<<endl;
    
    cout<< ans << " ";

    return 0;

}