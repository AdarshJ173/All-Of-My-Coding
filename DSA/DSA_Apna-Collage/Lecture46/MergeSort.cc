#include<iostream>
using namespace std;

// Function to merge two sorted subarrays into a single sorted subarray
void merge(int arr[], int left, int mid, int right) {
    // Calculate the sizes of the two subarrays
    int sizeOfLeftSubarray = mid - left + 1;
    int sizeOfRightSubarray = right - mid;

    // Create temporary arrays to hold the left and right subarrays
    int leftSubarray[sizeOfLeftSubarray];
    int rightSubarray[sizeOfRightSubarray];

    // Copy elements from the original array to the temporary arrays
    for (int i = 0; i < sizeOfLeftSubarray; i++) {
        leftSubarray[i] = arr[left + i];
    }
    for (int i = 0; i < sizeOfRightSubarray; i++) {
        rightSubarray[i] = arr[mid + 1 + i];
    }

    // Initialize indices for the left and right subarrays and the original array
    int leftIndex = 0;
    int rightIndex = 0;
    int originalArrayIndex = left;

    // Merge the two subarrays into the original array
    while (leftIndex < sizeOfLeftSubarray && rightIndex < sizeOfRightSubarray) {
        if (leftSubarray[leftIndex] < rightSubarray[rightIndex]) {
            arr[originalArrayIndex] = leftSubarray[leftIndex];
            leftIndex++;
        } else {
            arr[originalArrayIndex] = rightSubarray[rightIndex];
            rightIndex++;
        }
        originalArrayIndex++;
    }

    // Copy any remaining elements from the left subarray
    while (leftIndex < sizeOfLeftSubarray) {
        arr[originalArrayIndex] = leftSubarray[leftIndex];
        leftIndex++;
        originalArrayIndex++;
    }

    // Copy any remaining elements from the right subarray
    while (rightIndex < sizeOfRightSubarray) {
        arr[originalArrayIndex] = rightSubarray[rightIndex];
        rightIndex++;
        originalArrayIndex++;
    }
}

// Function to implement Merge Sort
void MergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle index to divide the array into two halves
        int mid = left + (right - left) / 2;

        // Recursively sort the left and right halves
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, sizeOfArray - 1);

    // Print the sorted array
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/* Recurrence:
T(n) = 2T(n/2)+n
T(n) = 2T(n/2)+n
T(n/2) = 2T(n/4)+n/2
T(n/4) = 2T(n/8n/4
.
.
T(1) = 1

levels:
n/2^k = 1
n = 2^k
k = Log n

*/

// Time Complexity: O(n log n)
// Space Complexity: O(n)


/* 1. #include<iostream>
Explanation: This line tells the compiler to include the input-output stream library, iostream, which allows the program to perform input and output operations (like printing text to the screen).
2. using namespace std;
Explanation: This line allows the program to use the standard namespace. Namespaces are a way to group named entities like classes, objects, and functions. The std namespace contains all the standard C++ library functions and objects, like cout for printing text. By using this line, we don't need to write std::cout, we can simply write cout.
3. void merge(int arr[], int left, int mid, int right)
Explanation: This line defines a function named merge that takes four parameters:
int arr[]: An array of integers.
int left: The starting index of the subarray.
int mid: The middle index that divides the subarrays.
int right: The ending index of the subarray.
Return type void: The function doesn't return a value.
4. int sizeOfLeftSubarray = mid - left + 1;
Explanation: This line calculates the size of the left subarray.
mid - left gives the number of elements between left and mid, inclusive of both.
+ 1 is added because array indices start from 0.
5. int sizeOfRightSubarray = right - mid;
Explanation: This line calculates the size of the right subarray.
right - mid gives the number of elements from mid + 1 to right.
6. int leftSubarray[sizeOfLeftSubarray];
Explanation: This line creates an array named leftSubarray with a size equal to the size of the left subarray.
7. int rightSubarray[sizeOfRightSubarray];
Explanation: This line creates an array named rightSubarray with a size equal to the size of the right subarray.
8. for (int i = 0; i < sizeOfLeftSubarray; i++) { leftSubarray[i] = arr[left + i]; }
Explanation: This loop copies the elements from the original array (arr) into the leftSubarray.
i = 0: Start from the first element of the left subarray.
i < sizeOfLeftSubarray: Continue until all elements of the left subarray are copied.
left + i: Access the correct index in the original array.
9. for (int i = 0; i < sizeOfRightSubarray; i++) { rightSubarray[i] = arr[mid + 1 + i]; }
Explanation: This loop copies the elements from the original array (arr) into the rightSubarray.
mid + 1 + i: Access the correct index in the original array for the right subarray.
10. int leftIndex = 0; int rightIndex = 0; int originalArrayIndex = left;
Explanation: These lines initialize three variables:
leftIndex = 0: To track the current index in the left subarray.
rightIndex = 0: To track the current index in the right subarray.
originalArrayIndex = left: To track the current index in the original array where the merged elements will be placed.
11. while (leftIndex < sizeOfLeftSubarray && rightIndex < sizeOfRightSubarray)
Explanation: This while loop runs as long as there are elements left to compare in both the left and right subarrays.
12. if (leftSubarray[leftIndex] < rightSubarray[rightIndex])
Explanation: This if condition checks if the current element in the left subarray is smaller than the current element in the right subarray.
13. arr[originalArrayIndex] = leftSubarray[leftIndex]; leftIndex++;
Explanation: If the condition in the if statement is true, the smaller element from the left subarray is placed into the original array, and leftIndex is incremented to move to the next element in the left subarray.
14. else { arr[originalArrayIndex] = rightSubarray[rightIndex]; rightIndex++; }
Explanation: If the condition in the if statement is false, the smaller element from the right subarray is placed into the original array, and rightIndex is incremented to move to the next element in the right subarray.
15. originalArrayIndex++;
Explanation: Regardless of which element was placed into the original array, this line increments originalArrayIndex to move to the next position in the original array.
16. while (leftIndex < sizeOfLeftSubarray)
Explanation: This while loop copies any remaining elements from the left subarray into the original array after the main merging process is complete.
17. while (rightIndex < sizeOfRightSubarray)
Explanation: This while loop copies any remaining elements from the right subarray into the original array after the main merging process is complete.
18. void MergeSort(int arr[], int left, int right)
Explanation: This line defines the MergeSort function, which will sort the array using the merge sort algorithm. It takes three parameters:
int arr[]: The array to be sorted.
int left: The starting index of the subarray.
int right: The ending index of the subarray.
19. if (left < right)
Explanation: This if condition checks if the subarray has more than one element. If left is not less than right, it means the subarray has one or zero elements, which are already sorted.
20. int mid = left + (right - left) / 2;
Explanation: This line calculates the middle index of the subarray to divide it into two halves. The formula ensures that the calculation avoids overflow in some cases.
21. MergeSort(arr, left, mid);
Explanation: This line recursively sorts the left half of the subarray.
22. MergeSort(arr, mid + 1, right);
Explanation: This line recursively sorts the right half of the subarray.
23. merge(arr, left, mid, right);
Explanation: After sorting both halves, this line merges them into a single sorted subarray using the merge function.
24. int main()
Explanation: This line defines the main function, the entry point of the program. It returns an integer value.
25. int arr[] = {5, 4, 3, 2, 1};
Explanation: This line declares and initializes an array named arr with 5 elements: 5, 4, 3, 2, and 1.
26. int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
Explanation: This line calculates the size of the array arr by dividing the total memory size of the array by the memory size of a single element.
27. MergeSort(arr, 0, sizeOfArray - 1);
Explanation: This line calls the MergeSort function to sort the entire array. It passes the array, the starting index 0, and the ending index sizeOfArray - 1.
28. for (int i = 0; i < sizeOfArray; i++) { cout << arr[i] << " "; }
Explanation: This loop prints the sorted array elements to the console. It iterates through each element of the array and prints it followed by a space.
29. cout << endl;
Explanation: This line prints a newline character, moving the cursor to the next line in the console.
30. return 0;
Explanation: This line returns 0 to the operating system, indicating that the program has executed successfully.

*/

/*
#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){

    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid+1+i];
    }
    
    int i = 0;
    int j = 0;
    int k = l;

    while (i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
        
    }
    
    while (i<n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        arr[k] = b[j];
        k++;
        i++;
    }
  
}

void MergeSort(int arr[],int l,int r){

    if (l<r)
    {
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
    

}
                   
int main(){

    int arr[] = {5,4,3,2,1};
    MergeSort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
*/