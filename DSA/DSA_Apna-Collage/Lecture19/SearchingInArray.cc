#include<iostream>
using namespace std;

// This function performs a linear search in an array to find the index of a given key.
int linearSearch(int arr[], int n, int key){
    // This loop iterates through the array from the first element to the last element.
    for (int i = 0; i < n; i++)
    {
        // This line checks if the current element in the array is equal to the key we are searching for.
        if (arr[i] == key)
        {
            // If the key is found, the function returns the index of the key in the array.
            return i;
        }
        
    }
    // If the key is not found in the array, the function returns -1 to indicate that the key is not present.
    return -1;
}
                   
int main(){

    // This is a comment explaining the purpose of the program.
    //* linear search
    // {12,18,20,42,8,10}
    // key = 8 

    // This line declares an integer variable 'n' to store the size of the array.
    int n;
    // This line reads an integer from the input and stores it in 'n'.
    cin>>n;

    // This line declares an array 'arr' of size 'n' to store integers.
    int arr[n];
    // This loop iterates 'n' times to read 'n' integers from the input and store them in the array 'arr'.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // This line declares an integer variable 'key' to store the key to be searched in the array.
    int key;
    // This line reads an integer from the input and stores it in 'key'.
    cin>>key;

    // This line calls the linearSearch function with the array, its size, and the key as arguments, and prints the result.
    cout<<linearSearch(arr,n,key)<<endl;

    // This line returns 0 to indicate the successful execution of the program.
    return 0;
}

// Time Complexity Analysis:
// The linearSearch function iterates through the array once, resulting in a time complexity of O(n), where n is the size of the array.
// The main function reads the size of the array and the key, and then iterates through the array to store elements, resulting in a time complexity of     O(n) for these operations.
// Therefore, the overall time complexity of the program is O(n).

// Space Complexity Analysis:
// The program uses a fixed amount of space to store the size of the array, the key, and the array itself, resulting in a space complexity of O(n), where n is the size of the array.
