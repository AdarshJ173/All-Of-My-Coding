'''FUNCTIONS'''

# A FUNCTION IS A BLOCK OF CODE THAT PERFORMS A SPECIFIC TASK WHENEVER IT IS CALLED. IN BIGGER PROGRAMS , WHERE WE HAVE LARGE AMOUNTS OF CODE , IT IS ADVISABLE TO CREATE OF USE EXISTING FUNCTIONS THAT MAKE THE PROGRAM FLOW ORGANIZED AND NEAT.

def calcgmean(a,b):
    mean = (a*b)/(a+b)
    print(mean)

def isgreater(a,b):
    if (a>b):
        print("1st is > 2nd")
    else:
        print("2nd is > 1st or =")

def islesser(a,b):
    pass
# if i want to write the function later , so i use pass

a = 19
b = 43
# gmean = (a*b)/(a+b)
# print(gmean)
calcgmean(a,b)
# if (a>b):
#         print("1st is > 2nd")
#     else:
#         print("2nd is > 1st or =")
isgreater(a,b)

c =45
d =43
# gmean2 = (a*b)/(a+b)
# print(gmean2)
calcgmean(c,d)
# if (a>b):
#         print("1st is > 2nd")
#     else:
#         print("2nd is > 1st or =")
isgreater(c,d)


'''
1.BUILT IN FUNCTIONS:
min(),max(),len(),sum(),type(),range(),dict(),list(),tuple(),set(),print(),...........
2.USER-DEFINED FUNCTIONS : are the functions defined by the user.
'''

''' Functions in Python: A First Principles Approach

A function in Python is a reusable block of code that performs a specific task. Functions help to make your code modular, organized, and easier to maintain. They allow you to encapsulate code into discrete, manageable pieces, which can be called as needed.

### Basic Concepts

1. **Definition**:
   - A function is defined using the `def` keyword, followed by the function name, parentheses `()`, and a colon `:`.

2. **Parameters**:
   - Inside the parentheses, you can specify parameters, which are inputs to the function. These parameters are optional.

3. **Body**:
   - The body of the function contains the code that executes when the function is called. It is indented to denote that it is part of the function.

4. **Return Statement**:
   - The `return` statement is used to exit the function and optionally pass back a value.

### How to Write and Use Functions

#### Example 1: A Simple Function with No Parameters

1. **Defining the Function**:
    ```python
    def greet():
        print("Hello, world!")
    ```
    - `def greet():` defines a function named `greet` with no parameters.
    - `print("Hello, world!")` is the body of the function, which prints a greeting message.

2. **Calling the Function**:
    ```python
    greet()
    ```
    - `greet()` calls the function and executes its body, printing "Hello, world!".

#### Example 2: A Function with Parameters

1. **Defining the Function**:
    ```python
    def greet_person(name):
        print("Hello, " + name + "!")
    ```
    - `def greet_person(name):` defines a function named `greet_person` that takes one parameter `name`.
    - `print("Hello, " + name + "!")` prints a personalized greeting.

2. **Calling the Function**:
    ```python
    greet_person("Alice")
    greet_person("Bob")
    ```
    - `greet_person("Alice")` calls the function with "Alice" as the argument, printing "Hello, Alice!".
    - `greet_person("Bob")` calls the function with "Bob" as the argument, printing "Hello, Bob!".

#### Example 3: A Function with a Return Value

1. **Defining the Function**:
    ```python
    def add(a, b):
        return a + b
    ```
    - `def add(a, b):` defines a function named `add` that takes two parameters `a` and `b`.
    - `return a + b` returns the sum of `a` and `b`.

2. **Calling the Function**:
    ```python
    result = add(3, 4)
    print(result)  # Output: 7
    ```
    - `result = add(3, 4)` calls the function with `3` and `4` as arguments, and stores the result (`7`) in the variable `result`.
    - `print(result)` prints the value of `result`, which is `7`.

### Detailed Explanation from First Principles

1. **Function Definition**:
    - The `def` keyword introduces a function definition.
    - The function name should be descriptive of its purpose.
    - Parameters (inputs) are specified within the parentheses.

    ```python
    def function_name(parameter1, parameter2):
        # Body of the function
    ```

2. **Function Body**:
    - The code within the function body performs the task of the function.
    - The body must be indented (usually 4 spaces).

    ```python
    def function_name(parameter1, parameter2):
        # This is the body
        result = parameter1 + parameter2
        return result
    ```

3. **Calling a Function**:
    - To use a function, you call it by its name followed by parentheses containing any arguments.
    - The function performs its task and optionally returns a value.

    ```python
    result = function_name(10, 20)
    print(result)  # Output: 30
    ```

### Summary

- **Functions** encapsulate reusable code blocks, making programs more modular and maintainable.
- **Parameters** allow functions to accept input values.
- **Return Statements** let functions send output back to the caller.
- **Indentation** is crucial for defining the function body in Python.

### Additional Examples

#### Example 4: Function with Default Parameters

1. **Defining the Function**:
    ```python
    def greet(name="world"):
        print("Hello, " + name + "!")
    ```
    - The parameter `name` has a default value of `"world"`.

2. **Calling the Function**:
    ```python
    greet()           # Output: Hello, world!
    greet("Alice")    # Output: Hello, Alice!
    ```

#### Example 5: Function with Multiple Return Values

1. **Defining the Function**:
    ```python
    def arithmetic_operations(a, b):
        return a + b, a - b, a * b, a / b
    ```

2. **Calling the Function**:
    ```python
    add, subtract, multiply, divide = arithmetic_operations(10, 2)
    print(add, subtract, multiply, divide)  # Output: 12 8 20 5.0
    ```

By understanding these basic principles and examples, you can start writing and using functions in Python effectively.
'''

def greet():
    print("Hello, Aayu!")

greet()

def greet_person(name):
    print("Hello, " + str(name) + " ,how are u?")
greet_person("Aayu")
greet_person("Aayu")
greet_person("adarsh")
greet_person("subu")
greet_person("sibu")
greet_person("hadoo")