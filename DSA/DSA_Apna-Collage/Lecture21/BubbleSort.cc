#include<iostream>
using namespace std;
                   
int main(){

    // Bubble Sort
    // Repeatedly swap two adjacent elements if they are in wrong order
    // n-1 iterations before we get our sorted array

    int n;
    cin>>n; // This line reads an integer value from the standard input and stores it in the variable n, which represents the size of the array.

    int arr[n]; // This line declares an array called arr, which has n elements, to store the elements of the array.
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; // This line reads an integer value from the standard input and stores it in the current element of the array.
    }
    
    int counter = 1; // This line initializes a variable called counter to 1, which is used to keep track of the number of passes through the array.
    while (counter<n-1) // This line starts a while loop that continues until counter is less than n-1.
    {
        for (int i = 0; i < n-counter; i++) // This line starts a for loop that iterates through the array, starting from the first element and going up to n-counter elements.
        {
            if (arr[i]>arr[i+1]) // This line checks if the current element is greater than the next element.
            {
                int temp = arr[i]; // This line declares a temporary variable called temp and assigns it the value of the current element.
                arr[i] = arr[i+1]; // This line swaps the current element with the next element.
                arr[i+1] = temp; // This line completes the swap by assigning the value of temp to the next element.
            }
            
        }
        counter++; // This line increments the counter by 1 after each pass through the array.
    }
    
    for (int i = 0; i < n; i++) // This line starts a for loop to output the sorted array.
    {
        cout<<arr[i]<<" "; // This line outputs the current element of the array, followed by a space.
    }
    cout<<endl; // This line outputs a newline character.

return 0; // This line returns 0 to indicate successful program execution.

}
// Time Complexity Analysis:
// The main function reads the size of the array and then iterates through the array to store elements, resulting in a time complexity of O(n) for these operations.
// The Bubble Sort algorithm iterates through the array n-1 times, and in each iteration, it iterates through the array again, resulting in a time complexity of O(n^2), where n is the size of the array.
// Therefore, the overall time complexity of the program is O(n^2).

// Space Complexity Analysis:
// The program uses a fixed amount of space to store the size of the array and the array itself, resulting in a space complexity of O(n), where n is the size of the array.