# Python Tuples Tutorial: From Basics to Advanced

# 1. Introduction to Tuples
# Tuples are immutable sequences, typically used to store collections of heterogeneous data
# They are defined using parentheses () or the tuple() constructor

# Basic tuple creation
point = (3, 4)
person = ("Alice", 30, "New York")
empty_tuple = ()
single_item_tuple = (42,)  # Note the comma

print(point)  # Output: (3, 4)
print(person)  # Output: ('Alice', 30, 'New York')
print(type(single_item_tuple))  # Output: <class 'tuple'>

# 2. Accessing Tuple Elements

# Indexing
print(person[0])  # Output: Alice

# Negative indexing
print(person[-1])  # Output: New York

# Slicing
print(person[1:])  # Output: (30, 'New York')

# 3. Tuple Operations

# Concatenation
tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
combined = tuple1 + tuple2
print(combined)  # Output: (1, 2, 3, 4, 5, 6)

# Repetition
repeated = tuple1 * 3
print(repeated)  # Output: (1, 2, 3, 1, 2, 3, 1, 2, 3)

# Length
print(len(person))  # Output: 3

# Membership testing
print("Alice" in person)  # Output: True

# 4. Tuple Methods

# count(): Count occurrences of an element
numbers = (1, 2, 2, 3, 2, 4)
print(numbers.count(2))  # Output: 3

# index(): Find the index of an element
print(numbers.index(3))  # Output: 3

# 5. Tuple Packing and Unpacking

# Packing
packed = 1, 2, 3  # Parentheses are optional
print(type(packed))
print(packed)  # Output: (1, 2, 3)

# Unpacking
x, y, z = packed
print(x, y, z)  # Output: 1 2 3

# Extended unpacking (Python 3.x)
a, *b, c = (1, 2, 3, 4, 5)
print(a, b, c)  # Output: 1 [2, 3, 4] 5

# 6. Tuples as Return Values
def get_coordinates():
    return (10, 20)

x, y = get_coordinates()
print(f"X: {x}, Y: {y}")  # Output: X: 10, Y: 20

# 7. Named Tuples
from collections import namedtuple

# Creating a named tuple class
Point = namedtuple('Point', ['x', 'y'])
p = Point(5, 10)
print(p.x, p.y)  # Output: 5 10

# 8. Tuples vs Lists
# Tuples are immutable, lists are mutable

# This works with lists
my_list = [1, 2, 3]
my_list[0] = 10
print(my_list)  # Output: [10, 2, 3]

# This raises an error with tuples
# my_tuple = (1, 2, 3)
# my_tuple[0] = 10  # TypeError: 'tuple' object does not support item assignment

# 9. Tuples as Dictionary Keys
# Tuples can be used as dictionary keys because they're immutable
locations = {
    (40.7128, 74.0060): "New York City",
    (34.0522, 118.2437): "Los Angeles"
}
print(locations[(40.7128, 74.0060)])  # Output: New York City

# 10. Generator Expressions with Tuples
# Similar to list comprehensions, but with parentheses
squared = tuple(x**2 for x in range(5))
print(squared)  # Output: (0, 1, 4, 9, 16)

# 11. Sorting Tuples
# Tuples are compared lexicographically
students = [
    ("Alice", "A", 15),
    ("Bob", "B", 12),
    ("Charlie", "A", 13)
]
sorted_students = sorted(students, key=lambda x: (x[1], x[2]))
print(sorted_students)
# Output: [('Alice', 'A', 15), ('Charlie', 'A', 13), ('Bob', 'B', 12)]

# 12. Memory Efficiency
import sys

# Tuples generally use less memory than lists
list_eg = [1, 2, 3, 4, 5]
tuple_eg = (1, 2, 3, 4, 5)
print(sys.getsizeof(list_eg))  # Output may vary
print(sys.getsizeof(tuple_eg))  # Output may vary, but less than list

# 13. Tuples in Functional Programming
from functools import reduce

# Using tuples with map, filter, and reduce
numbers = (1, 2, 3, 4, 5)
squared = tuple(map(lambda x: x**2, numbers))
evens = tuple(filter(lambda x: x % 2 == 0, numbers))
sum_all = reduce(lambda x, y: x + y, numbers)

print(squared)  # Output: (1, 4, 9, 16, 25)
print(evens)    # Output: (2, 4)
print(sum_all)  # Output: 15

# 14. Recursive Tuples
def fibonacci_tuple(n):
    if n <= 1:
        return (0,) * n
    else:
        prev = fibonacci_tuple(n - 1)
        return prev + (prev[-1] + prev[-2],)

print(fibonacci_tuple(10))
# Output: (0, 1, 1, 2, 3, 5, 8, 13, 21, 34)

# 15. Tuples in Multiple Assignment
# Tuples allow for easy swapping of variables
a, b = 1, 2
a, b = b, a
print(a, b)  # Output: 2 1

# 16. Tuples as Data Structures
# Tuples can represent simple structures
from typing import NamedTuple

class Student(NamedTuple):
    name: str
    age: int
    grades: tuple

alice = Student("Alice", 20, (85, 90, 88))
print(f"{alice.name} is {alice.age} years old with grades {alice.grades}")
# Output: Alice is 20 years old with grades (85, 90, 88)

# 17. Tuples in String Formatting
name = "Alice"
age = 30
print("Name: %s, Age: %d" % (name, age))
# Output: Name: Alice, Age: 30

# 18. Tuples with *args
def sum_all(*args):
    return sum(args)

print(sum_all(1, 2, 3, 4, 5))  # Output: 15

# 19. Nested Tuples
matrix = (
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9)
)
print(matrix[1][1])  # Output: 5

# 20. Tuple Performance
# Tuples are generally faster than lists for iteration
import timeit

list_time = timeit.timeit(stmt="for i in [1, 2, 3, 4, 5]: pass", number=1000000)
tuple_time = timeit.timeit(stmt="for i in (1, 2, 3, 4, 5): pass", number=1000000)

print(f"List time: {list_time}")
print(f"Tuple time: {tuple_time}")
# Tuple time is typically slightly less than list time