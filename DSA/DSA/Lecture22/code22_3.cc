

/*
Certainly! Let's explore the concept of how cin>> stops execution when encountering spaces, tabs, or newline/enter characters in C++. We'll explain this from first principles, with a detailed explanation and code examples, including the use of using namespace std;.
In C++, the cin object is used for standard input operations, and the extraction operator >> is used to read input from the user. However, when using cin>> to read input, it stops reading at the first occurrence of whitespace characters, such as spaces, tabs, or newline/enter characters.
Here's the explanation from first principles:
When you use cin>> to read input, the C++ standard library's input stream functions treat whitespace characters (spaces, tabs, and newline/enter) as delimiters. This means that when the input stream encounters a whitespace character, it stops reading and considers the input as complete.
Here's an example to illustrate this behavior:
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    string name;

    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    return 0;

    /*
    In the above example, when you enter 42 John Doe, the cin >> number statement reads the 42 and stops at the space character. The remaining input John Doe is left in the input buffer.
    Similarly, when you enter John Doe for the name, cin >> name reads only John and stops at the space character, leaving Doe in the input buffer.
    To read input with spaces or newline/enter characters, you can use the getline function or the get function with a string object. These functions read the entire line of input, including whitespace characters.
    Here's an example using getline:
    */

   string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your full name is: " << fullName << endl;

    return 0;

    /*
    If you run this program and enter John Doe, the output will be:
    Copy codeEnter your full name: Your full name is: John Doe
    In this example, getline(cin, fullName) reads the entire line of input, including the space character, and stores it in the fullName string.
    It's important to note that when using cin>>, any remaining input after the delimiter (whitespace character) is left in the input buffer. If you need to read multiple inputs in the same line, you should clear the input buffer using functions like cin.ignore() or cin.clear() before reading the next input.
    In summary, cin>> stops execution when encountering spaces, tabs, or newline/enter characters because the C++ standard library treats these whitespace characters as delimiters. To read input with whitespace characters, you can use functions like getline or get with string objects. Understanding this behavior is crucial for properly handling user input in C++ programs.
    */

}