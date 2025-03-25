#include <bits/stdc++.h>
using namespace std;

// Function to determine the precedence of an operator
int getPrecedence(char operatorChar) {
    // Define the precedence of operators
    if (operatorChar == '^') {
        return 3; // Highest precedence
    } else if (operatorChar == '/' || operatorChar == '*') {
        return 2; // Medium precedence
    } else if (operatorChar == '-' || operatorChar == '+') {
        return 1; // Lowest precedence
    } else {
        return -1; // Not an operator
    }
}

// Function to convert infix notation to prefix notation
string infixToPrefix(string inputString) {
    // Reverse the input string to process it from right to left
    reverse(inputString.begin(), inputString.end());

    // Create a stack to store operators
    stack<char> operatorStack;

    // Create a string to store the prefix notation
    string prefixNotation;

    // Iterate through the reversed input string
    for (int i = 0; i < inputString.length(); i++) {
        // If the character is an operand (letter), add it to the prefix notation
        if ((inputString[i] >= 'a' && inputString[i] <= 'z') || (inputString[i] >= 'A' && inputString[i] <= 'Z')) {
            prefixNotation += inputString[i];
        }
        // If the character is a closing parenthesis, push it to the operator stack
        else if (inputString[i] == ')') {
            operatorStack.push(inputString[i]);
        }
        // If the character is an opening parenthesis, pop operators from the stack and add them to the prefix notation until a closing parenthesis is found
        else if (inputString[i] == '(') {
            while (!operatorStack.empty() && operatorStack.top() != ')') {
                prefixNotation += operatorStack.top();
                operatorStack.pop();
            }
            if (!operatorStack.empty()) {
                operatorStack.pop(); // Remove the closing parenthesis
            }
        }
        // If the character is an operator, pop operators from the stack and add them to the prefix notation until an operator with lower precedence is found
        else {
            while (!operatorStack.empty() && getPrecedence(operatorStack.top()) >= getPrecedence(inputString[i])) {
                prefixNotation += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(inputString[i]);
        }
    }

    // Pop any remaining operators from the stack and add them to the prefix notation
    while (!operatorStack.empty()) {
        prefixNotation += operatorStack.top();
        operatorStack.pop();
    }

    // Reverse the prefix notation to get the correct order
    reverse(prefixNotation.begin(), prefixNotation.end());

    return prefixNotation;
}

int main() {
    // Test the infixToPrefix function
    cout << infixToPrefix("(a-b/c) * (a/k-l)") << endl;

    return 0;
}

/*
Complexity Analysis:

*Time complexity: 
O(n), where n is the length of the input string. This is because we iterate through the input string once and perform a constant amount of work for each character.

*Space complexity: 
O(n), where n is the length of the input string. This is because we use a stack to store operators, which can grow up to the length of the input string in the worst case.
*/