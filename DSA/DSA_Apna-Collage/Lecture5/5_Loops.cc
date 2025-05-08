#include<iostream>
using namespace std;

int main(){
// for loop

// for (initialization ; condition ; update)
// {
    // body
// }

for (int i = 0; i <= 3; i++)
{
    cout<<"_-_-:)"<<endl;
};

// ---------------------------------------------------------------------------
//* sum of all num. till num. of user input

int num;
cout<<"enter ur num.: ";cin>>num;
int sum = 0;
for (int i = 1; i <= num; i++)
{
    sum = sum + i;
}
cout<<sum<<endl;

//* ________________________________________________________________________________________________
//? WHILE LOOP

/*
while(condition is true){
    body
}
*/

//* taking input until -ve num. is given
int n;
cout<<"enter n : ";cin>>n;

while (n>0)
{
    cout<<n<<endl;
    cout<<"enter n : ";cin>>n;
}
cout<<"input is -ve"<<endl;

//* ________________________________________________________________________________________________
//?do-while loop

/*

do{
    body
}while(condition);

*/
int no;
cout<<"enter no.";cin>>no;

do
{
    cout<<no<<endl;
    cout<<"enter no.";cin>>no;
} while (no < 0);
cout<<"input is +ve";

return 0;
}