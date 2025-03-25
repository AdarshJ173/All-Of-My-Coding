# Solutions for 50 Python Basic Concepts Questions

# 1. Calculate the area of a rectangle
length = 5
width = 3
area = length * width
print(f"The area of the rectangle is: {area}")

# 2. Create a list of favorite fruits and print the second item
fruits = ["apple", "banana", "cherry", "date"]
print(fruits[1])

# 3. Function to print a greeting
def greet(name):
    print(f"Hello, {name}!")

greet("Alice")

# 4. Use f-string to print name and age
name = "John"
age = 30
print(f"My name is {name} and I am {age} years old.")

# 5. Print string length
text = "Python Programming"
print(len(text))

# 6. Check if a number is even or odd
num = 7
if num % 2 == 0:
    print("Even")
else:
    print("Odd")

# 7. Print numbers in a list multiplied by 2
numbers = [1, 2, 3, 4, 5]
for num in numbers:
    print(num * 2)

# 8. Countdown from 10 to 1
count = 10
while count > 0:
    print(count)
    count -= 1

# 9. Check voting eligibility
age = int(input("Enter your age: "))
if age >= 18:
    print("You are old enough to vote.")
else:
    print("You are not old enough to vote.")

# 10. Function to return sum of two numbers
def add_numbers(a, b):
    return a + b

print(add_numbers(5, 3))

# 11. Split a sentence into words
sentence = "This is a sample sentence"
words = sentence.split()
print(words)

# 12. Use break to exit a loop
for i in range(1, 11):
    if i == 5:
        break
    print(i)

# 13. Skip even numbers using continue
for i in range(1, 11):
    if i % 2 == 0:
        continue
    print(i)

# 14. Convert Celsius to Fahrenheit
celsius = 30
fahrenheit = (celsius * 9/5) + 32
print(f"{celsius}°C is equal to {fahrenheit}°F")

# 15. List slicing to print every other number
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(numbers[::2])

# 16. Function to reverse a string
def reverse_string(s):
    return s[::-1]

print(reverse_string("Hello"))

# 17. Ask for favorite color
color = input("What's your favorite color? ")
print(f"Your favorite color is {color}")

# 18. Check if a year is a leap year
def is_leap_year(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

print(is_leap_year(2024))

# 19. Sum of even numbers in a list
def sum_even_numbers(numbers):
    return sum(num for num in numbers if num % 2 == 0)

print(sum_even_numbers([1, 2, 3, 4, 5, 6]))

# 20. String formatting for name and age
name = "Alice"
age = 25
print("My name is {} and I am {} years old.".format(name, age))

# 21. Generate a multiplication table
def multiplication_table(n):
    for i in range(1, 11):
        print(f"{n} x {i} = {n*i}")

multiplication_table(5)

# 22. Count vowels in a string
def count_vowels(s):
    vowels = "aeiouAEIOU"
    return sum(1 for char in s if char in vowels)

print(count_vowels("Hello World"))

# 23. Simple guessing game
import random

number = random.randint(1, 10)
while True:
    guess = int(input("Guess a number between 1 and 10: "))
    if guess == number:
        print("Correct!")
        break
    print("Try again!")

# 24. Remove spaces from a string
text = "Hello World Python Programming"
print(text.replace(" ", ""))

# 25. Calculate factorial
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n-1)

print(factorial(5))

# 26. Check if item exists in a list
fruits = ["apple", "banana", "cherry"]
print("banana" in fruits)

# 27. Capitalize first letter of each word
sentence = "hello world python programming"
print(sentence.title())

# 28. Find largest number in a list
def find_largest(numbers):
    return max(numbers)

print(find_largest([5, 2, 8, 1, 9]))

# 29. Check if a string is a palindrome
def is_palindrome(s):
    return s.lower() == s.lower()[::-1]

print(is_palindrome("racecar"))

# 30. Convert number to month name
def number_to_month(n):
    months = ["January", "February", "March", "April", "May", "June", 
              "July", "August", "September", "October", "November", "December"]
    return months[n-1] if 1 <= n <= 12 else "Invalid month number"

print(number_to_month(3))

# 31. Character frequency in a string
def char_frequency(s):
    return {char: s.count(char) for char in set(s)}

print(char_frequency("hello"))

# 32. List comprehension for squares
squares = [x**2 for x in range(1, 11)]
print(squares)

# 33. Simple calculator
def calculator(a, b, operation):
    if operation == "+":
        return a + b
    elif operation == "-":
        return a - b
    elif operation == "*":
        return a * b
    elif operation == "/":
        return a / b if b != 0 else "Error: Division by zero"
    else:
        return "Invalid operation"

print(calculator(5, 3, "+"))

# 34. Check if a number is prime
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

print(is_prime(17))

# 35. Create list of odd numbers
odd_numbers = list(range(1, 21, 2))
print(odd_numbers)

# 36. Find second-largest number in a list
def second_largest(numbers):
    return sorted(set(numbers))[-2]

print(second_largest([5, 2, 8, 1, 9, 9]))

# 37. Find longest word in a sentence
def longest_word(sentence):
    return max(sentence.split(), key=len)

print(longest_word("The quick brown fox jumps over the lazy dog"))

# 38. Remove punctuation from a string
import string

def remove_punctuation(s):
    return s.translate(str.maketrans("", "", string.punctuation))

print(remove_punctuation("Hello, World! How are you?"))

# 39. Print Fibonacci sequence
def fibonacci(n):
    a, b = 0, 1
    while a < n:
        print(a, end=" ")
        a, b = b, a + b

fibonacci(50)

# 40. Sort strings by length
def sort_by_length(strings):
    return sorted(strings, key=len)

print(sort_by_length(["apple", "banana", "cherry", "date"]))

# 41. Create a pattern of asterisks
def print_pattern(n):
    for i in range(1, n+1):
        print("*" * i)

print_pattern(5)

# 42. Convert days to years, months, and days
def convert_days(days):
    years = days // 365
    months = (days % 365) // 30
    remaining_days = (days % 365) % 30
    return f"{years} years, {months} months, and {remaining_days} days"

print(convert_days(400))

# 43. Reverse words in a string
def reverse_words(sentence):
    return " ".join(sentence.split()[::-1])

print(reverse_words("Hello World Python"))

# 44. Combine two lists into a dictionary
keys = ["a", "b", "c"]
values = [1, 2, 3]
result = dict(zip(keys, values))
print(result)

# 45. Check if a number is perfect
def is_perfect(n):
    return sum(i for i in range(1, n) if n % i == 0) == n

print(is_perfect(28))

# 46. Remove duplicates from a list
def remove_duplicates(numbers):
    return list(dict.fromkeys(numbers))

print(remove_duplicates([1, 2, 2, 3, 4, 4, 5]))

# 47. Validate email address
import re

def is_valid_email(email):
    pattern = r'^[\w\.-]+@[\w\.-]+\.\w+$'
    return bool(re.match(pattern, email))

print(is_valid_email("user@example.com"))

# 48. Generate random password
import random
import string

def generate_password(length):
    characters = string.ascii_letters + string.digits + string.punctuation
    return ''.join(random.choice(characters) for _ in range(length))

print(generate_password(12))

# 49. Count words in a sentence
def count_words(sentence):
    return len(sentence.split())

print(count_words("The quick brown fox jumps over the lazy dog"))

# 50. Simple to-do list
todo_list = []

def add_task(task):
    todo_list.append(task)

def remove_task(task):
    if task in todo_list:
        todo_list.remove(task)

add_task("Buy groceries")
add_task("Do laundry")
print(todo_list)
remove_task("Buy groceries")
print(todo_list)