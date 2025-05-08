#include<iostream>
#include<queue>
using namespace std;

// Function to find the sum of the maximum and minimum elements in all subarrays of size k
int solve(int *arr, int n, int k) {

    deque<int> maxi(k); // Deque to store indices of elements in descending order
    deque<int> mini(k); // Deque to store indices of elements in ascending order

    // Adding elements of the first window of size k
    for(int i=0; i<k; i++) {

        // Removing elements from the back of the deque if they are less than or equal to the current element
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        // Removing elements from the back of the deque if they are greater than or equal to the current element
        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        // Adding the current index to both deques
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;

    // Calculating the sum of the maximum and minimum elements of the first window
    ans += arr[maxi.front()] + arr[mini.front()];

    // Processing the remaining windows
    for(int i=k; i<n; i++) {

        // Moving to the next window

        // Removing elements from the front of the deque if they are outside the current window
        while(!maxi.empty() && i - maxi.front() >= k) {
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >= k) {
            mini.pop_front();
        }

        // Adding elements to the deques similar to the first window
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);    

        // Adding the sum of the maximum and minimum elements of the current window to the answer
        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main() {

    // Input array and window size
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    // Calling the solve function and printing the result
    cout << solve(arr, 7, k) << endl;

    return 0;
}