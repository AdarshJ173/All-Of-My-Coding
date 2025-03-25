#include <iostream>
#include <stack>
#include <cmath>
#include <algorithm>

// Use the standard namespace to avoid prefixing standard library elements
using namespace std;

/**
 * Checks if a valid mathematical expression contains redundant parentheses.
 * 
 * @param expression The input mathematical expression as a string.
 * @return True if the expression contains redundant parentheses, false otherwise.
 */
bool hasRedundantParentheses(const string& expression) {
    // Create a stack to store operators and parentheses
    stack<char> operatorStack;
    
    // Iterate over each character in the input expression
    for (int i = 0; i < expression.size(); i++) {
        char currentChar = expression[i];
        
        // If the current character is an operator, push it onto the stack
        if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
            operatorStack.push(currentChar);
        }
        
        // If the current character is an opening parenthesis, push it onto the stack
        else if (currentChar == '(') {
            operatorStack.push(currentChar);
        }
        
        // If the current character is a closing parenthesis
        else if (currentChar == ')') {
            // Check if the top of the stack is an opening parenthesis (i.e., redundant)
            if (operatorStack.top() == '(') {
                return true; // Redundant parentheses found
            }
            
            // Pop operators from the stack until we find the matching opening parenthesis
            while (operatorStack.top() == '+' || operatorStack.top() == '-' || operatorStack.top() == '*' || operatorStack.top() == '/') {
                operatorStack.pop();
            }
            operatorStack.pop(); // Remove the matching opening parenthesis
        }
    }
    
    // If we've iterated over the entire expression and haven't found redundant parentheses, return false
    return false;
}

int main() {
    string inputExpression;
    cin >> inputExpression;
    
    bool hasRedundant = hasRedundantParentheses(inputExpression);
    cout << hasRedundant << endl;
    
    return 0;
}

/*
Time Complexity Analysis:

The time complexity of this algorithm is O(n), where n is the length of the input expression. This is because we iterate over each character in the expression once, performing a constant amount of work for each character.

Space Complexity Analysis:

The space complexity of this algorithm is O(n), where n is the length of the input expression. This is because in the worst case, we may need to store every character in the expression on the stack (e.g., if the expression consists entirely of opening parentheses).
*/