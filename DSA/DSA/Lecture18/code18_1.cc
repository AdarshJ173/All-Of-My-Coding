#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//! YOU ARE GIVEN 'N' INTEGERS IN THE FORM OF AN ARRAY 'ARR' .PRINT THE SORTED ARRAY USING THE INSERTION SORT.

void insertionSort(int n, vector<int>& arr) {
    // The function takes the size of the vector 'n' and the vector 'arr' as input parameters
    // 'arr' is passed by reference to modify the original vector

    for (int i = 1; i < n; i++) {
        // The outer loop iterates from the second element (index 1) to the last element
        // This is because the first element is considered already sorted

        int temp = arr[i];
        // Store the current element in a temporary variable 'temp'

        int j = i - 1;
        // Initialize 'j' with the index of the element before the current element

        for (; j >= 0; j--) {
            // The inner loop iterates backward from the element before the current element
            // It continues until 'j' becomes -1 (end of the sorted portion)

            if (arr[j] > temp) {
                // If the element at index 'j' is greater than 'temp'
                arr[j + 1] = arr[j];
                // Shift the element at index 'j' one position to the right
            } else {
                // If the element at index 'j' is less than or equal to 'temp'
                break;
                // Exit the inner loop as we have found the correct position for 'temp'
            }
        }

        arr[j + 1] = temp;
        // Insert 'temp' at the correct position in the sorted portion
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    // Prompt the user to enter the number of elements 'n'

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Prompt the user to enter the elements of the vector 'arr'

    cout << "Array before sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    // Print the array before sorting

    insertionSort(n, arr);
    // Call the 'insertionSort' function to sort the vector 'arr'

    cout << "Array after sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    // Print the sorted array

    return 0;
}

/*
/ First Principles Thinking:
The insertion sort algorithm is based on the idea of sorting a collection of elements by iteratively building a sorted portion of the collection, inserting each unsorted element into its correct position within the sorted portion.

We start with an empty "sorted" portion on the left side.
We consider the first element as already sorted and place it in the sorted portion.
We take the next element from the unsorted portion.
We insert this element into the correct position in the sorted portion:

Compare the element with the elements in the sorted portion, starting from the right.
Shift all the elements in the sorted portion that are greater than the element one position to the right.
Insert the element into the correct position in the sorted portion.


We repeat the above step for each remaining element in the unsorted portion.

The insertionSort function implements this algorithm by iterating through the vector, starting from the second element (index 1). For each element:

We take the current element as the "key" element and store it in a temporary variable temp.
We initialize a variable j to the index of the element before the key element.
We shift all the elements in the sorted portion that are greater than the key element one position to the right.

We compare the key element with the element at index j.
If the element at index j is greater than the key element, we shift it one position to the right.
We decrement j and continue the above step until we find the correct position for the key element.


We insert the key element into the correct position in the sorted portion.

The main function handles the input and output operations. It prompts the user to enter the number of elements n and the elements of the vector arr. It then prints the array before sorting, calls the insertionSort function to sort the vector, and finally prints the sorted array.
By following this first principles thinking approach and breaking down the algorithm into simple steps, we can understand and implement the insertion sort algorithm more easily.
*/

/*
Sure, I'll explain insertion sort in C++ using bullet points and an easy-to-understand approach based on first principles thinking.

First Principles Thinking:
- Imagine you have a pile of unsorted objects (e.g., cards, books, or numbers).
- You want to arrange these objects in a specific order (e.g., ascending or descending).

Insertion Sort Algorithm:
- We start with an empty "sorted" area on the left side.
- We consider the first object as already sorted and place it in the sorted area.
- We take the next object from the unsorted area.
- We insert this object into the correct position in the sorted area:
  - Compare the object with the elements in the sorted area, starting from the right.
  - Shift all the elements in the sorted area that are greater than the object one position to the right.
  - Insert the object into the correct position in the sorted area.
- We repeat the above step for each remaining object in the unsorted area.

Implementation in C++:
- We use a vector (or an array) to store the elements.
- We iterate through the vector, starting from the second element (index 1).
- For each element:
  - We take the current element as the "key" element.
  - We initialize a variable `j` to the index of the element before the key element.
  - We shift all the elements in the sorted portion that are greater than the key element one position to the right:
    - We compare the key element with the element at index `j`.
    - If the element at index `j` is greater than the key element, we shift it one position to the right.
    - We decrement `j` and continue the above step until we find the correct position for the key element.
  - We insert the key element into the correct position in the sorted portion.

Bullet Points:
- Consider the first element as already sorted.
- For each remaining element:
  - Take the current element as the "key" element.
  - Shift all elements in the sorted portion that are greater than the key one position to the right.
  - Insert the key element into the correct position in the sorted portion.
- Repeat the above steps until all elements are sorted.
- Time complexity:
  - Best case: O(n) (when the input is already sorted)
  - Average case: O(n^2)
  - Worst case: O(n^2)
- Space complexity: O(1) (in-place sorting algorithm)
- Suitable for small datasets or partially sorted data.

By following this first principles thinking approach and breaking down the algorithm into simple steps, you can understand and implement the insertion sort algorithm in C++ more easily.
*/