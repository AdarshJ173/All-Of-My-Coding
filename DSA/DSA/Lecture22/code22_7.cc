//* DIFFERENCE BETWEEN CHAR ARRAY & STRINGS

/*
Certainly! Let's explore the difference between character arrays and strings in C++ from first principles, with a detailed explanation and code examples, using `using namespace std;`.

In C++, both character arrays and strings are used to represent and manipulate text data, but they differ in their implementation and functionality.

Character Arrays:
Character arrays are a low-level data structure in C++, which are essentially arrays of characters. They are terminated by a null character `\0` to indicate the end of the string. Character arrays are part of the C language heritage and are widely used in C++ for compatibility and performance reasons.

Here's an example of creating and using a character array:
*/
/*
#include <iostream>
using namespace std;

int main() {
    char name[] = "John";
    cout << "Name: " << name << endl; // Output: Name: John

    return 0;
}
*/
/*

In the above example, `name` is a character array initialized with the string literal "John". The compiler automatically adds a null character `\0` at the end of the string to terminate it.

Strings:
Strings, on the other hand, are a higher-level data type provided by the C++ Standard Library. They are objects of the `std::string` class, which offers a more convenient and safer way to work with text data. Strings are built on top of character arrays but provide additional functionality and better memory management.

Here's an example of creating and using a string:
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "John";
    cout << "Name: " << name << endl; // Output: Name: John

    return 0;
}

/*
In this example, `name` is an object of the `std::string` class, initialized with the string literal "John".

Key differences between character arrays and strings:

1. **Null Termination**: Character arrays require a null character `\0` to mark the end of the string, while strings handle this termination internally and automatically.

2. **Memory Management**: Character arrays have a fixed size, and you need to manually manage their memory allocation and deallocation. Strings dynamically manage their memory and handle resizing automatically.

3. **String Operations**: Strings provide a rich set of member functions and operators for various string operations, such as concatenation, comparison, substring extraction, and more. With character arrays, you need to use functions from the `cstring` library or write your own functions for these operations.

4. **Safety and Robustness**: Strings are generally safer and more robust than character arrays because they prevent common issues like buffer overflows and provide automatic memory management.

5. **Type Safety**: Strings are type-safe, meaning you cannot assign a non-string value to a string object directly. Character arrays, on the other hand, are not type-safe, as you can assign any value to them.

While character arrays are still used in certain scenarios where performance is critical or when working with low-level systems, strings are generally preferred for most string-related operations in modern C++ programming due to their convenience, safety, and functionality.

Here's an example that demonstrates some of the differences between character arrays and strings:
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char name1[] = "John";
    string name2 = "John";

    // Concatenation
    char fullName1[20];
    strcpy(fullName1, "John ");
    strcat(fullName1, "Doe");
    cout << "Full Name (char array): " << fullName1 << endl; // Output: Full Name (char array): John Doe

    string fullName2 = name2 + " Doe";
    cout << "Full Name (string): " << fullName2 << endl; // Output: Full Name (string): John Doe

    // Length
    cout << "Length of name1 (char array): " << strlen(name1) << endl; // Output: Length of name1 (char array): 4
    cout << "Length of name2 (string): " << name2.length() << endl; // Output: Length of name2 (string): 4

    return 0;
}

/*
In this example, we demonstrate string concatenation and length calculation for both character arrays and strings. For character arrays, we need to use functions like `strcpy`, `strcat`, and `strlen` from the `cstring` library, while strings provide member functions like `+` for concatenation and `length()` for getting the length of the string.

In summary, while character arrays are a low-level, C-style way of representing and manipulating text data, strings in C++ offer a more modern, safer, and convenient approach with additional functionality and better memory management. The choice between using character arrays or strings depends on the specific requirements and constraints of your project, but in general, strings are recommended for most string-related operations in C++ programming.

*/