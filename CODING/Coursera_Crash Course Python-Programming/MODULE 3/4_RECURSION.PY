# Recursion in Python: From First Principles to Advanced Concepts

# 1. What is Recursion?
# --------------------------------------------------
# Recursion is a programming technique where a function calls itself
# to solve a problem by breaking it down into smaller, similar subproblems.
# It's like solving a big puzzle by solving smaller versions of the same puzzle.

# 2. Why Use Recursion?
# --------------------------------------------------
# a) Simplicity: Some problems are naturally recursive and easier to solve recursively.
# b) Elegance: Recursive solutions can be more concise and easier to understand.
# c) Divide and Conquer: It's effective for problems that can be broken down into similar subproblems.

# 3. Basic Structure of a Recursive Function
# --------------------------------------------------
# A recursive function typically has two parts:
# 1. Base case: The simplest scenario where the function returns a result directly.
# 2. Recursive case: Where the function calls itself with a simpler version of the problem.

def factorial(n):
    """
    Calculate the factorial of a number using recursion.

    The factorial of a number n is the product of all positive integers less than or equal to n.
    For example, the factorial of 5 (denoted as 5!) is 5 * 4 * 3 * 2 * 1 = 120.

    This function uses a technique called recursion, where the function calls itself to solve smaller instances of the same problem.

    Parameters:
    n (int): The number to calculate the factorial of. Must be a non-negative integer.

    Returns:
    int: The factorial of the input number.
    """
    # Base case: The simplest scenario where we know the answer directly.
    # If n is 0 or 1, the factorial is 1 by definition.
    if n == 0 or n == 1 :
        return 1
    # Recursive case: The function calls itself with a smaller value (n-1).
    # We multiply n by the factorial of (n-1) to get the factorial of n.
    else:
        return n * factorial(n - 1)

# Example usage:
# Calculate the factorial of 5.
# The expected output is 120 because 5! = 5 * 4 * 3 * 2 * 1 = 120.
print(factorial(5))  # Output: 120
print(factorial(0))
print(factorial(1))
print(factorial(10))
print(factorial(100))
# print(factorial(1000))

# 4. Understanding Recursion: The Call Stack
# --------------------------------------------------
# When a function calls itself, each call is added to the call stack.
# Let's visualize this with a simple example:

def countdown(n):
    print(n)
    # Base case
    if n == 0:
        return 
    # Recursive case
    else:
        countdown(n - 1)

countdown(3)
# Output:
# 3
# 2
# 1
# 0

# The call stack for countdown(3) looks like this:
# countdown(3)
#   -> countdown(2)
#      -> countdown(1)
#         -> countdown(0)
#         <- return
#      <- return
#   <- return
# <- return

# 5. Common Recursive Patterns
# --------------------------------------------------

# 5.1 Linear Recursion
# The function calls itself once in each recursive step.

def sum_to_n(n):
    if n == 1:
        return 1
    else:
        return n + sum_to_n(n - 1)

print(sum_to_n(5))  # Output: 15

# 5.2 Binary Recursion
# The function calls itself twice in each recursive step.
print("\n")

# Let's understand the Fibonacci sequence with a simple example.
# The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
# It starts with 0 and 1. So, the sequence goes: 0, 1, 1, 2, 3, 5, 8, ...

# We can calculate the Fibonacci sequence using a recursive function.
# A recursive function is a function that calls itself.

def fibonacci(n):
    # Base case: If n is 0 or 1, return n.
    if n <= 1:
        return n
    # Recursive case: Otherwise, return the sum of the previous two Fibonacci numbers.
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Let's see how it works by calculating the 6th Fibonacci number.
print(fibonacci(6))  # Output: 8
# Explanation:
# fibonacci(6) = fibonacci(5) + fibonacci(4)
# fibonacci(5) = fibonacci(4) + fibonacci(3)
# fibonacci(4) = fibonacci(3) + fibonacci(2)
# fibonacci(3) = fibonacci(2) + fibonacci(1)
# fibonacci(2) = fibonacci(1) + fibonacci(0)
# fibonacci(1) = 1
# fibonacci(0) = 0
# So, fibonacci(6) = 8

print("\n")

# 5.3 Tail Recursion
# The recursive call is the last operation in the function.

def factorial_tail(n, accumulator=1):
    if n == 0:
        return accumulator
    else:
        return factorial_tail(n - 1, n * accumulator)

print(factorial_tail(5))  # Output: 120

# 6. Recursive vs Iterative Solutions
# --------------------------------------------------
# Let's compare recursive and iterative solutions for the factorial function:

# Recursive
def factorial_recursive(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial_recursive(n - 1)

# Iterative
def factorial_iterative(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

print(factorial_recursive(5))  # Output: 120
print(factorial_iterative(5))  # Output: 120

# 7. When to Use Recursion
# --------------------------------------------------
# Recursion is particularly useful for:
# a) Tree-like structures (e.g., file systems, HTML DOM)
# b) Divide and conquer algorithms (e.g., QuickSort, MergeSort)
# c) Backtracking problems (e.g., solving mazes, generating permutations)

# Example: Traversing a file system
import os

def list_files(directory):
    for item in os.listdir(directory):
        item_path = os.path.join(directory, item)
        if os.path.isfile(item_path):
            print(f"File: {item_path}")
        elif os.path.isdir(item_path):
            print(f"Directory: {item_path}")
            list_files(item_path)  # Recursive call for subdirectories

# Usage: list_files("/path/to/directory")

# 8. Potential Pitfalls and Solutions
# --------------------------------------------------

# 8.1 Infinite Recursion
# Always ensure your base case is reachable to avoid infinite recursion.

# Bad example (infinite recursion):
def bad_factorial(n):
    return n * bad_factorial(n - 1)  # No base case!

# 8.2 Stack Overflow
# Deep recursion can lead to stack overflow. Use tail recursion or iteration for very large inputs.

# 8.3 Redundant Calculations
# Some recursive algorithms (like naive Fibonacci) recalculate the same values multiple times.
# Solution: Use memoization or dynamic programming.

def fibonacci_memo(n, memo={}):
    if n in memo:
        return memo[n]
    if n <= 1:
        return n
    memo[n] = fibonacci_memo(n-1, memo) + fibonacci_memo(n-2, memo)
    return memo[n]

print(fibonacci_memo(100))  # Fast, even for large numbers

# 9. Advanced Recursive Techniques
# --------------------------------------------------

# 9.1 Mutual Recursion
# Two or more functions call each other recursively.

def is_even(n):
    if n == 0:
        return True
    else:
        return is_odd(n - 1)

def is_odd(n):
    if n == 0:
        return False
    else:
        return is_even(n - 1)

print(is_even(4))  # Output: True
print(is_odd(4))   # Output: False

# 9.2 Nested Recursion
# The recursive call is an argument to another recursive call.

def ackermann(m, n):
    if m == 0:
        return n + 1
    elif n == 0:
        return ackermann(m - 1, 1)
    else:
        return ackermann(m - 1, ackermann(m, n - 1))

print(ackermann(3, 2))  # Output: 29

# 10. Practical Applications
# --------------------------------------------------

# 10.1 Sorting Algorithms
def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quicksort(left) + middle + quicksort(right)

print(quicksort([3, 6, 8, 10, 1, 2, 1]))  # Output: [1, 1, 2, 3, 6, 8, 10]

# 10.2 Fractal Generation
import turtle

def draw_tree(branch_length, t):
    if branch_length > 5:
        t.forward(branch_length)
        t.right(20)
        draw_tree(branch_length - 15, t)
        t.left(40)
        draw_tree(branch_length - 15, t)
        t.right(20)
        t.backward(branch_length)

# Usage:
# t = turtle.Turtle()
# t.left(90)
# t.up()
# t.backward(100)
# t.down()
# t.color("green")
# draw_tree(75, t)
# turtle.done()

# Conclusion
# --------------------------------------------------
# Recursion is a powerful technique that can lead to elegant solutions for complex problems.
# It's essential to understand both its strengths and limitations.
# With practice, you'll develop an intuition for when and how to apply recursive thinking effectively.