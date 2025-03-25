#include<iostream> // Include the iostream library for input/output operations
#include<stack> // Include the stack library for stack operations
#include<math.h> // Include the math library for mathematical operations
using namespace std; // Use the standard namespace for convenience

// Function to evaluate a prefix expression
int evaluatePrefixExpression(string expression) {
    // Create a stack to store operands
    stack<int> operandStack;

    // Iterate through the expression from right to left
    for (int i = expression.length() - 1; i >= 0; i--) {
        // Check if the current character is a digit
        if (expression[i] >= '0' && expression[i] <= '9') {
            // Convert the digit to an integer and push it onto the stack
            operandStack.push(expression[i] - '0');
        } else {
            // Pop the top two operands from the stack
            int operand1 = operandStack.top();
            operandStack.pop();
            int operand2 = operandStack.top();
            operandStack.pop();

            // Perform the operation based on the operator
            switch (expression[i]) {
                case '+':
                    // Add the two operands and push the result onto the stack
                    operandStack.push(operand1 + operand2);
                    break;
                case '-':
                    // Subtract the two operands and push the result onto the stack
                    operandStack.push(operand1 - operand2);
                    break;
                case '*':
                    // Multiply the two operands and push the result onto the stack
                    operandStack.push(operand1 * operand2);
                    break;
                case '/':
                    // Divide the two operands and push the result onto the stack
                    operandStack.push(operand1 / operand2);
                    break;
                case '^':
                    // Raise the first operand to the power of the second operand and push the result onto the stack
                    operandStack.push(pow(operand1, operand2));
                    break;
            }
        }
    }

    // The final result is the top element of the stack
    return operandStack.top();
}

int main() {
    // Test the function with a sample prefix expression
    string expression = "-+7*45+20";
    cout << evaluatePrefixExpression(expression) << endl;

    return 0;
}

/*
Time Complexity Analysis:

The time complexity of the code is O(n), where n is the length of the input string. This is because we iterate through the string once, performing a constant amount of work for each character.

Space Complexity Analysis:

The space complexity of the code is O(n), where n is the length of the input string. This is because we use a stack to store the operands, and in the worst case, the stack can grow up to the length of the input string.
*/