#include<iostream> // Include the iostream library for input-output operations
#include<stack> // Include the stack library for using the stack data structure
using namespace std; // Use the standard namespace for convenience

// Function to reverse a sentence
void reverseSentence(string s) {
    // Create a stack to store the words of the sentence
    stack<string> st;

    // Initialize an empty string to store each word
    string word = "";

    // Iterate through the characters of the sentence
    for (int i = 0; i < s.length(); i++) {
        // While the current character is not a space and we haven't reached the end of the sentence
        while (s[i] != ' ' && i < s.length()) {
            // Add the character to the current word
            word += s[i];
            i++;
        }
        // Push the current word onto the stack
        st.push(word);
        // Reset the word for the next iteration
        word = "";
    }

    // While the stack is not empty
    while (!st.empty()) {
        // Print the top word on the stack followed by a space
        cout << st.top() << " ";
        // Pop the top word from the stack
        st.pop();
    }
    // Print a newline character
    cout << endl;
}

int main() {
    // Initialize a string with the sentence to be reversed
    string s = "Hey I'm AAJ";

    // Call the reverseSentence function with the input sentence
    reverseSentence(s);

    // Return 0 to indicate successful execution
    return 0;
}

/*
/Time Complexity Analysis:

The time complexity of the reverseSentence function can be broken down into two parts:

The first loop iterates through the characters of the sentence, which takes O(n) time, where n is the length of the sentence.
The second loop iterates through the words of the sentence, which takes O(m) time, where m is the number of words in the sentence.
Since m is typically much smaller than n, the overall time complexity of the function is O(n).

/Space Complexity Analysis:

The space complexity of the reverseSentence function is O(m), where m is the number of words in the sentence. This is because we use a stack to store the words of the sentence, and the maximum size of the stack is equal to the number of words in the sentence.
*/