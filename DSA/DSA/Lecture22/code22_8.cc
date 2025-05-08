/// CIN.GETLINE(STR,LEN)

/*
Certainly! I'll explain the `cin.getline(str, len)` function in C++ and how to use custom delimiters with it. I'll break it down from first principles and provide you with easy-to-understand explanations along with example code.

First Principles:
1. Reading input in C++: When you're programming, you often need to get input from the user. In C++, the standard way to do this is using `cin`.
2. Types of input: Input can be of various types - numbers, single characters, or strings (text).
3. Reading strings: For strings, you have options like `cin >>` (which stops at whitespace) or `getline()` (which reads a full line).
4. Line-based input: Often, you want to read an entire line of text, including spaces. That's where `getline()` comes in.
5. Customization: Sometimes, you want to control where the input stops (e.g., at a comma instead of a newline). This is where custom delimiters are useful.

Now, let's dive into `cin.getline(str, len)`:

1. What is `getline()`?
   - It's a function that reads a line of text from the input.
   - Unlike `cin >>`, it doesn't stop at spaces or tabs.
   - It keeps reading until it hits a newline character (`\n`) by default.

2. Parameters of `getline()`:
   - `str`: A character array (C-style string) where the input will be stored.
   - `len`: The maximum number of characters to read. This prevents buffer overflow.
   - `delim` (optional): The character that marks the end of input (default is `\n`).

3. How `getline()` works:
   - It reads characters one by one from the input.
   - Each character is stored in the `str` array.
   - It stops when:
     a. It encounters the delimiter (default: newline).
     b. It has read `len - 1` characters (leaves space for null terminator `\0`).
     c. It reaches the end of the input.
   - The delimiter is read but not stored in `str`.
   - It adds a null terminator `\0` at the end to make a valid C-string.

4. Custom Delimiters:
   - By default, `getline()` uses `\n` as the delimiter.
   - You can change this to any character you want.
   - Example: Use `,` to read comma-separated values.
   - Syntax: `cin.getline(str, len, ',');`

Let's see some code examples:

*/


#include <iostream>
using namespace std;

int main() {
    // 1. Basic usage
    char name[50];
    cout << "Enter your full name: ";
    cin.getline(name, 50);
    cout << "Hello, " << name << "!" << endl;

    // 2. Length limit
    char tweet[15];
    cout << "Enter a short message: ";
    cin.getline(tweet, 15);
    cout << "Your message: " << tweet << endl;

    // 3. Custom delimiter - comma
    char item[50];
    cout << "Enter a list item (end with comma): ";
    cin.getline(item, 50, ',');
    cout << "Item added: " << item << endl;

    // 4. Custom delimiter - pipe
    char command[100];
    cout << "Enter a command (end with |): ";
    cin.getline(command, 100, '|');
    cout << "Executing: " << command << endl;

    return 0;
}

/*
Let's break down each example:

1. Basic Usage:
   - We create a `name` array to store 50 characters.
   - `cin.getline(name, 50)` reads a full line, including spaces.
   - If you type "John Doe", it captures both words.

2. Length Limit:
   - We use a small `tweet` array (15 chars) to demonstrate the length limit.
   - If you type more than 14 characters (leaving one for `\0`), it stops reading.
   - This prevents buffer overflow, a common security issue.

3. Custom Delimiter - Comma:
   - Here, we use a comma as the delimiter.
   - You might type: "apples, oranges, bananas"
   - It only reads "apples" because it stops at the comma.

4. Custom Delimiter - Pipe:
   - We use the `|` character as a delimiter.
   - This is handy in scenarios like command-line interfaces.
   - You might type: "run script.py --verbose |"
   - It captures everything up to the pipe.

Key Points:
- `getline()` is great for reading full lines or structured input.
- Always provide a length to prevent buffer overflows.
- Custom delimiters let you handle various formats (CSV, command inputs, etc.).
- The delimiter is read but not stored in the string.
- After `getline()`, the delimiter remains in the input buffer. Use `cin.ignore()` if needed to clear it.

In summary, `cin.getline(str, len)` is a powerful C++ function for reading text input. It handles spaces gracefully and, with custom delimiters, can adapt to many input formats. This flexibility makes it a go-to choice for user-friendly and data-driven applications.

*/