# Code Snippet 1: Basic Variable Usage with F-String
# f-strings (formatted string literals) are a way to embed expressions inside string literals, using curly braces {}.

name = "John"
# Using f-string to include the variable 'name' within a string
greeting = f"Hello, {name}!"
print(greeting)

# Code Snippet 2: Basic Arithmetic with F-String
# f-strings can also evaluate expressions directly within the braces.

a = 5
b = 3
# Evaluating the expression a + b inside the f-string
result = f"The sum of {a} and {b} is {a + b}."
print(result)

# Code Snippet 3: Using F-String with Function Calls
# You can call functions within the braces of an f-string.

def square(x):
    return x * x

number = 4
# Calling the function square() within the f-string
squared_result = f"The square of {number} is {square(number)}."
print(squared_result)

# Code Snippet 4: Input and F-Strings
# Taking user input and using it in an f-string.

user_name = input("Enter your name: ")
# Embedding user input directly in the f-string
welcome_message = f"Welcome, {user_name}!"
print(welcome_message)

# Code Snippet 5: Conditional Expressions in F-Strings
# You can use conditional expressions directly within f-strings.

age = 20
# Using a ternary conditional within the f-string
age_status = f"You are {'an adult' if age >= 18 else 'a minor'}."
print(age_status)

# Code Snippet 6: String Methods in F-Strings
# Applying string methods within f-strings.

message = "hello world"
# Using the .upper() method within the f-string
formatted_message = f"{message.upper()}!"
print(formatted_message)

# Code Snippet 7: Nested F-Strings
# Using f-strings inside f-strings.

person_name = "Alice"
# Nesting f-strings within f-strings
sentence = f"{f'Hello, {person_name}!'} How are you?"
print(sentence)

# Code Snippet 8: Formatting Numbers in F-Strings
# Using f-strings to format numbers.

pi = 3.14159
# Formatting the number to two decimal places within the f-string
formatted_pi = f"Pi rounded to two decimal places is {pi:.2f}."
print(formatted_pi)

# Code Snippet 9: Using Multiple Variables in F-Strings
# Including multiple variables in a single f-string.

first_name = "John"
last_name = "Doe"
# Combining multiple variables within a single f-string
full_name = f"My name is {first_name} {last_name}."
print(full_name)

# Code Snippet 10: Using F-Strings with Escape Characters
# Including escape characters within f-strings.

path = "C:\\Users\\JohnDoe"
# Using an escape character for the backslash within the f-string
path_message = f"The file path is: {path}"
print(path_message)

# Code Snippet 11: F-Strings with Floats
# Displaying floating-point numbers with f-strings.

value = 123.456789
# Displaying the float with three decimal places
formatted_value = f"The value is {value:.3f}."
print(formatted_value)

# Code Snippet 12: Using F-Strings with Percentages
# Formatting numbers as percentages within f-strings.

percentage = 0.85
# Displaying the number as a percentage
# This line formats the percentage variable as a whole number percentage.
# f-string is used to embed expressions inside string literals.
# {percentage:.0%} formats the percentage variable to display as a percentage with no decimal places.
formatted_percentage = f"The success rate is {percentage:.0%}."
print(formatted_percentage)

# Code Snippet 13: F-Strings with Dictionaries
# Accessing dictionary values within f-strings (using basic concepts).

# Defining a dictionary (although usage is not requested, demonstrating simple access)
student = {'name': 'Alice', 'age': 21}
# Accessing dictionary values within the f-string
student_info = f"{student['name']} is {student['age']} years old."
print(student_info)

# Code Snippet 14: F-Strings with Lists
# Accessing list elements within f-strings (although usage is not requested, demonstrating simple access).

numbers = [1, 2, 3, 4, 5]
# Accessing list elements within the f-string
third_number = f"The third number in the list is {numbers[2]}."
print(third_number)

# Code Snippet 15: F-Strings with Tuples
# Accessing tuple elements within f-strings (although usage is not requested, demonstrating simple access).

coordinates = (10, 20)
# Accessing tuple elements within the f-string
formatted_coordinates = f"The coordinates are x={coordinates[0]}, y={coordinates[1]}."
print(formatted_coordinates)

# Code Snippet 16: F-Strings with Custom Formatting
# Applying custom formatting within f-strings.

number = 125434.56789
# Applying custom formatting to include commas and limit decimal places
custom_formatted_number = f"The formatted number is {number:,.2f}."
print(custom_formatted_number)

# Code Snippet 17: F-Strings for Debugging
# Using f-strings to create debugging messages.

value1 = 10
value2 = 20
# Using f-strings to generate debugging output
debug_message = f"Debug: value1={value1}, value2={value2}, sum={value1 + value2}"
print(debug_message)

# Code Snippet 18: F-Strings with Date and Time
# Including date and time values within f-strings (using basic datetime module).

from datetime import datetime
current_date = datetime.now()
# Embedding date and time within the f-string
date_message = f"Current date and time: {current_date}"
print(date_message)

# Code Snippet 19: Multiline F-Strings
# Using f-strings for multiline strings.

first_line = "Hello"
second_line = "World"
# Combining multiple lines within a single f-string
multiline_message = f"{first_line}\n{second_line}"
print(multiline_message)

# Code Snippet 20: F-Strings with Conditional Expressions (Advanced)
# Using more complex conditional logic within f-strings.

score = 85
# Applying advanced conditional logic within the f-string
grade_message = f"Your grade is {'A' if score >= 90 else 'B' if score >= 80 else 'C' if score >= 70 else 'D' if score >= 60 else 'F'}."
print(grade_message)
