// Include the iostream header file to enable input-output operations
#include<iostream>

// Include the stack header file to utilize the stack data structure
#include<stack>

// Use the standard namespace to avoid prefixing standard library elements with "std::"
using namespace std;

//* <operand> <operand> <operator>

/*

4*2+3       42*3+
5-6/3       563/-

*/

/*
 * Postfix Expression/Reverse Polish Notation (RPN) is a mathematical notation in which operators follow their operands.
 * For example, the infix expression "A + B" would be written in RPN as "A B +".
 */

/*
 * RPN has several advantages, including:
 * 1. Easy to parse and evaluate
 * 2. No need for parentheses to group operators
 * 3. Can be evaluated from left to right
 */

/*
 * To evaluate a postfix expression, we can use a stack data structure.
 * The basic idea is to iterate through the expression from left to right, pushing operands onto the stack and performing operations when an operator is encountered.
 */

/*
 * Here's an example of how to evaluate the RPN expression "3 4 +" :
 * 1. Push 3 onto the stack
 * 2. Push 4 onto the stack
 * 3. Encounter the "+" operator, so pop the top two elements (4 and 3) from the stack, add them, and push the result (7) back onto the stack
 */

/*
 * Now, let's analyze the time and space complexity of evaluating a postfix expression using a stack:
 */

/*
 * Time Complexity:
 * The time complexity is O(n), where n is the number of elements in the postfix expression.
 * This is because we iterate through the expression once, performing a constant amount of work for each element.
 */

/*
 * Space Complexity:
 * The space complexity is O(n), where n is the number of operands in the postfix expression.
 * This is because we use a stack to store the operands, and in the worst case, the stack will contain all the operands.
 */

/*
 * Note that the space complexity can be reduced to O(1) if we assume that the number of operands is fixed and small, and we use a fixed-size array instead of a dynamic stack.
 */