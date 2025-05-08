'''
Nature and Purpose:

Strings: Immutable sequences of Unicode characters, designed for text manipulation.
Lists: Mutable sequences of arbitrary objects, designed for dynamic collections.
Tuples: Immutable sequences of arbitrary objects, designed for fixed collections.


Mutability:

Strings: Immutable. Once created, individual characters cannot be changed.
Lists: Mutable. Elements can be added, removed, or modified after creation.
Tuples: Immutable. Once created, elements cannot be changed.


Creation and Syntax:

Strings: Created with quotes (single or double) or the str() constructor.
Lists: Created with square brackets [] or the list() constructor.
Tuples: Created with parentheses () or the tuple() constructor.


Performance:

Strings: Generally fast for text operations, but concatenation can be slow.
Lists: Fast for append and pop operations, slower for insert and delete in the middle.
Tuples: Slightly faster than lists for creation and iteration due to immutability.


Memory Usage:

Strings: Memory-efficient for text data.
Lists: More memory overhead due to mutability.
Tuples: Generally use less memory than lists due to immutability.


Use Cases:

Strings: Text processing, file I/O, data representation.
Lists: Dynamic collections, storing heterogeneous data, implementing data structures.
Tuples: Fixed collections, dictionary keys, returning multiple values from functions.


Methods and Operations:

Strings: Rich set of string-specific methods (e.g., split(), join(), upper()).
Lists: Many methods for modification (e.g., append(), extend(), sort()).
Tuples: Limited methods due to immutability (mainly count() and index()).


Iteration:

All three types support iteration, but tuples and strings are slightly faster due to immutability.


Slicing:

All three types support slicing, but slicing strings and tuples creates new objects.


Nested Structures:

Strings: Cannot be nested (a character is not a string).
Lists: Can contain other lists, allowing for multi-dimensional structures.
Tuples: Can contain other tuples, allowing for fixed multi-dimensional structures.


Hashing:

Strings: Hashable, can be used as dictionary keys.
Lists: Not hashable, cannot be used as dictionary keys.
Tuples: Hashable if all elements are hashable, can be used as dictionary keys.


Copying:

Strings: Copying creates a new reference to the same string object.
Lists: Shallow copying creates a new list with references to the same objects.
Tuples: Copying creates a new reference to the same tuple object.



In summary, the choice between strings, lists, and tuples depends on the specific requirements of your program. Use strings for text, lists for dynamic collections that may change, and tuples for fixed collections or when you need an immutable sequence of items.
'''

# Comparison of Strings, Lists, and Tuples in Python

# 1. Basic Nature and Creation

# Strings: Immutable sequences of Unicode characters
string_example = "Hello, World!"
string_from_constructor = str("Hello")

# Lists: Mutable sequences of arbitrary objects
list_example = [1, 2, 3, 4, 5]
list_from_constructor = list((1, 2, 3))

# Tuples: Immutable sequences of arbitrary objects
tuple_example = (1, 2, 3, 4, 5)
tuple_from_constructor = tuple([1, 2, 3])

print(f"String: {string_example}")
print(f"List: {list_example}")
print(f"Tuple: {tuple_example}")

# 2. Mutability

# Strings are immutable
try:
    string_example[0] = 'h'
except TypeError as e:
    print(f"String mutability error: {e}")

# Lists are mutable
list_example[0] = 10
print(f"Modified list: {list_example}")

# Tuples are immutable
try:
    tuple_example[0] = 10
except TypeError as e:
    print(f"Tuple mutability error: {e}")

# 3. Operations and Methods

# Common operations
print(f"String length: {len(string_example)}")
print(f"List length: {len(list_example)}")
print(f"Tuple length: {len(tuple_example)}")

# String-specific methods
print(f"Uppercase string: {string_example.upper()}")
print(f"Split string: {string_example.split()}")

# List-specific methods
list_example.append(6)
print(f"List after append: {list_example}")
list_example.sort()
print(f"Sorted list: {list_example}")

# Tuple methods (limited due to immutability)
print(f"Count of 1 in tuple: {tuple_example.count(1)}")
print(f"Index of 3 in tuple: {tuple_example.index(3)}")

# 4. Performance

import timeit

def performance_test():
    # String concatenation
    string_time = timeit.timeit("''.join(str(i) for i in range(1000))", number=1000)
    
    # List building
    list_time = timeit.timeit("list(range(1000))", number=1000)
    
    # Tuple creation
    tuple_time = timeit.timeit("tuple(range(1000))", number=1000)
    
    print(f"String concatenation time: {string_time}")
    print(f"List creation time: {list_time}")
    print(f"Tuple creation time: {tuple_time}")

performance_test()

# 5. Memory Usage

import sys

string_mem = sys.getsizeof(string_example)
list_mem = sys.getsizeof(list_example)
tuple_mem = sys.getsizeof(tuple_example)

print(f"String memory usage: {string_mem} bytes")
print(f"List memory usage: {list_mem} bytes")
print(f"Tuple memory usage: {tuple_mem} bytes")

# 6. Use Cases

# Strings: Text processing
text = "Python is awesome"
words = text.split()
print(f"Words in text: {words}")

# Lists: Dynamic collections
dynamic_list = []
for i in range(5):
    dynamic_list.append(i ** 2)
print(f"Dynamic list: {dynamic_list}")

# Tuples: Fixed collections, dictionary keys
point = (3, 4)
distance = (point[0] ** 2 + point[1] ** 2) ** 0.5
print(f"Distance from origin: {distance}")

coordinates = {(0, 0): "Origin", (1, 0): "Right", (0, 1): "Up"}
print(f"Point (0, 0): {coordinates[(0, 0)]}")

# 7. Iteration

# All three types are iterable
for char in string_example[:5]:
    print(char, end=' ')
print()  # Newline

for item in list_example[:5]:
    print(item, end=' ')
print()  # Newline

for item in tuple_example[:5]:
    print(item, end=' ')
print()  # Newline

# 8. Slicing

print(f"String slice: {string_example[7:12]}")
print(f"List slice: {list_example[1:4]}")
print(f"Tuple slice: {tuple_example[1:4]}")

# 9. Conversion between types

string_to_list = list(string_example)
list_to_tuple = tuple(list_example)
tuple_to_string = ''.join(map(str, tuple_example))

print(f"String to list: {string_to_list}")
print(f"List to tuple: {list_to_tuple}")
print(f"Tuple to string: {tuple_to_string}")