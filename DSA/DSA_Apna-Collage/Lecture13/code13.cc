#include<iostream>
using namespace std;
#include<cmath>
#include<math.h>
                   
int main(){

int n;
cout<<"enter a num: ";cin>>n;

bool flag = 0;

for (int i = 2; i <=sqrt(n); i++)
{
    if (n%i == 0)
    {
        cout<<"non-prime"<<endl;
        flag = 1;
        break;
    }
    
}

if (flag == 0)
    {
        cout<<"prime"<<endl;
    }


}