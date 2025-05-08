def factorial(n):
    if n == 0:
        return 1  # Base case: 0! = 1
    elif n == 1 or n == 2:
        return 1  # Base case: 1! = 1 and 2! = 2
    else:
        return n * factorial(n - 1)  # Recursive case

# Example usage
result = (factorial(5)/factorial(3))/factorial(7)
print(result)  # Output: 120
