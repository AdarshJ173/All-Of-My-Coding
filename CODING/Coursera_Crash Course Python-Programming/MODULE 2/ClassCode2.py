# variables and data types 
# OPERATORS
# ZEN OF PYTHON
# Typecasting
# formatting in python
# Functions
# If , else, elif
# return 

#~--------------------------------------------------------------------------
import os

os.makedirs("D:/CODING/100folders", exist_ok=True)

for day in range(1, 101):
    subfolder = os.path.join("100folders", f"day_{day}")
    os.makedirs(subfolder, exist_ok=True)
    with open(os.path.join(subfolder, "main.py"), "w") as f:
        f.write(f'print("This is the main.py file for day_{day}")')
print("Folders and files created successfully.")
#~--------------------------------------------------------------------------


# **Formatting in Python**

# Understanding the Basics

# 1. **Strings in Python**:
greeting = "Hello, World!"

# 2. **Variables**:
name = "Alice"
age = 25

# String Concatenation
name = "Alice"
greeting = "Hello, " + name + "!"
print(greeting)  # Output: Hello, Alice!

# String Formatting Methods

# 1. **`%` Formatting (Old Style)**
# This method uses the % operator to insert variables into a string.
name = "Alice"
age = 25
greeting = "Hello, %s! You are %d years old." % (name, age)
# %s is a placeholder for strings.
# %d is a placeholder for integers.
print(greeting)  # Output: Hello, Alice! You are 25 years old.

# 2. **`str.format()` Method**
name = "Alice"
age = 25
greeting = "Hello, {}! You are {} years old.".format(name, age)
print(greeting)  # Output: Hello, Alice! You are 25 years old.

#!____________________________________________________________________________
# Radius of the circle
radius = 5.0

# Approximate value of pi
pi = 3.14159

# Calculate the area of the circle using the formula πr²
area = pi * (radius ** 2)

# Format the area to 2 decimal places
formatted_area = "{:.2f}".format(area)

# Print the formatted area
# print("The area of the circle with radius", radius, "is:", area)
print("The area of the circle with radius", radius, "is:", formatted_area)

#!____________________________________________________________________________

greeting = "Hello, {name}! You are {age} years old.".format(name="raghav", age=27)
print(greeting)  # Output: Hello, Alice! You are 25 years old.

# 3. **f-Strings (Formatted String Literals)**
name = "Alice"
age = 25
greeting = f"Hello, {name}! You are {age} years old."
print(greeting)  # Output: Hello, Alice! You are 25 years old.


#// -------------------------------------------------------------------------------------------------------------------


# Advanced String Formatting

# 1. **Padding and Alignment**
print(f"{name:>10}")  # Output:      Alice
print(f"{name:<10}")  # Output: Alice     
print(f"{name:^10}")  # Output:   Alice   

# 2. **Formatting Numbers**
pi = 3.141592653589793
print(f"Pi rounded to 2 decimal places: {pi:.2f}")  # Output: Pi rounded to 2 decimal places: 3.14

number = 1234567890
print(f"Number with commas: {number:,}")  # Output: Number with commas: 1,234,567,890

# 3. **Expressions and Function Calls**
a = 5
b = 10
print(f"The sum of {a} and {b} is {a + b}.")  # Output: The sum of 5 and 10 is 15.

def greet(name):
    return f"Hello, {name}!"

print(f"{greet('Alice')}")  # Output: Hello, Alice!