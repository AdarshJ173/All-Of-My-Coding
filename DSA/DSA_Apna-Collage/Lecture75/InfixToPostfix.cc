#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

// Function to determine the precedence of an operator
int getPrecedence(char operatorChar) {
    // Highest precedence for exponentiation
    if (operatorChar == '^') {
        return 3;
    }
    // Medium precedence for multiplication and division
    else if (operatorChar == '*' || operatorChar == '/') {
        return 2;
    }
    // Lowest precedence for addition and subtraction
    else if (operatorChar == '+' || operatorChar == '-') {
        return 1;
    }
    // Default return value for non-operator characters
    else {
        return -1;
    }
}

// Function to convert infix notation to postfix notation
string infixToPostfixNotation(string infixExpression) {
    stack<char> operatorStack;
    string postfixExpression;

    // Iterate through each character in the infix expression
    for (int i = 0; i < infixExpression.length(); i++) {
        // If the character is an operand (a-z or A-Z), add it to the postfix expression
        if ((infixExpression[i] >= 'a' && infixExpression[i] <= 'z') || (infixExpression[i] >= 'A' && infixExpression[i] <= 'Z')) {
            postfixExpression += infixExpression[i];
        }
        // If the character is an opening parenthesis, push it onto the operator stack
        else if (infixExpression[i] == '(') {
            operatorStack.push(infixExpression[i]);
        }
        // If the character is a closing parenthesis, pop operators from the stack and add them to the postfix expression until an opening parenthesis is found
        else if (infixExpression[i] == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfixExpression += operatorStack.top();
                operatorStack.pop();
            }
            // Remove the opening parenthesis from the stack
            if (!operatorStack.empty()) {
                operatorStack.pop();
            }
        }
        // If the character is an operator, pop operators from the stack with higher or equal precedence and add them to the postfix expression, then push the current operator onto the stack
        else {
            while (!operatorStack.empty() && getPrecedence(operatorStack.top()) >= getPrecedence(infixExpression[i])) {
                postfixExpression += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(infixExpression[i]);
        }
    }

    // Pop any remaining operators from the stack and add them to the postfix expression
    while (!operatorStack.empty()) {
        postfixExpression += operatorStack.top();
        operatorStack.pop();
    }

    return postfixExpression;
}

int main() {
    // Test the infixToPostfixNotation function
    cout << infixToPostfixNotation("(a-b/c)*(a/k-l)") << endl;
    return 0;
}

/*
!Complexity Analysis:

*Time complexity: 
O(n), where n is the length of the infix expression. This is because we iterate through each character in the infix expression once.

*Space complexity:
O(n), where n is the length of the infix expression. This is because in the worst case, we might need to push all characters onto the operator stack.
Explanation:

The code converts an infix notation expression to postfix notation using a stack. The getPrecedence function determines the precedence of an operator, and the infixToPostfixNotation function iterates through the infix expression, pushing operators onto the stack and popping them off to create the postfix expression.

The code maintains the original logic and functionality, with added comments and explanations to enhance readability. The variable and function names have been renamed to be more descriptive and contextually appropriate.
*/