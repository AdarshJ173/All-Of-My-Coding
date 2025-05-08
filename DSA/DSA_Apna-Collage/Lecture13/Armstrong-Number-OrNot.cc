#include<iostream>
using namespace std;
#include<math.h>

int main(){

    // An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.
    // For example, 153 is an Armstrong number because:
    // 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
    
int n;
cin>>n;

int sum = 0;
int originalN = n;

while (n>0){
    int lastdigit = n%10;
    sum += pow(lastdigit,3);
    n = n/10;
}

if (sum == originalN)
{
    cout<<"Armstrong number"<<endl;
}
else{
    cout<<"not armstrong"<<endl;
}

return 0;
}