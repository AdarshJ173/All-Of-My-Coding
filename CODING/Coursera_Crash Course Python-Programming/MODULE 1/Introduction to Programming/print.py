
#// PRINT FUNCTION IN PYTHON
'''
The print function in Python is used to output data to the standard output device (like a screen). It can be used to print text, variables, or the results of expressions.

Here's a breakdown of the print function:

1.print() is a built-in function in Python.
2.It can take multiple arguments, separated by commas.
3.Each argument is printed in the order it is passed to the function.
4.By default, the arguments are separated by a space character.
5.The print function automatically adds a newline character at the end of the 6.6.output, moving the cursor to the next line.
For example, print("Hello", "World") would output Hello World on the screen, with a space separating the two words. The cursor would then move to the next line.

'''

print("HELLO WORLD")
print(7)


# Basic print statement
print("Hello, ")
# Outputs the string "Hello, World!" to the console

# Print multiple items
print("Hello", " ")
# Prints "Hello World" - items are separated by a space by default

# Print with custom separator
print("Hello", "World", sep="-")
# Prints "Hello-World" - items are separated by "-"

# Print with custom end character
print("Hello", end="!")
print("World")
# Prints "Hello!World" on the same line

# Print empty line
print()
# Prints a blank line

# Print variables
name = "Alice"
age = 30
print("Name:", name, "Age:", age)
# Prints "Name: Alice Age: 30"

# Print formatted string (f-string)
print(f"Name: {name}, Age: {age}")
# Prints "Name: Alice, Age: 30" - variables are inserted into the string

# Print numbers
print(42)
# Prints the integer 42

print(3.14)
# Prints the float 3.14

# Print boolean values
print(True)
# Prints "True"

# Print result of expressions
print(2 + 3)
# Prints 5 - the result of the addition

# Print with string formatting (old style)
print("Name: %s, Age: %d" % (name, age))
# Prints "Name: Alice, Age: 30" - %s for string, %d for integer

# Print to file
import sys
print("This goes to a file", file=sys.stderr)
# Prints to the standard error stream instead of standard output

# Print representation of objects
print(repr("Hello\nWorld"))
# Prints "'Hello\nWorld'" - shows string as it would appear in code

# Print multiple lines
print("""This is a
multi-line
string""")
# Prints the string across multiple lines as it appears

# Print with different number bases
print(hex(255))  # Hexadecimal
print(bin(10))   # Binary
print(oct(8))    # Octal
# Prints "0xff", "0b1010", and "0o10" respectively

# Print unicode characters
print("\u03A9")  # Greek Omega symbol
# Prints "Ω"

# Print using str.format() method
print("Name: {}, Age: {}".format(name, age))
# Prints "Name: Alice, Age: 30" - variables are inserted into {} placeholders

# Print with field names
print("I have {bananas} bananas and {apples} apples".format(bananas=3, apples=5))
# Prints "I have 3 bananas and 5 apples" - named placeholders

# Print with positional formatting
print("{1} is {0} years old".format(age, name))
# Prints "Alice is 30 years old" - numbers in {} refer to position of arguments

# Print with alignment
print("{:<10}|{:^10}|{:>10}".format("left", "center", "right"))
# Prints "left      |  center  |     right" - aligned left, center, and right

# Print numbers with specific formatting
print("{:.2f}".format(3.14159))
# Prints "3.14" - float with 2 decimal places

print("{:,}".format(1000000))
# Prints "1,000,000" - integer with thousand separators

# Print percentage
print("{:.2%}".format(0.25))
# Prints "25.00%" - formats float as percentage

# Print in scientific notation
print("{:.2e}".format(1000000))
# Prints "1.00e+06" - scientific notation with 2 decimal places

# Print characters repeatedly
print("=" * 20)
# Prints "====================" - repeats "=" 20 times

# Print items from a list
fruits = ["apple", "banana", "cherry"]
print(*fruits)
# Prints "apple banana cherry" - unpacks list items as separate arguments

# Print with no newline in Python 2 style (works in Python 3 too)
# from __future__ import print_function
print("Hello", end=" ")
print("World")
# Prints "Hello World" on the same line