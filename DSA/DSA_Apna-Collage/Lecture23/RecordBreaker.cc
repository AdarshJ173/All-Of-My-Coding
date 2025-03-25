#include<bits/stdc++.h>
using namespace std;

// google kick start

int main(){

    /*
    Problem:
        Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
        Following conditions:
            - the number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
            - Either it is the last day , or the number of visitors on the day is strictly larger than the number of visitors on the following day.
        Note that the very first day could be a record breaking day!
        please help isyana find out the number of record breaking days.

    Input:
        The first line of the input gives the number of test cases, T.T test cases follow . Each test case beings with a line containing the integer N. The second line contains N intergers. T ith integer is vi.

    Output:
        for each test case, output one line containing case #x:y , where x is the test case number (starting from 1) and y is the number of record breaking days.

    Constraints:
        Time limit : 20 seconds per test set.
        memory limit : 1gb.
        1<= T <=100.
        0<= vi <= 2 * 10^5
        
        Test set 1
        1<= N <= 1000.

        Test set 2
        1<=N<=2*10^5 for at most 10 test cases.
        for the remaining cases, 1<=n<=1000.

    Brute Force:
        iterate over all the elements and check if it is record breaking  day or not.
        Note: to check if a[i] is a record breaking day , we have to iterate over a[0],a[1],...,a[i-1].
        Time Complexity for this operation : O(n)
        Overall Time complexity : O(n^2)
    
    Optimised Approach:
        Intuition: If we can optimise step (1), then we can optimise our overall solution.
        For step (1): We need to check if a[i] > { a[i-1], a[i-2],..., a[0] }, which is same as
        a[i] > max(a[i-1], a[i-2],..., a[0])
        For this, we will keep a variable mx, which will store the maximum value till a[i]. Then we just need to check,
        a[i] > mx
        a[i] > a[i+1] , { if i+1 < n }
        and update mx, mx = max(mx, a[i])
        So step (1) time complexity reduces to O(1).
        Overall time complexity: O(n)

    */

   int n;
   cin>>n;

   int a[n+1];
   a[n] = -1;

   for (int i = 0; i < n; i++)
   {
        cin>>a[i];
   }

   if(n == 1){
    cout<<"1"<<endl;
    return 0;
   }

   int ans = 0;
   int mx = -1;

   for (int i = 0; i < n; i++)
   {
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx,a[i]);
   }
   
   cout<<ans<<endl;
   

return 0;
}