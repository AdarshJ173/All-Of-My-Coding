#include<iostream>
#include<stack>
using namespace std;

    //*  <operator> <operand> <operand>

    /*

    4*2+3       +*423
    5-6/3       -5/63
    
    */


    /*
    What is Prefix Expression/Polish Notation?

    Prefix expression, also known as Polish notation, is a notation for expressing arithmetic and logical operations in which the operator symbol is written before its arguments. This notation was introduced by the Polish mathematician Jan Łukasiewicz in the 1920s.

    Example:

    In infix notation, the expression 2 + 3 * 4 would be written as (2 + (3 * 4)). In prefix notation, the same expression would be written as + 2 * 3 4.

    How does it work?

    In prefix notation, the operator is written first, followed by its arguments. This means that the operator has a higher precedence than its arguments. To evaluate a prefix expression, we need to follow these rules:

    Start from the left and move to the right.
    When an operator is encountered, evaluate the expression by taking the required number of arguments from the right.
    Replace the operator and its arguments with the result of the operation.
    Repeat steps 1-3 until the entire expression is evaluated.
    Example Code in C++:

    Here's an example code in C++ that evaluates a prefix expression:
    */

#include<iostream>
using namespace std;

// Function to evaluate a prefix expression
int evaluatePrefixExpression(string expression) {
    stack<int> operandStack;

    for (int i = expression.size() - 1; i >= 0; i--) {
        // If the character is a digit, push it to the operand stack
        if (isdigit(expression[i])) {
            operandStack.push(expression[i] - '0');
        }
        // If the character is an operator, pop the required number of operands and evaluate the expression
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            if (expression[i] == '+') {
                result = operand1 + operand2;
            } else if (expression[i] == '-') {
                result = operand1 - operand2;
            } else if (expression[i] == '*') {
                result = operand1 * operand2;
            } else if (expression[i] == '/') {
                result = operand1 / operand2;
            }

            operandStack.push(result);
        }
    }

    // The final result is the only element left in the operand stack
    return operandStack.top();
}

int main() {
    string expression = "+ 2 * 3 4";
    int result = evaluatePrefixExpression(expression);
    cout << "Result: " << result << endl;
    return 0;
}

/*
Line-by-Line Explanation:

#include<iostream>: This line includes the iostream header file, which provides input-output functions such as cout.
using namespace std;: This line brings the standard namespace into scope, allowing us to use standard library functions without qualifying them with std::.
int evaluatePrefixExpression(string expression) { ... }: This function takes a string representing a prefix expression as input and returns the evaluated result as an integer.
stack<int> operandStack;: This line declares a stack to store the operands.
for (int i = expression.size() - 1; i >= 0; i--) { ... }: This loop iterates over the input string from right to left.
if (isdigit(expression[i])) { ... }: This block checks if the current character is a digit. If it is, it pushes the digit to the operand stack.
else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') { ... }: This block checks if the current character is an operator. If it is, it pops the required number of operands from the stack, evaluates the expression, and pushes the result back to the stack.
int result;: This line declares a variable to store the result of the operation.
if (expression[i] == '+') { ... } else if (expression[i] == '-') { ... } else if (expression[i] == '*') { ... } else if (expression[i] == '/') { ... }: This block evaluates the expression based on the operator.
operandStack.push(result);: This line pushes the result back to the operand stack.
return operandStack.top();: This line returns the final result, which is the only element left in the operand stack.
int main() { ... }: This is the main function, which calls the `evaluatePrefixExpression
*/