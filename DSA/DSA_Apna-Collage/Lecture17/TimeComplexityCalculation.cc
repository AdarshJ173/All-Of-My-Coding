#include<bits/stdc++.h>
using namespace std;

int main(){

     int n,m;
    cin>>n>>m;
    int a = 0;

    for (int i = 1; i <=n; i++)
    {
        a = a+1;
    }

    for (int j = 0; j <=m; j++)
    {
        a = a+1;
    }
    // The code iterates through two loops, one from 1 to n and the other from 0 to m, incrementing 'a' by 1 each time.
    // Since both loops are independent and iterate up to n and m respectively, the time complexity can be represented as       O(n+m).

//?-------------------------------------------------------------------------------------------------------------------------------------
    
    int n,m;
    cin>>n>>m;
    int a = 0;

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=m; j++)
        {
            a = a+rand();
        }
        
    }
    // The nested loops iterate from 0 to n and 0 to m respectively, performing a constant-time operation (adding a random number to 'a') each time.
    // Since both loops are independent and iterate up to n and m, the time complexity can be represented as O(n*m).
    
//?-------------------------------------------------------------------------------------------------------------------------------------

    int n,m;
    cin>>n>>m;
    int a = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            a = a + rand();
        }
        
    }
    for (int i = 1; i <=n; i++)
    {
        a = a + rand();
    }
    
    // Time Complexity = O((n*m)+n)
    // O(n*m) for the nested loops where the outer loop runs 'n' times and the inner loop runs 'm' times.
    // O(n) for the subsequent loop that runs 'n' times independently.
    
//?-------------------------------------------------------------------------------------------------------------------------------------

    int n;
    cin >> n;
    int a = 0, i = n;
    while (i >= 1)
    {
        a = a + 1;
        i /= 2;
    }
    // Time Complexity: n/2^k >= 1 --- O(log n)
    
//?-------------------------------------------------------------------------------------------------------------------------------------

    int n;
    cin>>n;
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <= n; j+=i)
        {
            count += 1;
        }
        
    }
    // Time Complexity Analysis:
    // The outer loop runs 'n' times.
    // The inner loop runs 'n/i' times for each iteration of the outer loop.
    // Therefore, the total number of operations is the sum of 'n/i' for i from 1 to n.
    // This sum is equal to n * (1 + 1/2 + 1/3 + ... + 1/n), which is approximately n * log(n).
    // Hence, the time complexity is O(n log n).
    // 
    // | Loop | Iterations |
    // | Outer | n |
    // | Inner | n/i |
    // | Total | n * (1 + 1/2 + 1/3 + ... + 1/n) |
    // | Time Complexity | O(n log n) |
    

    /*
            n       n^2         n^3
    n=1   1unit    1unit       1unit
    n=2   2         4           8  
    n=3   3         9           27

    O(n) -> fast
    O(n^3) -> slow
    O(n)<O(n^2)<O(n^3)

                n           log n
    n = 1       1           0
    n = 2       2           log2 2 = 1
    .
    .
    .
    n = 1024    1024        log2 2^10 = 10

    O(log n)< O(n)
    
                sqrt(n)         log n
    n = 1       1               0
    n = 2       √2             1
    .
    O(log n) < O(√n)

    f(n) = n        n<=1000
        n^2         n>1000

    g1(n) = n       n<=100
        n^4         n>100
    
    g2(n) = n^3     n<=100
        n^2         n>100
    
    g1(n) + g2(n)

    */
}