#include<iostream>
using namespace std;
                   
int main(){

    // Insertion Sort
    // Insert an element from unsorted array to its correct position in sorted array.
    
    int n;
    cin>>n; // This line reads an integer value from the standard input and stores it in the variable n, which represents the size of the array.

    int arr[n]; // This line declares an array called arr, which has n elements, to store the elements of the array.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; // This line reads an integer value from the standard input and stores it in the current element of the array.
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i]; // This line declares a variable called current and assigns it the value of the current element in the array.
        int j = i-1; // This line initializes a variable j to i-1, which is used to iterate through the array from the previous element to the first element.
        while (arr[j]>current && j>=0) // This line starts a while loop that continues as long as the element at index j is greater than the current element and j is not negative.
        {
            arr[j+1] = arr[j]; // This line shifts the element at index j to the right by one position.
            j--; // This line decrements j to move to the previous element.
        }
        arr[j+1] = current; // This line inserts the current element at its correct position in the sorted part of the array.
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "; // This line outputs the current element of the array, followed by a space.
    }
    
    cout<<endl; // This line outputs a newline character.

return 0; // This line returns 0 to indicate successful program execution.
}
// Time Complexity Analysis:
// The main function reads the size of the array and then iterates through the array to store elements, resulting in a time complexity of O(n) for these operations.
// The Insertion Sort algorithm iterates through the array, and in each iteration, it iterates through the array again to find the correct position, resulting in a time complexity of O(n^2), where n is the size of the array.
// Therefore, the overall time complexity of the program is O(n^2).

// Space Complexity Analysis:
// The program uses a fixed amount of space to store the size of the array and the array itself, resulting in a space complexity of O(n), where n is the size of the array.
