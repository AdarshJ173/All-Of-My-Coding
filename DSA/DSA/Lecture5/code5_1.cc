// The following three expressions all achieve the same result: incrementing the variable i by 1
// i = i + 1; - the most explicit way to increment i
//i++; // post increment, increments i after its value is used
// ++i; // pre increment, increments i before its value is used
// i+=1; // shorthand for i = i + 1, increments i by 1

// The following three expressions all achieve the same result: decrementing the variable i by 1
// i = i - 1; - the most explicit way to decrement i
// i--; // post decrement, decrements i after its value is used
// --i; // pre decrement, decrements i before its value is used
// i-=1; // shorthand for i = i - 1, decrements i by 1

#include<iostream>
using namespace std;

int main(){

   // Example of post increment
int a = 5;
int b = a++; // b will be 5, a will be 6
printf("a = %d, b = %d\n", a, b); // prints "a = 6, b = 5"

// Example of pre increment
int c = 5;
int d = ++c; // d will be 6, c will be 6
printf("c = %d, d = %d\n", c, d); // prints "c = 6, d = 6"

// Example of shorthand increment
int e = 5;
e += 1; // e will be 6
printf("e = %d\n", e); // prints "e = 6"

// Example of post decrement
int f = 5;
int g = f--; // g will be 5, f will be 4
printf("f = %d, g = %d\n", f, g); // prints "f = 4, g = 5"

// Example of pre decrement
int h = 5;
int i = --h; // i will be 4, h will be 4
printf("h = %d, i = %d\n", h, i); // prints "h = 4, i = 4"

// Example of shorthand decrement
int j = 5;
j -= 1; // j will be 4
printf("j = %d\n", j); // prints "j = 4" 
}