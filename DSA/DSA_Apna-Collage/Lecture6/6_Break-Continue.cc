#include<iostream>
using namespace std;

int main() {
    int pocketMoney = 3000;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
            // is used to skip to next iteration of the loop
        }
        if (pocketMoney == 0)
        {
            break;
            // is used to terminate the loop
        }
        
        cout << "Day " << date << ": Go out today!" << endl;
        pocketMoney = pocketMoney - 300;
        cout << "Remaining pocket money: " << pocketMoney << endl;
    }

//*_________________________________________________________________
//? skip multiples of three
    for (int i = 0; i < 100; i++)
    {
        if (i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
        
    }

//*------------------------------------------------------------------------------------
//? Prime or not
    int number;
    cout<<"enter any number: ";cin>>number;
    int j;

    for ( j = 2; j < number; j++)
    {
        if (number%j==0)
        {
            cout<<number<<" is not prime"<<endl;
            break;
        }
    }
    if (j == number)
    {
        cout<<number<<" is a prime number";
    }

//*------------------------------------------------------------------------------------
//? prime number in a range of input

    int c;
    int d;
    cout<<"enter num. c: ";cin>>c;
    cout<<"enter num. d: ";cin>>d;

    for (int k = c; k <= d; k++){
        int l;
        for ( l = 0; l < k; l++)
        {
            if (k%2 == 0)
            {
                break;
            }
            
        }
        if (l == k)
        {
            cout<<k<<endl;
        }
    }
    
    

    return 0;
}