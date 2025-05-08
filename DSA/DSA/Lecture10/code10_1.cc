//! YOU HAVE BEEN GIVEN AN INTEGER ARRAY-LIST(ARR) OF SIZE N. WHERE N IS EQUAL TO [2M+1]. NOW, IN THE GIVEN ARRAY-LIST ,'M' NUMBERS ARE PRESENT TWICE AND ONE NUMBER IS PRESENT ONLY ONCE. YOU NEED TO FIND AND RETURN THAT NUMBER WHICH IS UNIQUE IN THE ARRAY-LIST.

#include<iostream>
using namespace std;

// This function finds the unique number in an array where 'M' numbers are present twice and one number is present only once.
int findUnique(int *arr, int size){
    // Initialize a variable 'ans' to store the unique number.
    int ans = 0;
    // Iterate through the array using a for loop.
    for (int i = 0; i<size; i++){
        // Use the XOR operation to find the unique number.
        // The XOR operation has the property that a ^ a = 0 and a ^ 0 = a.
        // So, when we XOR all numbers in the array, the numbers that appear twice will cancel out and the unique number will be left.
        ans = ans^arr[i];
    }
    // Return the unique number.
    return ans;
}

int main(){
    // Create an array 'arr' of size 3 with elements {1,2,2}.
    int arr[3]  = {1,2,2};
    
    // Print the unique number in the array.
    cout<<findUnique(arr,3);
    
    // Return 0 to indicate successful execution of the program.
    return 0;
}
//* CODING NINJAS : https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&leftPanelTabValue=SUBMISSION