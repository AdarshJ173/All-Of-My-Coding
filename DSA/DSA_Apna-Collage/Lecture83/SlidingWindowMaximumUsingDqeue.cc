#include<bits/stdc++.h>
using namespace std;

// Main function
int main() {
    int n, k; // Declare variables to store the number of elements and window size
    cin >> n >> k; // Read input values for n and k

    vector<int> a(n); // Create a vector to store the input array
    for (auto &i : a) { // Iterate over the vector to read input values
        cin >> i; // Read each element of the array
    }

    deque<int> q; // Create a deque to store indices of the maximum elements in the window
    vector<int> ans; // Create a vector to store the maximum elements in each window

    // Process the first window
    for (int i = 0; i < k; i++) {
        // Remove indices of smaller elements from the back of the deque
        while (!q.empty() && a[q.back()] < a[i]) {
            q.pop_back();
        }
        q.push_back(i); // Add the current index to the deque
    }

    ans.push_back(a[q.front()]); // Add the maximum element of the first window to the answer vector

    // Process the remaining windows
    for (int i = k; i < n; i++) {
        // Remove the index of the element that is out of the current window
        if (q.front() == i - k) {
            q.pop_front();
        }
        // Remove indices of smaller elements from the back of the deque
        while (!q.empty() && a[q.back()] < a[i]) {
            q.pop_back();
        }
        q.push_back(i); // Add the current index to the deque
        ans.push_back(a[q.front()]); // Add the maximum element of the current window to the answer vector
    }

    // Print the maximum elements of each window
    for (auto i : ans) {
        cout << i << " ";
    }

    return 0;
}
