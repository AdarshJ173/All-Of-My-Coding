#include<iostream>
using namespace std;
                   
// Function to get the bit at a specific position
int getBit(int number , int position){
    // Using bitwise AND to check if the bit is 1 or 0
    return ((number & (1<<position))!=0);
}

int main(){

    /*
    Example:
    n = 0101 => 5
    Suppose we need to get the bit at position i = 2
    1<<i = 0100
    0101 & 0100 = 0100
    If n&(1<<i)!=0, then the bit is 1
    */

   // Printing the bit at position 2 in the number 5
   cout<<getBit(5,2)<<endl;

return 0;
}