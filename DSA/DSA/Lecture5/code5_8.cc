#include<iostream>
using namespace std;

int main(){


    // for(int i = 0; i<=5; i--){
    //     cout<<i<<" ";
    //     i++;
    // }


    // for(int i = 0; i<=5; i++){
    //     cout<<i<<" ";
    //     i++;
    // }



    //   for(int i = 0; i<=15; i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }


    // for ( int i = 0 ; i<5; i++)
    // {
    //     for(int j = i; j<=5; j++){
    //         cout<<"i"<<" "<< j <<endl;
    //     }
    // }
    


    for (int i = 0 ; i<5 ; i++)
    {
    for(int j = i ; j<=5;j++)
        {
        if(i+j == 10)
            {
            break;
            }
        cout<<i<<" "<<j<<endl;
        }
    }
    
}

/*
for(int i = 0; i<=5; i++): This is a for loop that initializes a variable i to 0, checks if i is less than or equal to 5, and increments i by 1 at the end of each iteration.
cout<<i<<" ";: Inside the loop, this line prints the current value of i followed by a space.
i++;: This line increments i by 1 again, in addition to the increment at the end of the for loop.
The issue with this code is that the i++ inside the loop causes i to be incremented twice in each iteration, which leads to skipped numbers in the output.


*/