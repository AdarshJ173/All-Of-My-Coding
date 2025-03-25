# What Are Dictionaries?
# Dictionaries are a built-in data structure in Python that store data in key-value pairs.
# They are unordered, mutable, and indexed by keys, which can be of any immutable type.

# Why Use Dictionaries?
# 1. Fast Lookups: Dictionaries provide fast and efficient lookup for values based on their keys.
# 2. Flexible Keys: Keys can be of various immutable types, including strings, numbers, and tuples.
# 3. Dynamic: Dictionaries can grow and shrink as needed, allowing dynamic data handling.
# 4. Readable Code: Using key-value pairs makes the code more readable and easier to understand.

# Basic dictionary creation
person = {"name" : "Alice", "age": 30, "city": "New York"}

# 2. Accessing and Modifying Dictionary Elements

# Accessing values using keys
print(person["name"])  # Output: Alice

# Modifying values
person["age"] = 31
print(person)  # Output: {'name': 'Alice', 'age': 31, 'city': 'New York'}

# Adding new key-value pairs
person["job"] = "Engineer"
print(person)  # Output: {'name': 'Alice', 'age': 31, 'city': 'New York', 'job': 'Engineer'}

# 3. Dictionary Methods

# get(): Safely retrieve values (returns None if key doesn't exist)
print(person.get("salary"))  # Output: None
print(person.get("job"))  

# keys(), values(), items(): Return views of dictionary's keys, values, and key-value pairs
print(person.keys())  # Output: dict_keys(['name', 'age', 'city', 'job'])
print(person.values())  # Output: dict_values(['Alice', 31, 'New York', 'Engineer'])
print(person.items())  # Output: dict_items([('name', 'Alice'), ('age', 31), ('city', 'New York'), ('job', 'Engineer')])

# pop(): Remove a key-value pair and return its value
removed_job = person.pop("job")
# print(person.pop("job"))
print(removed_job)  # Output: Engineer
print(person)  # Output: {'name': 'Alice', 'age': 31, 'city': 'New York'}

# 4. Dictionary Comprehensions
# Create dictionaries using comprehensions

# Create a dictionary of squares
squares = {x: x**2 for x in range(5)}
print(squares)  # Output: {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}

# Create a dictionary from two lists
keys = ["a", "b", "c"]
values = [1, 2, 3]
combined = {k: v for k, v in zip(keys, values)}
print(combined)  # Output: {'a': 1, 'b': 2, 'c': 3}

# 5. Nested Dictionaries
# Dictionaries can contain other dictionaries

print('\n')

employees = {
    "Alice": {"department": "HR", "salary": 50000},
    "Bob": {"department": "IT", "salary": 60000}
}

print(employees["Alice"]["salary"])  # Output: 50000
print(employees["Alice"]["department"])  
# print(employees["Alice"]["department"]["salary"])  
print(employees["Alice"])  

print('\n')
# 6. Advanced Dictionary Operations

# Merging dictionaries (Python 3.5+)
# Merging two dictionaries
# dict1 has keys "a" and "b" with values 1 and 2
dict1 = {"a": 1, "b": 2}
# dict2 has keys "b" and "c" with values 3 and 4
dict2 = {"b": 3, "c": 4}
# When merging, if a key is in both dictionaries, the value from the second dictionary is used
merged = {**dict1, **dict2}
# The merged dictionary will have keys "a", "b", and "c" with values 1, 3, and 4
print(merged)  # Output: {'a': 1, 'b': 3, 'c': 4}

# Using defaultdict for handling missing keys
from collections import defaultdict

word_count = defaultdict(int)
words = ["apple", "banana", "apple", "cherry"]
for word in words:
    word_count[word] += 1
print(dict(word_count))  # Output: {'apple': 2, 'banana': 1, 'cherry': 1}

# 7. Dictionary as a Cache
# Dictionaries can be used for memoization to optimize recursive functions

def fibonacci(n, cache={}):
    if n in cache:
        return cache[n]
    if n <= 1:
        return n
    cache[n] = fibonacci(n-1, cache) + fibonacci(n-2, cache)
    return cache[n]

print(fibonacci(100))  # Output: 354224848179261915075 (computed efficiently)

# 8. Ordered Dictionaries
# Since Python 3.7, regular dictionaries maintain insertion order
# For earlier versions, use OrderedDict

from collections import OrderedDict

ordered = OrderedDict()
ordered["first"] = 1
ordered["second"] = 2
ordered["third"] = 3

print(list(ordered.keys()))  # Output: ['first', 'second', 'third']

# 9. Dictionary Views
# Dictionary views provide a dynamic view on the dictionary's entries

grades = {"Alice": 85, "Bob": 92, "Charlie": 78}
grade_view = grades.items()
print(grade_view)  # Output: dict_items([('Alice', 85), ('Bob', 92), ('Charlie', 78)])

grades["David"] = 95
print(grade_view)  # Output: dict_items([('Alice', 85), ('Bob', 92), ('Charlie', 78), ('David', 95)])

# 10. Dictionary and Memory Efficiency
# Dictionaries are optimized for fast lookups, insertions, and deletions

# Using dictionaries for efficient data retrieval
large_dict = {str(i): i for i in range(1000000)}
print(large_dict["999999"])  # Very fast lookup

# 11. Functional Programming with Dictionaries

# Map-like operations
squared_values = {k: v**2 for k, v in grades.items()}
print(squared_values)  # Output: {'Alice': 7225, 'Bob': 8464, 'Charlie': 6084, 'David': 9025}

# Filter-like operations
high_grades = {k: v for k, v in grades.items() if v >= 90}
print(high_grades)  # Output: {'Bob': 92, 'David': 95}

# 12. Custom Dictionary Classes
# You can create custom dictionary-like classes

class LimitedDict(dict):
    def __init__(self, max_items=10):
        self.max_items = max_items
        super().__init__()
    
    def __setitem__(self, key, value):
        if len(self) >= self.max_items:
            raise KeyError("Dictionary is full")
        super().__setitem__(key, value)

limited = LimitedDict(max_items=2)
limited["a"] = 1
limited["b"] = 2
# limited["c"] = 3  # This would raise a KeyError

print(limited)  # Output: {'a': 1, 'b': 2}