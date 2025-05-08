#include<iostream>
using namespace std;

int main(){

/*

Operators are symbols that tell the computer to perform some specific operations.

1. Arithmetic Operators
---Binary operators : + , - , * , / , %
---Unary operators : ++(incrementer) , --(decrementer)

*/

// Pre-Incrementer(++a):
// increment a instantly 

int a = 10;
int b;

b = ++a;
cout<<a<<" "<<b<<endl;

// Post_Incrementer(a++):
// Current value of a is preserved temporarily a will get incremented before next statement is executed.
int c = 7;
int d;

d = c++;
cout<<c<<" "<<d<<endl;

int i = 1;
i = i++ + ++i;
cout<<i<<endl;
cout<<endl;

// --------------------------------------------------

int j = 1; 
int k = 2;
int l;

l = j + k + j++ + k++ + ++j + ++k;

cout<<j<<" "<<k<<" "<<" "<<l<<endl;
cout<<endl;

//----------------------------------------------------------------

int q = 0;

q = q++ - --q + ++q - q--;
cout<<q<<endl;

cout<<endl;
// --------------------------------------------------------------------

int w = 1, e = 2, r = 3;
int m = w-- - e-- - r--;

cout<<w<<endl;
cout<<e<<endl;
cout<<r<<endl;
cout<<m<<endl;

cout<<endl;

// --------------------------------------------------------------------------
int p = 10 , o = 20 , u;

u = p-- - p++ + --o - ++o + --p - o-- + ++p - o++;
cout<<p<<endl;
cout<<o<<endl;
cout<<u<<endl;

//?--------------------------------------------------------------------------------------

/*
*Relational Operator:
---Defines a relation between 2 operands
---Returns a booleans value
== : gives true value if both operands have equal value
!= : gives true if both operands are not equal
> : gives true if left operand is more than right operand
< : gives true if left operand is less than right operand
>= : gives true if left operand is more than or equal to right operand
<= : gives true if left operand is less than or equal to right operand

*/

//? Question : input a number n and tell whether it is equal to , less than or more than 10.
int n;
cout<<"enter a number";cin>>n;

if (n>10)
{
    cout<<"more than 10"<<endl;
}
else if (n<10)
{
    cout<<"less than 10"<<endl;
}
else{
    cout<<"equal to 10"<<endl;
}

//?__________________________________________________________________________________________________
/*
*Logical Operators
used to connect multiple conditions/expressions together or to reverse logical value.
&& : AND gives us true if both operands are true , else false.
|| : OR gives us true if at least one of the operands are true.
! : NOT gives the opposite logical value of the operand. True becomes false and false becomes true.
True = 1
False = 0

!0 = 1
 !1 = 0
*/

//? write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them.

int in_num;
cout<<"input a num.: ";cin>>in_num;

if (in_num%2 == 0 && in_num%3 == 0)
{
    cout<<in_num<<" is divisible by both 2 & 3"<<endl;
}
else if (in_num%2 == 0)
{
    cout<<in_num<<" is only divisible by 2"<<endl;
}
else if (in_num%3 == 0)
{
    cout<<in_num<<" is only divisible by 3"<<endl;
}
else{
    cout<<in_num<<" is not divisible by 2 or 3"<<endl;
}

//* very good , adarsh - khhud code likha bc EEE...

/*

Bitwise Operators:

&(AND)Operator:
    0101
  & 0110
  --------
    0100

|(OR)Operator:
    0101
  | 0110
  --------
    0111

^(XOR)Operator:
    0101
  ^ 0110
  ---------
    0011

~ Ones Complement:
   ~ 0101
   --------
     1010

<<(Left shift operator):
4<<1
4 in binary : (0100)
=1000

>>(Right shift operator):
4>>1
4 in binary : (0100)
= 0010

a<<n ---> a*2^n
a>>n ---> a/2^n

*/

/*
Assignment Operator:
= : Assigns value of right operand to left operand
+= : Assigns sum of two operands to left operand
-= : Assigns difference of two operands to left operand
*= : Assigns product of two operand to left operand
/= : Assigns the quotient of two operands to left operand
*/

/*
Miscellaneous Operators:
sizeof() : returns the size of a variable/datatype
(ternary/conditional)condition!x:y : returns value of x if condition is true or else value of y
cast : convert one data type to another
comma',' : causes a sequence of operations to be performed
&(reference operator) : returns the address of a variable
*(pointer operator) pointer to a variable
*/

/*
| Category       | Operator                                   | Associativity    |
|----------------|--------------------------------------------|------------------|
| Postfix        | `() [] -> . ++ --`                         | Left to right    |
| Unary          | `+ - ! ~ ++ -- (type)* & sizeof`           | Right to left    |
| Multiplicative | `* / %`                                    | Left to right    |
| Additive       | `+ -`                                      | Left to right    |
| Shift          | `<< >>`                                    | Left to right    |
| Relational     | `<= >=`                                    | Left to right    |
| Equality       | `== !=`                                    | Left to right    |
| Bitwise AND    | `&`                                        | Left to right    |
| Bitwise XOR    | `^`                                        | Left to right    |
| Bitwise OR     | `|`                                        | Left to right    |
| Logical AND    | `&&`                                       | Left to right    |
| Logical OR     | `||`                                       | Left to right    |

*/


}