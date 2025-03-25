#include<iostream>
using namespace std;
                   
int main(){

//* Time Complexity - of an algorithm quantifies the amount of time taken by a program to run a function of length of the input.

// Time Complexity = Linear(n)
int n;
cin>>n;
int a = 0;
for (int i = 1; i <= n; i++)
{
    a = a + 1;
}

// Time Complexity = Quadratic(n*n/n^2)
int m;
cin>>m;
int a = 0;
for (int i = 1; i <=m; i++)
{
    for (int j = 1; j <= n; j++)
    {
        a = a + 1;
    }

}

//* Space Complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input . It is directly proportional to the largest memory the program acquires at any instance during run time.

int n; // 4 bytes
cin>>n;
int a = 0; // 4 bytes
for (int i = 1; i <= n; i++) //4 bytes
{
    a = a + 1;
}
// total space = 12bytes(constant)

// Worst Case [ O (Big Oh)notation ],
// Best Case [ Ω (Big Omega)notation ],
// Average Case [Θ (Big Theta)notation]

/*
    Search : 20 10 5 100 300 17 238
    x = 238 ( worst case ) - ∝ n
    x = 20 ( Best Case ) - constant
    total time/total number of cases - n+1/2 ( Average Case ) - ∝ n
*/

}