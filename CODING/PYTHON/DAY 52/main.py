'''Lambda functions in Python'''

'''
Lambda functions, also known as anonymous functions, are small, unnamed functions that are defined using the lambda keyword. They can take any number of arguments, but can only have one expression. The syntax for creating a lambda function is as follows:

lambda arguments: expression
Here's an example of a simple lambda function that adds two numbers:


add = lambda x, y: x + y
result = add(5, 3)
print(result)  # Output: 8
Lambda functions are often used in situations where you need a small, one-off function, such as sorting a list of numbers in descending order:

numbers = [5, 2, 9, 1]
sorted_numbers = sorted(numbers, key=lambda x: -x)
print(sorted_numbers)  # Output: [9, 5, 2, 1]
I hope that helps! Let me know if you have any other questions about lambda functions in Python.

'''


'''Lambda functions in Python'''

'''
Lambda functions, also known as anonymous functions, are small, unnamed functions that are defined using the lambda keyword. They can take any number of arguments, but can only have one expression. The syntax for creating a lambda function is as follows:

lambda arguments: expression
'''

# This function takes an input 'x' and doubles its value
# def double(x):
    # Return the product of 'x' and 2
    # return x * 2

#//or

# This is a lambda function that takes an input 'x' and returns its double
double = lambda x: x * 2

# This is a lambda function that takes an input 'x' and returns its cube
cube = lambda x: x*x*x

# Prompt the user to enter a number
# The input will be converted to an integer
print(double(int(input("Please enter a number: "))))  # Prints the double of the entered number

print(cube(int(input(": "))))  # Prints the cube of the entered number

# This is a lambda function that takes two inputs 'x' and 'y' and returns their average
avg = lambda x,y : (x+y)/2

print(avg(x = int(input("x: ")),y = int(input("y: "))))  # Prints the average of the two entered numbers

# This function takes a function 'fx' and a value, and applies the function to the value, then adds 6 to the result
def apl(fx, value):
    return 6 + fx(value)

print(apl(cube,3))  # Prints the cube of 3, then adds 6 to the result















