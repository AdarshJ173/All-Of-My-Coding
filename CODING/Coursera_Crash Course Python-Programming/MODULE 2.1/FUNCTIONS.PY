
#* What is a Function?

# From first principles, a function is a block of organized, reusable code that is used to perform a single, related action. Functions provide better modularity for your application and a high degree of code reusability.

# In Python, a function is defined using the `def` keyword.

# ### Basic Structure of a Function

# Here’s the simplest form of a function:

def function_name():
    #code...
    pass

# - `def` is the keyword to define a function.
# - `function_name` is the name of the function.
# - `():` parentheses can contain parameters.
# - `pass` is a placeholder indicating that the function does nothing yet.

# ### Example: Basic Function

def say_hello():
    print("Hello, duniya!")

say_hello()

#* Function with Parameters

# Parameters allow functions to accept input values and use them inside the function.

def greet(name):
    print("Hello", name)

greet("dev")
greet("prashlesh")
greet("Adarsh")
greet("yashaswin")

#? Function with Multiple Parameters/Arguments

# You can define a function with multiple parameters.

def add(a , b):
    print(a+b)

# add(3,4)
    return a + b

result = add(3, 5)
print(result)  # Output: 8

#?Default Parameters

# You can assign default values to parameters, which are used if no value is provided.

def greet(name="World"):
    print("Hello",name,"!")

greet()        # Output: Hello, World!
greet("Alice") # Output: Hello, Alice!

# ? Variable-Length Arguments

# Sometimes you may need to pass a variable number of arguments to a function. You can use `*args` and `**kwargs` for this purpose.

# #### `*args`

# `*args` allows you to pass a variable number of non-keyword arguments.

def my_function(*args):
    for arg in args:
        print(arg)

my_function(1, 2, 3, 4)  # Output: 1 2 3 4

# ? `**kwargs`

# `**kwargs` allows you to pass a variable number of keyword arguments.

def my_function(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

my_function(name="Alice", age=30)  # Output: name: Alice age: 30

# ? Return Values

# Functions can return values using the `return` keyword.

def square(x):
    return x * x

result = square(4)
print(result)  # Output: 16

# ### Nested Functions

# A function can be defined inside another function.

def outer_function():
    def inner_function():
        print("Hello from the inner function!")

    inner_function()

outer_function()

# ? Lambda Functions

# Lambda functions are small anonymous functions defined using the `lambda` keyword.

square = lambda x: x * x
print(square(5))  # Output: 25

# ? Higher-Order Functions

# A higher-order function is a function that takes another function as an argument, or returns a function as a result.

# ? Example: `map`

def square(x):
    return x * x

numbers = [1, 2, 3, 4]
squared_numbers = list(map(square, numbers))
print(squared_numbers)  # Output: [1, 4, 9, 16]

# ? Example: `filter`

def is_even(x):
    return x % 2 == 0

numbers = [1, 2, 3, 4, 5, 6]
even_numbers = list(filter(is_even, numbers))
print(even_numbers)  # Output: [2, 4, 6]

# ? Decorators

# Decorators are a way to modify or enhance functions without changing their definition.

def my_decorator(func):
    def wrapper():
        print("Something is happening before the function is called.")
        func()
        print("Something is happening after the function is called.")
    return wrapper

@my_decorator
def say_hello():
    print("Hello!")

say_hello()

# ? Recursive Functions

# A function can call itself. This is known as recursion.

def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)

print(factorial(5))  # Output: 120

# ### Advanced Example: Fibonacci Sequence

def fibonacci(n):
    if n <= 0:
        return "Input should be a positive integer"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(4))  # Output: 34



# ? Best Practices

# 1. **Meaningful Names**: Choose descriptive names for functions and parameters.
# 2. **Single Responsibility**: Each function should have a single responsibility.
# 3. **Avoid Side Effects**: Functions should avoid modifying global variables or causing other side effects.
# 4. **Documentation**: Use docstrings to document what the function does.

# ### Example of a Well-Documented Function

def add(a, b):
    """
    Add two numbers together.

    Parameters:
    a (int or float): The first number.
    b (int or float): The second number.

    Returns:
    int or float: The sum of a and b.
    """
    return a + b

print(add(3, 4))  # Output: 7



# This comprehensive explanation should give you a solid understanding of functions in Python, from basic to advanced concepts. If you have any specific questions or need further clarification on any topic, feel free to ask!
