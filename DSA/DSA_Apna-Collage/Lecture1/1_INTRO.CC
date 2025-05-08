// 28-07-2024

#include<iostream>
using namespace std;

int main(){
    int num1 = 7;
    int num2 = 6;

    int sum = num1 + num2;

    cout<<sum<<endl; 

    // -----------------------------------------------------------------------------------------------------
//? find max of 3 numbers
    int a = 3; 
    int b = 2;
    int c = 1;

    if (a>b)
    {
       if (a>c)
       {
        cout<<"a is max : "<<a<<endl;
       }
       else{
        cout<<"c is max : "<<c<<endl;
       }
    }
    else{
        if (b>c)
        {
            cout<<"b is max : "<<b<<endl;
        }
        else{
            cout<<"c is max : "<<c<<endl;
        }
    }

    // -----------------------------------------------------------------------------------------------------
//? check if given number is prime or not
    int n;
    cin >> n;
    int div = 2;
    bool isPrime = true;

    while (div < n)
    {
        if (n % div == 0)
        {
            isPrime = false;
            break;
        }
        div = div + 1;
    }

    if (isPrime && n > 1)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }

    // -----------------------------------------------------------------------------------------------------

//? Print all the prime numbers till n
   int N;
   cin >> N;
   int num = 2;
   while (num<=N)
   {
    int div = 2;
    while (div<num)
    {
        if (num % div == 0)
        {
            num = num + 1;
        }
        else{
            div = div+1;
        }
    }
    cout<<num<<endl;
    num += 1;
    
   }
    // -----------------------------------------------------------------------------------------------------

   

}

