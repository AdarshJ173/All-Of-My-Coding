#include<iostream>
// This line is a preprocessor directive, it tells the compiler to include the iostream standard library, 
// which allows us to use input/output functions such as cin and cout.

using namespace std;
// This line is a using directive, it tells the compiler to use the std namespace, 
// which contains the standard library functions and objects, 
// allowing us to use them without qualifying them with std::.

int main(){
// This line declares a function called main, which is the entry point of the program, 
// it returns an integer value and takes no arguments.

    // sorting in arrays

    // ordering of the element in the array in ascending order

    //* Selection Sort
    //* Find the minimum element in unsorted array and swap it with elements at beginning.
    // These lines are comments, they're used to describe the algorithm used in the code.

    int n;
    // This line declares a variable called n, which is an integer, 
    // it's used to store the size of the array.

    cin>>n;
    // This line reads an integer value from the standard input and stores it in the variable n.

    int arr[n];
    // This line declares an array called arr, which has n elements, 
    // it's used to store the elements of the array.

    for (int i = 0; i < n; i++)
    {
        // This line starts a for loop, which is used to iterate over the array.
        // The loop variable is i, which is an integer, 
        // it's initialized to 0, and the loop continues as long as i is less than n.

        cin>>arr[i];
        // This line reads an integer value from the standard input and stores it in the current element of the array.
    }
    
    for (int i = 0; i < n-1; i++)
    {
        // This line starts a for loop, which is used to implement the Selection Sort algorithm.
        // The loop variable is i, which is an integer, 
        // it's initialized to 0, and the loop continues as long as i is less than n-1.

        for (int j = i+1; j < n; j++)
        {
            // This line starts a nested for loop, which is used to find the minimum element in the unsorted part of the array.
            // The loop variable is j, which is an integer, 
            // it's initialized to i+1, and the loop continues as long as j is less than n.

            if (arr[j]<arr[i])
            {
                // This line checks if the current element is smaller than the minimum element found so far.
                // If it is, then the minimum element is updated.

                int temp = arr[j];
                // This line declares a temporary variable called temp, which is an integer, 
                // it's used to swap the elements.

                arr[j] = arr[i];
                // This line swaps the current element with the minimum element.

                arr[i] = temp;
                // This line completes the swap.
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        // This line starts a for loop, which is used to output the sorted array.
        // The loop variable is i, which is an integer, 
        // it's initialized to 0, and the loop continues as long as i is less than n.

        cout<<arr[i]<<" ";
        // This line outputs the current element of the array, followed by a space.
    }
    cout<<endl;
    // This line outputs a newline character.

}
// Time Complexity Analysis:
// The main function reads the size of the array and then iterates through the array to store elements, resulting in a time complexity of O(n) for these operations.
// The Selection Sort algorithm iterates through the array twice, resulting in a time complexity of O(n^2), where n is the size of the array.
// Therefore, the overall time complexity of the program is O(n^2).

// Space Complexity Analysis:
// The program uses a fixed amount of space to store the size of the array and the array itself, resulting in a space complexity of O(n), where n is the size of the array.