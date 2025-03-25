/// OPERATORS & FOR LOOPS

//* BITWISE OPERATOR
//? - AND ---> & 
//? - OR --->  |  
//? - NOT ---> ~  
//? - XOR ---> ^ 

#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 3; // Initialize two integer variables a and b with values 5 and 3 respectively
    
    // Demonstrate bitwise AND operator (&)
    cout << "a & b :" << (a & b) << endl; 
    // Output: 1 (binary: 0001) because only the rightmost bit is 1 in both a and b
    
    // Demonstrate bitwise OR operator (|)
    cout << "a | b :" << (a | b) << endl; 
    // Output: 7 (binary: 0111) because at least one of the corresponding bits is 1 in both a and b
    
    // Demonstrate bitwise NOT operator (~)
    cout << "a ~ b :" << (~a) << endl; 
    // Output: -6 (binary: 1010) because it flips each bit of a, changing 0 to 1 and 1 to 0
    
    // Demonstrate bitwise XOR operator (^)
    cout << "a ^ b :" << (a ^ b) << endl; 
    // Output: 6 (binary: 0110) because only one of the corresponding bits is  1 in both a and b
    
    cout << endl;

    // Demonstrate left shift operator (<<)
    cout << (17 << 1) << endl; 
    // Output: 34 because shifting 17 to the left by 1 position is equivalent to multiplying by 2^1
    
    // Demonstrate left shift operator (<<)
    cout << (17 << 2) << endl; 
    // Output: 68 because shifting 17 to the left by 2 positions is equivalent to multiplying by 2^2
    
    // Demonstrate right shift operator (>>)
    cout << (19 >> 1) << endl; 
    // Output: 9 because shifting 19 to the right by 1 position is equivalent to dividing by 2^1
    
    // Demonstrate right shift operator (>>)
    cout << (21 >> 2) << endl; 
    // Output: 5 because shifting 21 to the right by 2 positions is equivalent to dividing by 2^2
}

/*
Bitwise operators in C++ are operators that directly manipulate the bits of an integer. There are six bitwise operators in C++:

& (AND): This operator performs a bitwise AND operation between two integers. It sets each bit to 1 if both bits are 1.
| (OR): This operator performs a bitwise OR operation between two integers. It sets each bit to 1 if at least one of the corresponding bits is 1.
^ (XOR): This operator performs a bitwise XOR (exclusive OR) operation between two integers. It sets each bit to 1 if only one of the bits is 1.
~ (NOT): This operator performs a bitwise NOT operation, also known as one's complement. It flips each bit of the operand (0 becomes 1 and 1 becomes 0).
<< (Left Shift): This operator shifts the bits of the left operand to the left by a number of positions specified by the right operand. This is equivalent to multiplying the left operand by 2 raised to the power of the right operand.
>> (Right Shift): This operator shifts the bits of the left operand to the right by a number of positions specified by the right operand. This is equivalent to dividing the left operand by 2 raised to the power of the right operand, truncating any remainder.
Bitwise operators are commonly used in low-level programming, such as embedded systems, device drivers, and cryptography, where direct manipulation of bits is required.
*/

//! & operator
/*
The & bitwise operator in C++ is called the AND operator. It performs a bitwise AND operation between two integers.

Here's how it works:

It sets each bit of the result to 1 only if both corresponding bits of the two operands are 1.
If either bit is 0, the result bit will also be 0.
For example, if you have two numbers:

a = 5; // binary: 0101
b = 3; // binary: 0011
When you apply the & operator like this:

result = a & b;
The result will be:

result = 5 & 3; // binary: 0101 & 0011 = 0001 (decimal 1)
So, result will be 1 in this case.

x   y    %
0   0    0
0   1    0
1   0    0
1   1    1

*/

//! OR operator
/*
The | bitwise operator in C++ is called the OR operator. It performs a bitwise OR operation between two integers.

Here's how it works:

It sets each bit of the result to 1 if at least one of the corresponding bits of the two operands is 1.
If both bits are 0, the result bit will be 0.
For example, if you have two numbers:

a = 5; // binary: 0101
b = 3; // binary: 0011
When you apply the | operator like this:

result = a | b;
The result will be:

result = 5 | 3; // binary: 0101 | 0011 = 0111 (decimal 7)
So, result will be 7 in this case.

x   y    %  
0   0    0
0   1    1
1   0    1
1   1    1

*/

//! NOT operator
/*
The ~ bitwise operator in C++ is called the NOT operator. It performs a bitwise NOT operation, also known as one's complement, on a single integer.

Here's how it works:

It flips each bit of the operand, changing 0 to 1 and 1 to 0.
For example, if you have a number:

a = 5; // binary: 0101
When you apply the ~ operator like this:

result = ~a;
The result will be:

result = ~5; // binary: ~0101 = 1010 (decimal -6 in two's complement representation)
So, result will be -6 in this case in two's complement representation.

x   z
0   1
1   0

a = 2 ( int 4 bytes - 32 bits)
000000000000010
~a : 11111111111111101
1's complement : 0000000010
2's complement :         +1
------------------------------
0000000010 + 1 = 0000000011 
11 = 3
~a = -3

*/

//! XOR operator
/*
The ^ bitwise operator in C++ is called the XOR (exclusive OR) operator. It performs a bitwise XOR operation between two integers.

Here's how it works:

It sets each bit of the result to 1 if only one of the corresponding bits of the two operands is 1.
If both bits are the same (both 0 or both 1), the result bit will be 0.
For example, if you have two numbers:

a = 5; // binary: 0101
b = 3; // binary: 0011
When you apply the ^ operator like this:

result = a ^ b;
The result will be:

result = 5 ^ 3; // binary: 0101 ^ 0011 = 0110 (decimal 6)
So, result will be 6 in this case.

x   y    %
0   0    0
0   1    1
1   0    1
1   1    0

*/

//! LEFT-SHIFT operator
/*
The left shift bitwise operator (<<) shifts the binary representation of a number to the left by a specified number of positions. Each shift to the left effectively multiplies the number by 2 raised to the power of the shift amount.

For example:

Shifting 5 to the left by 1 position: 5 << 1 results in 10 (since 5 * 2^1 = 10).
Shifting 5 to the left by 2 positions: 5 << 2 results in 20 (since 5 * 2^2 = 20).
The left shift operator is commonly used in programming for bitwise manipulation and optimizing certain arithmetic operations.
*/

//! RIGHT-SHIFT operator
/*
The right shift bitwise operator (>>) shifts the binary representation of a number to the right by a specified number of positions. Each shift to the right effectively divides the number by 2 raised to the power of the shift amount, and discards the remainder.

For example:

Shifting 20 to the right by 2 positions: 20 >> 2 results in 5 (since 20 / 2^2 = 5).
Shifting -20 to the right by 2 positions: -20 >> 2 results in -5 (since -20 / 2^2 = -5).
The right shift operator is commonly used in programming for bitwise manipulation, division by powers of 2, and arithmetic operations where rounding towards negative infinity is desired.

*/