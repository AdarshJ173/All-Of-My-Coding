# What Are Lists?
# Lists are a built-in data structure in Python that allows you to store multiple items in a single variable.
# Lists are ordered, mutable, and can contain elements of different types.

# Why Use Lists?
# 1. Collection of Items: Lists are useful for storing multiple items together.
# 2. Ordered: The items in a list have a defined order, and that order will not change unless explicitly modified.
# 3. Mutable: Lists can be changed after their creation, allowing you to modify, add, or remove elements.
# 4. Versatile: Lists can contain elements of different data types (integers, strings, objects, etc.).

# Basic list creation
fruits = ["apple", "banana", "cherry"]
numbers = [1, 2, 3, 4, 5]
mixed = [1, "two", 3.0, [4, 5]]


# 2. List Operations

# Accessing elements (indexing)
print(fruits[0])  # Output: apple
print(fruits[-1])  # Output: cherry (negative indexing)

# Slicing
print(numbers[1:4])  # Output: [2, 3, 4]

# List concatenation
combined = fruits + numbers
print(combined)  # Output: ['apple', 'banana', 'cherry', 1, 2, 3, 4, 5]

# List repetition
repeated = fruits * 2
print(repeated)  # Output: ['apple', 'banana', 'cherry', 'apple', 'banana', 'cherry']

# 3. List Methods
fruits = ["apple", "banana", "cherry"]

# append(): Add an element to the end of the list
fruits.append("date")
print(fruits)  # Output: ['apple', 'banana', 'cherry', 'date']

# extend(): Add all elements from an iterable to the end of the list
fruits.extend(["elderberry", "fig"])
print(fruits)  # Output: ['apple', 'banana', 'cherry', 'date', 'elderberry', 'fig']

# insert(): Insert an element at a specific position
fruits.insert(1, "apricot")
print(fruits)  # Output: ['apple', 'apricot', 'banana', 'cherry', 'date', 'elderberry', 'fig']

# remove(): Remove the first occurrence of an element
fruits.remove("banana")
print(fruits)  # Output: ['apple', 'apricot', 'cherry', 'date', 'elderberry', 'fig']

# pop(): Remove and return an element at a specific index (or the last element if no index is specified)
popped = fruits.pop(2)
print(popped)  # Output: cherry
print(fruits)  # Output: ['apple', 'apricot', 'date', 'elderberry', 'fig']

# 4. List Comprehensions
# List comprehensions provide a concise way to create lists based on existing lists or other iterables

# Create a list of squares
squares = [x**2 for x in range(1, 6)]
print(squares)  # Output: [1, 4, 9, 16, 25]

# Create a list of even numbers
evens = [x for x in range(10) if x % 2 == 0]
print(evens)  # Output: [0, 2, 4, 6, 8]

print("\n")

# 5. Nested Lists
# Lists can contain other lists, creating multi-dimensional structures

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(matrix)

# This line of code prints the element at the second row and second column of the matrix, which is 5.
print(matrix[1][1])  # Output: 5
print("\n")

# 6. Advanced List Operations

# Sorting
numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
numbers.sort()
print(numbers)  # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]

# Custom sorting
fruits = ["banana", "apple", "cherry", "date"]
fruits.sort(key=len)
print(fruits)  # Output: ['date', 'apple', 'banana', 'cherry']

# Reversing
fruits.reverse()
print(fruits)  # Output: ['cherry', 'banana', 'apple', 'date']

# 7. List as a Stack and Queue
# Lists can be used to implement stack (LIFO) and queue (FIFO) data structures

# Stack operations
stack = []
stack.append(1)  # push
stack.append(2)
stack.append(3)
print(stack.pop())  # pop, Output: 3

# Queue operations (using collections.deque for efficient queue operations)
from collections import deque
queue = deque(["Eric", "John", "Michael"])
queue.append("Terry")  # enqueue
print(queue.popleft())  # dequeue, Output: Eric

# 8. List Recursion
# Recursion can be used to process lists

def sum_list(lst):
    if not lst:
        return 0
    return lst[0] + sum_list(lst[1:])

print(sum_list([1, 2, 3, 4, 5]))  # Output: 15

# 9. List Generators
# Generators can be used to create lists efficiently for large datasets

def fibonacci_generator(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

fib_list = list(fibonacci_generator(10))
print(fib_list)  # Output: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]

# 10. Memory Efficiency with Lists
# Using lists as iterators can be memory-efficient for large datasets

large_list = range(1000000)  # This doesn't create a list in memory
for num in large_list:
    if num > 999990:
        print(num)

# 11. Functional Programming with Lists
from functools import reduce

numbers = [1, 2, 3, 4, 5]

# Map: Apply a function to all elements
squared = list(map(lambda x: x**2, numbers))
print(squared)  # Output: [1, 4, 9, 16, 25]

# Filter: Keep elements that satisfy a condition
evens = list(filter(lambda x: x % 2 == 0, numbers))
print(evens)  # Output: [2, 4]

# Reduce: Apply a function of two arguments cumulatively to the items of a sequence
sum_all = reduce(lambda x, y: x + y, numbers)
print(sum_all)  # Output: 15
# Summary
# - Lists are an essential data structure for storing and managing collections of items.
# - Lists are ordered, mutable, and can contain elements of different types.
# - Basic operations: creation, access, modification, addition, removal, slicing.
# - Use cases: storing collections, iteration, dynamic data storage.
# - Advanced operations: list comprehensions, nested lists, various list methods.
