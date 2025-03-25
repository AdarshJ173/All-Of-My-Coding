#include<iostream>
using namespace std;

int swap(int arr[],int i,int j){

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void WaveSort(int arr[], int n){

    for (int i = 1; i < n-1; i+=2)
    {
        if (arr[i]>arr[i-1])
        {
            swap(arr,i,i-1);
        }
        if (arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr,i,i+1);
        }
        
        
    }
    

}
                   
int main(){

    int arr[] = {1,3,4,7,5,6,2};

    WaveSort(arr,7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;
    
/*

Detailed Line-by-Line Explanation:

1. int swap(int arr[],int i,int j){

   This is a function that swaps two elements in an array.
   
   - int temp = arr[i];
     This line stores the value of the element at index i in a temporary variable.
     
   - arr[i] = arr[j];
     This line assigns the value of the element at index j to the element at index i.
     
   - arr[j] = temp;
     This line assigns the value of the temporary variable to the element at index j.
     
2. void WaveSort(int arr[], int n){

   This is a function that sorts an array in wave form.
   
   - for (int i = 1; i < n-1; i+=2)
     This line iterates over the elements of the array in steps of 2, starting from the second element.
     
   - if (arr[i]>arr[i-1])
     This line checks if the element at index i is greater than the element at index i-1.
     
   - swap(arr,i,i-1);
     This line calls the swap function to swap the elements if the condition is true.
     
   - if (arr[i]>arr[i+1] && i<=n-2)
     This line checks if the element at index i is greater than the element at index i+1 and if i is less than or equal to the second-to-last index.
     
   - swap(arr,i,i+1);
     This line calls the swap function to swap the elements if the condition is true.
     
3. int main(){

   This is the entry point of the program.
   
   - int arr[] = {1,3,4,7,5,6,2};
     This line declares an array of integers and initializes it with the values 1, 3, 4, 7, 5, 6, and 2.
     
   - WaveSort(arr,7);
     This line calls the WaveSort function to sort the array in wave form.
     
   - for (int i = 0; i < 7; i++)
     This line iterates over the elements of the array.
     
   - cout<<arr[i]<<" ";
     This line prints the value of the element at index i followed by a space.
     
4. return 0;
   This line returns 0 to indicate successful execution of the program.

Enhanced Readability:

1. int swap(int arr[], int i, int j)
2. void WaveSort(int arr[], int n)
3. int main()

Rename variables and functions to be self-explanatory and contextually appropriate.

Maintain Original Logic:
The original logic of the code is preserved.

Complexity Analysis:

The time complexity of the WaveSort function is O(n), where n is the number of elements in the array.
The space complexity of the WaveSort function is O(1), as it only requires constant space to store temporary variables.

Output:

The modified code with extensive comments and explanations.

Conclusion:
The time complexity of the WaveSort function is O(n) and the space complexity is O(1).

*/
}
