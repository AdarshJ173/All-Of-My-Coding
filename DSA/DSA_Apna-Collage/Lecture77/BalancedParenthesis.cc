#include<iostream> // Include the iostream library for input/output operations
#include<stack> // Include the stack library for stack operations
#include<algorithm> // Include the algorithm library for general-purpose algorithms
using namespace std; // Use the standard namespace for convenience

// Function to check if a string is valid (balanced)
bool isValid(string s) {
    // Get the size of the input string
    int n = s.size();

    // Create a stack to store opening brackets
    stack<char> st;

    // Initialize a flag to indicate if the string is valid
    bool ans = true;

    // Iterate through each character in the string
    for (int i = 0; i < n; i++) {
        // If the character is an opening bracket, push it onto the stack
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            st.push(s[i]);
        }
        // If the character is a closing bracket, check if the stack is empty or the top of the stack doesn't match
        else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                // If the stack is not empty and the top matches, pop the opening bracket from the stack
                st.pop();
            } else {
                // If the stack is empty or the top doesn't match, set the flag to false and break the loop
                ans = false;
                break;
            }
        }

        // Repeat the same logic for other closing brackets
        else if (s[i] == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            } else {
                ans = false;
                break;
            }
        }

        else if (s[i] == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            } else {
                ans = false;
                break;
            }
        }
    }

    // After iterating through the entire string, check if the stack is empty
    if (!st.empty()) {
        // If the stack is not empty, it means there are unmatched opening brackets, so return false
        return false;
    }

    // Return the flag indicating if the string is valid
    return ans;
}

int main() {
    // Test the function with a sample string
    string s = "{[()]}";

    // Check if the string is valid and print the result
    if (isValid(s)) {
        cout << "Valid String" << endl;
    } else {
        cout << "Invalid String" << endl;
    }

    return 0;
}

/*
*Time Complexity Analysis:

The time complexity of the isValid function is O(n), where n is the length of the input string. This is because we iterate through each character in the string once, and each operation (pushing and popping from the stack, checking the top of the stack) takes constant time.

Space Complexity Analysis:

The space complexity of the isValid function is O(n), where n is the length of the input string. This is because in the worst case, we may need to store all opening brackets in the stack, which can grow up to the length of the input string.

Note that the original logic of the code has been maintained, and only comments and variable names have been modified to enhance readability.
*/