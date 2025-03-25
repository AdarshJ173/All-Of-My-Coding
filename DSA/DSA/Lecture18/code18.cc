/// INSERTION SORT

/*
Insertion sort is a simple sorting algorithm that works by iterating through an array or list, taking one element at a time, and inserting it into its correct position in the sorted portion of the data structure. It works in a similar way to how we sort playing cards in our hands, by taking one card at a time and placing it in the correct position among the already sorted cards.
Here's how the insertion sort algorithm works, step by step:

Consider the first element as already sorted.
For each remaining element:
a. Take the current element.
b. Compare it with the elements in the sorted portion of the array, starting from the right.
c. Shift all the elements in the sorted portion that are greater than the current element one position to the right.
d. Insert the current element into the correct position in the sorted portion.

Let's understand it with a simple example:
Suppose we have an array arr = {5, 2, 9, 1, 5}.
Initially, the first element 5 is considered sorted.

5 | 2, 9, 1, 5 (unsorted)
2, 5 | 9, 1, 5 (unsorted)
2, 5, 9 | 1, 5 (unsorted)
1, 2, 5, 9 | 5 (unsorted)
1, 2, 5, 5, 9 (sorted)
*/

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5};
    
    cout << "Array before sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    insertionSort(arr);
    
    cout << "Array after sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Array before sorting: 5 2 9 1 5 
Array after sorting: 1 2 5 5 9

In the example implementation above, we iterate through the array starting from the second element (index 1). For each element, we take it as the key and shift all the elements in the sorted portion that are greater than the key one position to the right. Finally, we insert the key at the correct position.
The time complexity of insertion sort is O(n^2) in the average and worst cases, where n is the size of the input array or list. However, it has a time complexity of O(n) in the best case when the input is already sorted. Insertion sort is efficient for small datasets and is also useful for sorting partially sorted data. It is an in-place sorting algorithm, meaning it does not require additional storage space beyond what is needed for the input data.
*/































