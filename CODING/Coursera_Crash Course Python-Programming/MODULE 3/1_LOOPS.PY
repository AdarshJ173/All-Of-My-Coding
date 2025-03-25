# What Are Loops?
# Loops are used in programming to repeat a block of code multiple times. The primary reason for using loops is to avoid redundancy and make code more efficient and manageable.

# Why Use Loops?
# 1. Efficiency: Instead of writing the same code multiple times, you can loop through the code a specific number of times or until a condition is met.
# 2. Automation: Loops allow you to automate repetitive tasks, making the code more dynamic and flexible.
# 3. Scalability: Loops can handle a large amount of data with a few lines of code, making it easier to work with big datasets or perform complex calculations.

# Types of Loops in Python
# 1. For Loop: Used for iterating over a sequence (like a list, tuple, dictionary, set, or string).
# 2. While Loop: Repeats as long as a condition is true.

# For Loop
# Syntax:
# for variable in sequence:
#     # code block to be executed

# Example: Print each item in a list.
fruits = ["apple", "banana", "cherry"]
for i in fruits:
    print(i)


# Use Cases for For Loops
# 1. Iterating over a list or array: Processing each element in a collection.
# 2. Range-based iteration: Executing a block of code a specific number of times.
# 3. String manipulation: Iterating over characters in a string.

print("\n")

# Range Example:
# Print numbers from 0 to 4
for i in range(5):
    print(i)

print("\n")

# String Example:
# Print each character in a string
for char in "hello":
    print(char)

print("\n")

# While Loop
# Syntax:
# while condition:
#     # code block to be executed

# Example: Print numbers from 1 to 5.
count = 1
while count <= 5:
    print(count)
    count += 1

print("the loop is done")

print("\n")

# Use Cases for While Loops
# 1. Condition-based iteration: Repeating a block of code as long as a condition is true.
# 2. Waiting for an event: Running code until an external event occurs.
# 3. Endless loops: Continuous execution until explicitly stopped (use with caution).

# Example with Condition:
# Print numbers until the condition is met
number = 0
while number < 3:
    print("Number is less than 3")
    number += 1

print("\n")

# Combining For and While Loops
# In real-world scenarios, you might use both loops together to achieve more complex logic.

# Example: Find prime numbers in a range.
start = 10  # Initialize the start of the range to 10
end = 20  # Initialize the end of the range to 20

for num in range(start, end + 1):  # Loop through each number from start to end (inclusive)
    if num > 1:  # Check if the number is greater than 1 (since prime numbers are greater than 1)
        is_prime = True  # Assume the number is prime until proven otherwise
        i = 2  # Initialize a divisor variable to 2
        while i <= num // 2:  # Loop from 2 to half of the number (no need to check beyond half)
            if num % i == 0:  # Check if the number is divisible by the current divisor
                is_prime = False  # If divisible, the number is not prime
                break  # Exit the while loop as we found a divisor
            i += 1  # Increment the divisor
        if is_prime:  # If the number is still considered prime
            print(num)  # Print the prime number
print("the prime num are given to u")  # Print a message indicating the end of prime number output
print("\n")  # Print a newline for separation

# Advanced Use Cases
# 1. Nested Loops: A loop inside another loop. Used for multidimensional data structures.
# 2. Loop Control Statements: break, continue, and pass.

# Nested Loop Example:
# Print a 3x3 matrix
for i in range(3):
    for j in range(3):
        print(i,j)  # Move to the next line after each row
    print()


print("\n")
print("\n")

# Loop Control Statements:
# Using break to exit a loop
for i in range(10):
    if i == 5:
        break
    print(i)

print("\n")

# Using continue to skip an iteration
for i in range(10):
    if i % 2 == 0:
        # The continue keyword is used to skip the current iteration of a loop and move to the next iteration.
        # When the continue statement is encountered, the loop does not execute the remaining code in the current iteration.
        continue
    print(i)

print("\n")

# Summary
# - For Loops: Best for iterating over a known sequence or range.
# - While Loops: Best for indefinite iterations where the end condition is not known beforehand.
# - Use Cases: Lists, arrays, strings, condition-based loops, nested loops, and controlling loop execution with break and continue.
