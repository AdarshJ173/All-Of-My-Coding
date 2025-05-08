
#* What is `return`?

# From first principles, the `return` statement is used in a function to exit the function and optionally pass an expression back to the caller. This means that when a `return` statement is executed, the function terminates immediately, and the value specified by the `return` statement is given back to the function caller.

# ### Basic Structure of `return`

# def function_name():
    # return expression

# - `def` is the keyword to define a function.
# - `function_name` is the name of the function.
# - `return` is the keyword to return a value from the function.
# - `expression` is the value or calculation that the function will return.

# ### Example: Simple Function with `return`

def add(a, b):
    return a + b

add(3,5)
# print(add(3,5))
result = add(3, 5)
ans = add(65,654)
print(result)  # Output: 8
print(ans)

# In this example:
# - The function `add` takes two parameters, `a` and `b`.
# - It returns the sum of `a` and `b`.
# - The result is stored in the variable `result` and then printed.

# ### Multiple Return Statements

# A function can have multiple `return` statements. However, only one of them will be executed during a function call.

def compare(a, b):
    if a > b:
        return "a is greater"
    elif a < b:
        return "b is greater"
    else:
        return "a and b are equal"

print(compare(3, 5))  # Output: b is greater
print(compare(5, 3))  # Output: a is greater
print(compare(3, 3))  # Output: a and b are equal

# ### Returning Multiple Values

# A function can return multiple values by separating them with commas. These values are returned as a tuple.

def get_name_and_age():
    name = "Alice"
    age = 30
    return name, age

name, age = get_name_and_age()
print(name)  # Output: Alice
print(age)   # Output: 30

# ### No `return` Statement

# If a function does not have a `return` statement, it returns `None` by default.

def no_return():
    pass

result = no_return()
print(result)  # Output: None

# ### `return` with No Expression

# A `return` statement with no expression is used to exit a function early.

def check_positive(number):
    if number <= 0:
        return
    print("Number is positive")

check_positive(-1)  # No output
check_positive(5)   # Output: Number is positive

# ### Using `return` in Recursive Functions

# In recursive functions, the `return` statement is used to break out of the recursion and return the final result.

def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n - 1)

print(factorial(5))  # Output: 120

# ### Advanced Example: Computing Fibonacci Numbers

# Let's look at an advanced example using the `return` statement in a recursive function to compute Fibonacci numbers.

def fibonacci(n):
    if n <= 0:
        return "Input should be a positive integer"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

print(fibonacci(10))  # Output: 34

# ### Using `return` in Lambda Functions

# Lambda functions are small anonymous functions that can also use the `return` statement implicitly.

square = lambda x: x * x
print(square(5))  # Output: 25

# ### Using `return` in Higher-Order Functions

# Higher-order functions are functions that take other functions as arguments or return functions as their result. `return` can be used to return such functions.

def outer_function(x):
    def inner_function(y):
        return x + y
    return inner_function

add_five = outer_function(5)
print(add_five(10))  # Output: 15

# ### Best Practices

# 1. **Return Early**: Use `return` to exit a function as soon as you know the result. This can make your code more readable and reduce nesting.
# 2. **Single Responsibility**: Ensure your function performs one task and returns a result related to that task.
# 3. **Use Tuples for Multiple Values**: If you need to return multiple values, use tuples for clarity and ease of use.
# 4. **Avoid Side Effects**: Functions should avoid modifying global variables or causing other side effects. The `return` value should be the primary means of communicating the result.

# ### Example: Refactored Code with Early `return`

# Instead of deeply nested conditionals, use early returns to simplify your code.

# Nested
def process_value(x):
    if x > 0:
        if x % 2 == 0:
            return "Positive and even"
        else:
            return "Positive and odd"
    else:
        return "Non-positive"

# Refactored
def process_value(x):
    if x <= 0:
        return "Non-positive"
    if x % 2 == 0:
        return "Positive and even"
    return "Positive and odd"

# This comprehensive explanation should give you a solid understanding of the `return` statement in Python, from basic to advanced usage. If you have any specific questions or need further clarification on any topic, feel free to ask!
