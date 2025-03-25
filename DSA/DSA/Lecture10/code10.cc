//! QUESTION SOLVING : ARRAY PROBLEMS

//! 1. Swap Alternate
/*
i/p : arr[5] = {3,6,2,5,3}
o/p : {6,3,5,2,3}

i/p : arr[6] = {1,5,2,4,6,3}
o/p : {5,1,4,2,3,6}

*/

#include<iostream>
using namespace std;

//* This function swaps the elements at the alternate indices of the given array
void swapAlternate(int arr[], int size){

    // Loop through the array with a step of 2
    for(int i=0; i<size; i+=2){
        // Check if the next index is within the array bounds
        if(i+1 < size){
            // Swap the elements at the current and next indices
            swap(arr[i], arr[i+1]);
            /*
            this is how the inbuilt swap function works :
            temp(which temporarily store some value)
            arr[0]
            arr[1]

            function :
            temp = arr[0]
            arr[0] = arr[1]
            arr[1] = temp

            so incase we cant use swap function, then we can write it manually like this.
            */
        }
    }
}

// This function prints the elements of the given array
void print(int arr[], int size){

    // Loop through the array
    for(int i=0; i<size; i++){
        // Print the current element
        cout << arr[i] << " ";
    }
    // Print a newline character to move to the next line
    cout<<endl;
}

int main(){

    // Initialize an array of even length
    int even[8] = {3, 6, 2, 5, 3, 7, 8, 1};

    // Call the swapAlternate function on the even array
    swapAlternate(even,8);

    // Call the print function on the even array
    print(even,8);

    // Initialize an array of odd length
    int odd[5] = {3, 6, 7, 8, 1};

    // Call the swapAlternate function on the odd array
    swapAlternate(odd,5);

    // Call the print function on the odd array
    print(odd,5);

    return 0;
}

/*
*This code is designed to solve a specific array problem, where the goal is to swap the elements at the alternate indices of a given array. The code defines two functions: swapAlternate and print.

*The swapAlternate function takes an array and its size as input, and swaps the elements at the alternate indices of the array. It does this by looping through the array with a step of 2, and swapping the elements at the current and next indices if the next index is within the array bounds.

*The print function takes an array and its size as input, and prints the elements of the array. It does this by looping through the array and printing each element, followed by a space. After printing all the elements, it prints a newline character to move to the next line.

*In the main function, the code initializes two arrays: one with an even number of elements (8), and one with an odd number of elements (5). It then calls the swapAlternate function on both arrays, followed by the print function to print the resulting arrays.

Here's an example of how the code works:

Input array: arr[5] = {3, 6, 2, 5, 3}

Output array: {6, 3, 5, 2, 3}

The code swaps the elements at indices 0 and 1, 2 and 3, and 4 and 5 (which is out of bounds, so it has no effect).

Input array: arr[6] = {1, 5, 2, 4, 6, 3}

Output array: {5, 1, 4, 2, 3, 6}

The code swaps the elements at indices 0 and 1, 2 and 3, and 4 and 5.

Overall, this code provides a simple and efficient solution to the problem of swapping alternate elements in an array.
*/