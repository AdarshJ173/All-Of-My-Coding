'''Map, Filter and Reduce in Python '''
 
'''
In Python, map, filter, and reduce are built-in functions that are used to manipulate sequences of data. 
These functions are part of the functional programming paradigm, which is a style of programming where you write functions 
that perform operations on data, rather than writing loops and conditionals.
'''

def cube(x):
    '''
    This function returns the cube of a given number.
    :param x: The number to be cubed.
    :return: The cube of the given number.
    '''
    return x*x*x

print(cube(3))


#//MAP

l = [1,3,6,4,5,3]
'''
This is one of the methods to apply the cube function to each item in the list l.
'''
# newl = []
# for item in l:
#     newl.append(cube(item))

'''
This is another and simpler way to do it using the map function.
'''
newl = list(map(lambda x: x*x*x,l))
print(newl)

#// FILTER

def filter_fun(a):
    '''
    This function returns True if the given number is greater than 4, and False otherwise.
    :param a: The number to be checked.
    :return: True if the number is greater than 4, and False otherwise.
    '''
    return a>4

newnl = list(filter(filter_fun,l))
print(newnl)

#//REDUCE

'''
The reduce function is part of the functools module in Python, so you need to import it before using it. 
Here is a brief overview:

reduce(function, sequence): The reduce function continually applies the function to the elements of the sequence, 
reducing them to a single value. It performs a rolling computation on pairs of items from the sequence. 
The result of each computation is then used in the next computation.
'''

from functools import reduce

numbers = [1,2,3,4,5,6]

def mysum(x,y):
    '''
    This function returns the sum of two numbers.
    :param x: The first number.
    :param y: The second number.
    :return: The sum of the two numbers.
    '''
    return x+y

sum = reduce(mysum,numbers)

print(sum)


'''
# Map applies a function to every item in an iterable (e.g. list, tuple, etc.)
# and returns a new iterable with the results.

# Example: Use map to convert a list of strings to uppercase
lowercase_strings = ['hello', 'world']
uppercase_strings = list(map(str.upper, lowercase_strings))
print(uppercase_strings)  # Output: ['HELLO', 'WORLD']

# Filter creates a new iterable with the elements from an existing iterable for which a function returns True.
# Example: Use filter to remove negative numbers from a list
numbers = [-1, 2, 3, -4, 5]
positive_numbers = list(filter(lambda x: x > 0, numbers))
print(positive_numbers)  # Output: [2, 3, 5]

# Reduce applies a function of two arguments cumulatively to the items of an iterable,
# from left to right, so as to reduce the iterable to a single output.
# Example: Use reduce to find the product of all numbers in a list
from functools import reduce

numbers = [1, 2, 3, 4]
product = reduce((lambda x, y: x * y), numbers)
print(product)  # Output: 24

'''

'''
This code demonstrates the use of the map, filter, and reduce functions in Python. The map function applies a given function to each item in an iterable and returns a new iterable with the results. The filter function creates a new iterable with the elements from an existing iterable for which a function returns True. The reduce function applies a function of two arguments cumulatively to the items of an iterable, from left to right, so as to reduce the iterable to a single output.

'''















