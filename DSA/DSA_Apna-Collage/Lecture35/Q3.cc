#include<bits/stdc++.h>
using namespace std; 

// Function to get the bit at a particular position
bool isBitSet(int number, int position){
    // Using bitwise AND operation to check if the bit at 'position' is set
    // If the result is not zero, it means the bit is set
    return ((number & (1<<position))!=0);
}

// Function to set the bit at a particular position
int setBit(int number, int position){
    // Using bitwise OR operation to set the bit at 'position'
    return (number | (1<<position));
}

// Function to find the unique number in an array
int findUniqueNumber(int array[], int size){
    // Initialize the result to 0
    int result = 0;
    // Iterate over each bit position (0 to 63)
    for (int i = 0; i < 64; i++)
    {
        // Initialize a variable to store the sum of bits at the current position
        int sum = 0;
        // Iterate over each element in the array
        for (int j = 0; j < size; j++)
        {
            // If the bit at the current position is set in the current element, increment the sum
            if(isBitSet(array[j],i)){
                sum++;
            }
        }
        
        // If the sum is not a multiple of 3, set the bit at the current position in the result
        if(sum%3!=0){
            result = setBit(result,i);
        }

    }
    
    // Return the result
    return result;

}
int main(){

    /*
    write a program to find a unique number in an array where all numbers except one , are present thrice.
    {1,3,2,3,4,2,1,1,3,2}
    */

   // Example array with one unique number
   int array[] = {1,3,2,3,4,2,1,1,3,2};
   // Size of the array
   int size = sizeof(array) / sizeof(array[0]);
   // Call the function to find the unique number and print the result
   cout<<findUniqueNumber(array,size)<<endl;

return 0;
}