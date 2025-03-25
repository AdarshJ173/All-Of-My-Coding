# Understanding While Loops

# Basic Idea
# A while loop allows you to repeatedly execute a block of code as long as a specified condition is true.

# Syntax:
# while condition:
#     # Code block to execute

# The loop will continue to run as long as the condition evaluates to True.
# When the condition evaluates to False, the loop stops.

# Example 1: Counting down from 5 to 1
count = 5
while count > 0:
    print(count)  # Print the current value of count
    count -= 1  # Decrement count by 1
# Explanation:
# The loop starts with count set to 5.
# As long as count is greater than 0, the loop prints the current value of count and then decreases count by 1.
# Once count becomes 0, the condition count > 0 is no longer true, so the loop stops.

print('\n')

# Example 2: Printing even numbers less than 10
number = 0
while number < 10:
    if number % 2 == 0:  # Check if the number is even
        print(number)  # Print the even number
    number += 1  # Increment the number by 1
# Explanation:
# The loop starts with number set to 0.
# As long as number is less than 10, it checks if number is even using the modulus operator %.
# If the number is even, it prints the number.
# The number is then incremented by 1.
# This continues until number reaches 10.

print('\n')

# Example 3: Using a while loop to sum numbers from 1 to 5
total = 0
num = 1
while num <= 5:
    total += num  # Add the current value of num to total
    num += 1  # Increment num by 1
print(total)  # Print the total sum
# Explanation:
# The loop starts with num set to 1.
# As long as num is less than or equal to 5, it adds the current value of num to total and increments num by 1.
# Once num becomes greater than 5, the loop stops, and the total sum is printed.

print('\n')

# In the Context of while Loops
# while loops do not have built-in parameters like range(). Instead, they depend on a condition to control the loop. For example:


i = 1
while i < 8:
    print(i)
    i += 2
# Here: Initialization: i = 1
# Condition: i < 8 (loop continues while i is less than 8)
# Increment: i += 2 (each iteration increases i by 2)

# Key Concepts:
# 1. Condition: A logical expression that evaluates to True or False.
# 2. Repetition: The loop repeats the code block as long as the condition is True.
# 3. Update: The condition must eventually become False to avoid an infinite loop.