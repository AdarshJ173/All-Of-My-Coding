#include<iostream>
using namespace std;
                   
int main(){

    //* <operand> <operator> <operand>

    /*
    *Precedence
        1. () , {} , []
        2.^
        3.* , /
        4.+ , -

    *Associativity 
        L -> R (for same precedence)
    */

}

/*
*What is an Infix Expression?

/In computer science, an infix expression is a notation for expressing mathematical operations where the operator is placed between its operands. In other words, the operator is "infix" or "in between" the operands.

Example:

A simple example of an infix expression is 2 + 3. Here, + is the operator, and 2 and 3 are the operands.

*How Infix Expressions are Evaluated

/When evaluating an infix expression, the operator is applied to the operands in a specific order. In C++, the order of operations is governed by the following rules:

!   Parentheses: Evaluate expressions inside parentheses first.
!   Exponentiation: Evaluate any exponentiation operations (e.g., 2^3) next.
!   Multiplication, Division, Modulus: Evaluate any multiplication, division, or modulus operations from left to right.
!   Addition and Subtraction: Finally, evaluate any addition and subtraction operations from left to right.
!   Using these rules, the expression 2 + 3 would be evaluated as follows:

/No parentheses, so move to the next step.
/No exponentiation, so move to the next step.
/No multiplication, division, or modulus, so move to the next step.
/Evaluate the addition operation: 2 + 3 = 5.
/Infix Expressions in C++

In C++, infix expressions are used extensively in arithmetic operations, comparisons, and logical operations. Here are some examples:

? Arithmetic operations: a + b, c - d, e * f, g / h
? Comparisons: a == b, c != d, e > f, g < h
? Logical operations: a && b, c || d, !e
? How C++ Evaluates Infix Expressions

When the C++ compiler encounters an infix expression, it follows these steps:

*Lexical Analysis: Break the expression into individual tokens, such as keywords, identifiers, literals, and operators.
*Syntax Analysis: Parse the tokens into an abstract syntax tree (AST) that represents the expression.
*Semantic Analysis: Analyze the AST to determine the meaning of the expression, including the order of operations.
*Code Generation: Generate machine code that evaluates the expression according to the order of operations.
Example C++ Code

Here's an example C++ program that demonstrates infix expressions:

cpp
Edit
Copy code
#include <iostream>

int main() {
    int a = 2;
    int b = 3;
    int result = a + b; // infix expression: a + b
    std::cout << "Result: " << result << std::endl;
    return 0;
}
In this example, the infix expression a + b is evaluated according to the order of operations, and the result is stored in the result variable.
*/
