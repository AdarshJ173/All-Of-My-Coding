#include<iostream>
using namespace std;


int main(){


//* C++ DATA TYPES

// INTEGER ---> 4 BYTES 
// FLOAT ---> 4 BYTES
// DOUBLE ---> 8 BYTES
// LONG ---> 8 BYTES
// SHORT ---> 2 BYTES
// CHAR ---> 1 BYTE
// BOOLEAN ---> 1 BYTE
// CHARACTER ---> 1BYTE

//  VARIABLES AND CONSTANTS

// Variables:
// Variables are containers for storing data values that can be changed during program execution.
int age = 25;  // Declares an integer variable 'age' and initializes it with value 25
// age = 26;      // The value of 'age' can be changed

// Constants:
// Constants are like variables, but their values cannot be modified after initialization.
const double PI = 3.14159;  // Declares a constant 'PI' with a fixed value
// PI = 3.14;  // This would cause an error because constants cannot be modified

// Example usage:
int radius = 5;
double area = PI * radius * radius;  // Using both variable (radius) and constant (PI)


// Data Types in C++

// 1. Primitive Data Types
// These are the most basic data types available in C++

// a) Integer (int): Stores INTEGER numbers
int integerExample = 42;
cout << "Integer example: " << integerExample << endl;
// Size: Usually 4 bytes
// Range(unsigned): 0 to 2^32 - 1 (for 4 bytes)
// Range(signed): -2^31 to 2^31 - 1 (for 4 bytes)
//? 1byte = 8bits

// b) Float: Stores decimal numbers with single precision
float floatExample = 3.14159;
cout << "Float example: " << floatExample << endl;
// Size: 4 bytes
// Precision: 6-7 decimal digits

//Double
double doubleExample = 3.14159265358979323846;
cout << "Double example: " << doubleExample << endl;
// Size: 8 bytes
// Precision: 15-16 decimal digits

// c) Character (char): Stores a single character
char charExample = 'A';
cout << "Character example: " << charExample << endl;
// Size: 1 byte
// Range: -128 to 127 or 0 to 255
// ASCII TABLE

// d) Boolean (bool): Stores true or false
bool boolExample = true;
cout << "Boolean example: " << (boolExample ? "true" : "false") << endl;
// Size: 1 byte
// Values: true or false

// 2. Derived Data Types
// These are derived from primitive data types

// a) Function: A set of statements that perform a specific task
int add(int a, int b) {
    return a + b;
};
cout << "Function example (add 5 and 3): " << add(5, 3) << endl;

// b) Array: Collection of elements of the same data type
int arrayExample[5] = {1, 2, 3, 4, 5};
cout << "Array example (third element): " << arrayExample[2] << endl;

// c) Pointer: Stores the memory address of another variable
int* pointerExample = &integerExample;
cout << "Pointer example (address of integerExample): " << pointerExample << endl;

// d) Reference: An alias for an already existing variable
int& referenceExample = integerExample;
referenceExample = 100;
cout << "Reference example (changed integerExample): " << integerExample << endl;

// 3. User-Defined Data Types
// These are defined by the user

// a) Class: User-defined data type that encapsulates data and functions
class ExampleClass {
public:
    int data;
    void setData(int d) {
        data = d;
    }
    int getData() {
        return data;
    }
};
ExampleClass classExample;
classExample.setData(50);
cout << "Class example (getData): " << classExample.getData() << endl;

// b) Structure: Similar to class, but members are public by default
struct ExampleStruct {
    int data;
    void setData(int d) {
        data = d;
    }
};
ExampleStruct structExample;
structExample.data = 60;
cout << "Structure example (direct access): " << structExample.data << endl;

// c) Union: Stores different data types in the same memory location
union ExampleUnion {
    int i;
    float f;
    char c;
};
ExampleUnion unionExample;
unionExample.i = 65;
cout << "Union example (as int): " << unionExample.i << endl;
cout << "Union example (as char): " << unionExample.c << endl;

// d) Enumeration (enum): User-defined data type consisting of integral constants
enum Color {RED, GREEN, BLUE};
Color colorExample = GREEN;
cout << "Enum example (GREEN): " << colorExample << endl;

// Detailed Explanation:

// Primitive Data Types:
// These are the building blocks of data manipulation in C++. They are predefined
// by the language and are not composed of other data types.

// Integer: Used for whole numbers. Different sizes (short, int, long, long long)
// allow for different ranges of values.

// Float and Double: Used for decimal numbers. Float uses less memory but is less
// precise than double.

// Character: Stores a single character, internally represented as an ASCII value.

// Boolean: Used for logical operations, representing true or false.

// Derived Data Types:
// These are constructed from primitive data types.

// Function: A block of code designed to perform a particular task. It can take
// parameters and return a value.

// Array: A collection of elements of the same type, stored in contiguous memory locations.

// Pointer: Stores the memory address of another variable, allowing for dynamic
// memory allocation and efficient manipulation of data.

// Reference: An alias for an existing variable, often used in function parameters
// for efficient passing of large objects.

// User-Defined Data Types:
// These allow programmers to create their own custom data types.

// Class: The basic unit of Object-Oriented Programming. It encapsulates data and
// functions that operate on that data.

// Structure: Similar to a class, but with public access by default. Often used for
// simple data structures.

// Union: Allows storing different data types in the same memory location. Useful
// for conserving memory, but requires careful use to avoid data corruption.

// Enumeration: Defines a set of named integral constants. Useful for creating
// a set of related constants, improving code readability and maintainability.

// Understanding these data types and their properties is crucial for efficient
// memory management, type safety, and overall program design in C++.



int a; //declaration
a = 12; //initialization

cout<<"size of int "<<sizeof(a)<<endl;

float b;
cout<<"size of float "<<sizeof(b)<<endl;

char c;
cout<<"size of char "<<sizeof(c)<<endl;

bool d;
cout<<"size of bool "<<sizeof(d)<<endl;

 // Type Modifiers in C++

// Type modifiers are keywords that alter the properties of basic data types.
// They modify how data is stored in memory and the range of values that can be represented.

// 1. Signed and Unsigned Modifiers:

// Signed: (Default for most integer types)
// - Can represent both positive and negative numbers
// - Uses two's complement representation
// - Range: For n bits, -2^(n-1) to 2^(n-1) - 1

// Unsigned:
// - Can only represent non-negative numbers (0 and positive)
// - All bits are used for magnitude, not sign
// - Range: For n bits, 0 to 2^n - 1

int signedInt = -5;
unsigned int unsignedInt = 5;
cout << "Signed int: " << signedInt << ", Unsigned int: " << unsignedInt << endl;

// 2. Long and Short Modifiers:

// Short:
// - Typically half the size of int
// - Used when a smaller range is sufficient, saving memory
// - At least 16 bits (2 bytes)

// Long:
// - Typically twice the size of int
// - Used when a larger range is needed
// - At least 32 bits (4 bytes)

// Long Long:
// - Even larger than long
// - At least 64 bits (8 bytes)

short shortInt = 32767;
long longInt = 2147483647L;
long long longLongInt = 9223372036854775807LL;

cout << "Short int: " << shortInt << endl;
cout << "Long int: " << longInt << endl;
cout << "Long long int: " << longLongInt << endl;

// Combining Modifiers:
// Modifiers can be combined for more specific control

unsigned long int bigPositiveNum = 4294967295UL;
cout << "Unsigned long int: " << bigPositiveNum << endl;

// First Principles Thinking:
// 1. Binary Representation: All data in computers is ultimately stored as binary (0s and 1s).
// 2. Bit Allocation: The number of bits allocated determines the range of values that can be stored.
// 3. Sign Bit: In signed numbers, one bit (usually the leftmost) is used to represent the sign.
// 4. Memory Efficiency: Choosing the right modifier can optimize memory usage and performance.
// 5. Overflow and Underflow: Using the wrong modifier can lead to unexpected results when exceeding the range.

// Understanding these principles helps in choosing the right data type and modifier for each situation,
// balancing between range requirements and memory efficiency.



short int si;
long int li;
long long int lli;

cout<<"size of short int "<<sizeof(si)<<endl;
cout<<"size of long int "<<sizeof(li)<<endl;
cout<<"size of long long int "<<sizeof(lli)<<endl;



return 0;

}