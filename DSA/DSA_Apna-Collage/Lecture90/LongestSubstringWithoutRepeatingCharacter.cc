#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a string s, find the length of the longest substring without repeating characters.

Algorithm:
We use a sliding window approach with a dictionary to keep track of character positions.
The sliding window expands as we encounter new characters and contracts when we find repeats.
We use a vector as a dictionary to store the last seen position of each character.
The maximum length of the window at any point gives us our answer.
*/

int findLongestUniqueSubstring(const string& inputString) {
    // Dictionary to store the last seen position of each character
    vector<int> lastSeenPosition(256, -1);  // Assuming ASCII character set

    int maxLength = 0;  // Length of the longest substring found
    int windowStart = -1;  // Start of the current window (exclusive)

    // Iterate through the string
    for (int currentPosition = 0; currentPosition < inputString.size(); currentPosition++) {
        char currentChar = inputString[currentPosition];

        // If we've seen this character after our window start, update window start
        if (lastSeenPosition[currentChar] > windowStart) {
            windowStart = lastSeenPosition[currentChar];
        }

        // Update the last seen position of the current character
        lastSeenPosition[currentChar] = currentPosition;

        // Update maxLength if current window is longer
        maxLength = max(maxLength, currentPosition - windowStart);
    }

    return maxLength;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    int result = findLongestUniqueSubstring(inputString);
    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}

/*
Time Complexity: O(n), where n is the length of the input string.

We iterate through the string once.
All operations inside the loop (vector access, comparisons, updates) are O(1).

Space Complexity: O(k), where k is the size of the character set.

We use a vector of fixed size (256 for ASCII) to store character positions.
The space used doesn't grow with the input size beyond this fixed amount.
*/ 