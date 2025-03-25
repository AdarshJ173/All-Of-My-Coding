#include<iostream> // Include the iostream library for input-output operations
#include<stack> // Include the stack library for using stack data structure
#include<math.h> // Include the math library for using mathematical functions like pow()
using namespace std; // Use the standard namespace for convenience

// Function to evaluate a postfix expression
int postfixEvaluation(string s) {
    // Create a stack to store operands
    stack<int> st;

    // Iterate through each character in the input string
    for (int i = 0; i < s.length(); i++) {
        // If the character is a digit (operand)
        if (s[i] >= '0' && s[i] <= '9') {
            // Convert the character to an integer and push it onto the stack
            st.push(s[i] - '0');
        } else {
            // If the character is an operator
            // Pop two operands from the stack
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            // Perform the operation based on the operator
            switch (s[i]) {
                case '+':
                    // Add op1 and op2 and push the result onto the stack
                    st.push(op1 + op2);
                    break;
                case '-':
                    // Subtract op2 from op1 and push the result onto the stack
                    st.push(op1 - op2);
                    break;
                case '*':
                    // Multiply op1 and op2 and push the result onto the stack
                    st.push(op1 * op2);
                    break;
                case '/':
                    // Divide op1 by op2 and push the result onto the stack
                    st.push(op1 / op2);
                    break;
                case '^':
                    // Calculate the power of op1 raised to op2 and push the result onto the stack
                    st.push(pow(op1, op2));
                    break;
            }
        }
    }

    // Return the final result from the stack
    return st.top();
}

int main() {
    // Evaluate the postfix expression "46+2/5*7+"
    cout << postfixEvaluation("46+2/5*7+") << endl;
    return 0;
}

/*
*Time Complexity Analysis:

The time complexity of the postfixEvaluation function is O(n), where n is the length of the input string. This is because we iterate through each character in the input string once.

*Space Complexity Analysis:

The space complexity of the postfixEvaluation function is O(n), where n is the number of operands in the input string. This is because we use a stack to store the operands, and in the worst case, we might need to store all operands in the stack.

*Explanation of the Code:

The code evaluates a postfix expression by iterating through each character in the input string. If the character is a digit, it is converted to an integer and pushed onto a stack. If the character is an operator, two operands are popped from the stack, the operation is performed, and the result is pushed back onto the stack. Finally, the final result is returned from the stack.
*/