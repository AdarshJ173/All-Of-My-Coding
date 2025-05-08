# Function Caching
'''
Function caching, also known as memoization, is a technique used to speed up functions that perform expensive computations by storing the results of function calls and reusing them when the same inputs occur again.

Python provides a decorator called functools.lru_cache to implement function caching. Here's an example of how to use it:

Here's how the cached function works:

When the fibonacci function is called with an argument, the cache is checked to see if the result for that argument is already stored.
If the result is in the cache, it is returned immediately without recomputing the function.
If the result is not in the cache, the function is computed and the result is stored in the cache for future use.
Function caching can significantly improve the performance of functions that perform expensive computations, especially when the same inputs are used repeatedly. However, it's important to note that caching can also increase memory usage, so it's important to use it judiciously.
'''
import functools

import time

@functools.lru_cache(maxsize=128)
def fibonacci(n):
    if n < 2:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

@functools.lru_cache(maxsize=None)
def fx(n):
    time.sleep(5)
    return n*5

print(fx(20))
print("done for 20")
print(fx(2))
print("done for 20")
print(fx(6))
print("done for 20")

print(fx(20))
print("done for 20")
print(fx(2))
print("done for 20")
print(fx(6))
print("done for 20")

print(fx(64))
print("done for 64")























































































































